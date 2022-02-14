
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct hnae_queue {TYPE_1__* dev; int tx_ring; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int,int) ;

int FUNC_3(struct hnae_queue *VAR_4)
{
 u32 VAR_5, VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(&VAR_4->tx_ring, VAR_3);
 VAR_7 = 0;
 while (VAR_7++ < VAR_1) {
  VAR_5 = FUNC_1(&VAR_4->tx_ring, VAR_2);
  if (VAR_6 == VAR_5)
   break;

  FUNC_2(100, 200);
 }

 if (VAR_7 >= VAR_1) {
  FUNC_0(VAR_4->dev->dev, "rcb wait timeout, head not equal to tail.\n");
  return -VAR_0;
 }

 return 0;
}
