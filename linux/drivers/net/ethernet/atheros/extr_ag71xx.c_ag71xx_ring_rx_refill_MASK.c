
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ag71xx_ring {scalar_t__ curr; int dirty; TYPE_2__* buf; int order; } ;
struct ag71xx_desc {int ctrl; } ;
struct ag71xx {int rx_buf_offset; int ndev; struct ag71xx_ring rx_ring; } ;
struct TYPE_3__ {int rx_buf; } ;
struct TYPE_4__ {TYPE_1__ rx; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ag71xx*,TYPE_2__*,int,int ) ;
 struct ag71xx_desc* FUNC_2 (struct ag71xx_ring*,unsigned int) ;
 int VAR_1 ;
 int FUNC_3 (struct ag71xx*,int ,int ,char*,unsigned int) ;
 int VAR_2 ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct ag71xx *VAR_3)
{
 struct ag71xx_ring *VAR_4 = &VAR_3->rx_ring;
 int VAR_5 = FUNC_0(VAR_4->order) - 1;
 int VAR_6 = VAR_3->rx_buf_offset;
 unsigned int VAR_7;

 VAR_7 = 0;
 for (; VAR_4->curr - VAR_4->dirty > 0; VAR_4->dirty++) {
  struct ag71xx_desc *VAR_8;
  unsigned int VAR_9;

  VAR_9 = VAR_4->dirty & VAR_5;
  VAR_8 = FUNC_2(VAR_4, VAR_9);

  if (!VAR_4->buf[VAR_9].rx.rx_buf &&
      !FUNC_1(VAR_3, &VAR_4->buf[VAR_9], VAR_6,
     VAR_1))
   break;

  VAR_8->ctrl = VAR_0;
  VAR_7++;
 }


 FUNC_4();

 FUNC_3(VAR_3, VAR_2, VAR_3->ndev, "%u rx descriptors refilled\n",
    VAR_7);

 return VAR_7;
}
