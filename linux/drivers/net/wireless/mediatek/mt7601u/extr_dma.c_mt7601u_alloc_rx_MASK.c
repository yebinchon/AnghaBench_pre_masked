
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int entries; TYPE_1__* e; struct mt7601u_dev* dev; } ;
struct mt7601u_dev {TYPE_2__ rx_q; } ;
struct TYPE_3__ {int p; int urb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct mt7601u_dev *VAR_4)
{
 int VAR_5;

 FUNC_1(&VAR_4->rx_q, 0, sizeof(VAR_4->rx_q));
 VAR_4->rx_q.dev = VAR_4;
 VAR_4->rx_q.entries = VAR_3;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_4->rx_q.e[VAR_5].urb = FUNC_2(0, VAR_1);
  VAR_4->rx_q.e[VAR_5].p = FUNC_0(VAR_2);

  if (!VAR_4->rx_q.e[VAR_5].urb || !VAR_4->rx_q.e[VAR_5].p)
   return -VAR_0;
 }

 return 0;
}
