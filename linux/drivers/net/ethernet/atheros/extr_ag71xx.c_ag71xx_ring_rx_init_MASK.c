
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct ag71xx_ring {scalar_t__ dirty; scalar_t__ curr; int * buf; scalar_t__ descs_dma; int order; } ;
struct ag71xx_desc {int ctrl; scalar_t__ next; } ;
struct ag71xx {int rx_buf_offset; struct net_device* ndev; struct ag71xx_ring rx_ring; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ag71xx*,int *,int ,int ) ;
 struct ag71xx_desc* FUNC_2 (struct ag71xx_ring*,unsigned int) ;
 int VAR_3 ;
 int FUNC_3 (struct ag71xx*,int ,struct net_device*,char*,struct ag71xx_desc*,scalar_t__) ;
 int VAR_4 ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct ag71xx *VAR_5)
{
 struct ag71xx_ring *VAR_6 = &VAR_5->rx_ring;
 struct net_device *VAR_7 = VAR_5->ndev;
 int VAR_8 = FUNC_0(VAR_6->order) - 1;
 int VAR_9 = FUNC_0(VAR_6->order);
 unsigned int VAR_10;
 int VAR_11;

 VAR_11 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  struct ag71xx_desc *VAR_12 = FUNC_2(VAR_6, VAR_10);

  VAR_12->next = (u32)(VAR_6->descs_dma +
   VAR_0 * ((VAR_10 + 1) & VAR_8));

  FUNC_3(VAR_5, VAR_4, VAR_7, "RX desc at %p, next is %08x\n",
     VAR_12, VAR_12->next);
 }

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  struct ag71xx_desc *VAR_13 = FUNC_2(VAR_6, VAR_10);

  if (!FUNC_1(VAR_5, &VAR_6->buf[VAR_10], VAR_5->rx_buf_offset,
     VAR_3)) {
   VAR_11 = -VAR_2;
   break;
  }

  VAR_13->ctrl = VAR_1;
 }


 FUNC_4();

 VAR_6->curr = 0;
 VAR_6->dirty = 0;

 return VAR_11;
}
