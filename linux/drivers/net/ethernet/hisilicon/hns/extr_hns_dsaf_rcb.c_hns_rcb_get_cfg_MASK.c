
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {void* phy_base; void* io_base; } ;
struct ring_pair_cb {size_t index; int* virq; TYPE_2__ q; int port_id_in_comm; int dev; struct rcb_common_cb* rcb_common; } ;
struct rcb_common_cb {size_t ring_num; int phy_base; int io_base; TYPE_1__* dsaf_dev; struct ring_pair_cb* ring_pair_cb; } ;
struct platform_device {int dummy; } ;
struct TYPE_3__ {int dev; int dsaf_ver; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 void* FUNC_1 (int ,size_t) ;
 int FUNC_2 (struct rcb_common_cb*) ;
 int FUNC_3 (struct rcb_common_cb*,size_t) ;
 int FUNC_4 (struct ring_pair_cb*) ;
 void* FUNC_5 (struct platform_device*,int) ;
 struct platform_device* FUNC_6 (int ) ;

int FUNC_7(struct rcb_common_cb *VAR_3)
{
 struct ring_pair_cb *VAR_4;
 u32 VAR_5;
 u32 VAR_6 = VAR_3->ring_num;
 int VAR_7 = FUNC_2(VAR_3);
 struct platform_device *VAR_8 =
  FUNC_6(VAR_3->dsaf_dev->dev);
 bool VAR_9 = FUNC_0(VAR_3->dsaf_dev->dsaf_ver);

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  VAR_4 = &VAR_3->ring_pair_cb[VAR_5];
  VAR_4->rcb_common = VAR_3;
  VAR_4->dev = VAR_3->dsaf_dev->dev;
  VAR_4->index = VAR_5;
  VAR_4->q.io_base =
   FUNC_1(VAR_3->io_base, VAR_5);
  VAR_4->port_id_in_comm =
   FUNC_3(VAR_3, VAR_5);
  VAR_4->virq[VAR_2] =
  VAR_9 ? FUNC_5(VAR_8, VAR_7 + VAR_5 * 2) :
     FUNC_5(VAR_8, VAR_7 + VAR_5 * 3 + 1);
  VAR_4->virq[VAR_1] =
  VAR_9 ? FUNC_5(VAR_8, VAR_7 + VAR_5 * 2 + 1) :
     FUNC_5(VAR_8, VAR_7 + VAR_5 * 3);
  if ((VAR_4->virq[VAR_2] == -VAR_0) ||
      (VAR_4->virq[VAR_1] == -VAR_0))
   return -VAR_0;

  VAR_4->q.phy_base =
   FUNC_1(VAR_3->phy_base, VAR_5);
  FUNC_4(VAR_4);
 }

 return 0;
}
