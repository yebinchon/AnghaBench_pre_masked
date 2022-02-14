
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {int dev_init_timeo; int reset_ack_timeo; TYPE_2__* ahw; TYPE_1__* pdev; int portnum; } ;
struct TYPE_4__ {int physical_port; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct qlcnic_adapter*,int ) ;
 int FUNC_2 (int *,char*,int) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*,int ,int*) ;

int
FUNC_4(struct qlcnic_adapter *VAR_7) {

 int VAR_8;
 u32 VAR_9;

 VAR_9 = FUNC_1(VAR_7, VAR_1);
 VAR_9 = FUNC_0(VAR_9, VAR_7->portnum);
 if ((VAR_9 & 0x3) != VAR_6) {
  FUNC_2(&VAR_7->pdev->dev,
   "Not an Ethernet NIC func=%u\n", VAR_9);
  return -VAR_0;
 }
 VAR_7->ahw->physical_port = (VAR_9 >> 2);
 if (FUNC_3(VAR_7, VAR_4, &VAR_8))
  VAR_8 = VAR_2;

 VAR_7->dev_init_timeo = VAR_8;

 if (FUNC_3(VAR_7, VAR_5, &VAR_8))
  VAR_8 = VAR_3;

 VAR_7->reset_ack_timeo = VAR_8;

 return 0;
}
