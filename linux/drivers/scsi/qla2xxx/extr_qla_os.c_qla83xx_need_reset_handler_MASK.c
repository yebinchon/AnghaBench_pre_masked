
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct qla_hw_data {unsigned long fcoe_reset_timeout; } ;
struct TYPE_8__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_1__*,int,char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int*) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

__attribute__((used)) static void
FUNC_7(scsi_qla_host_t *VAR_8)
{
 struct qla_hw_data *VAR_9 = VAR_8->hw;
 uint32_t VAR_10, VAR_11;
 unsigned long VAR_12;


 VAR_12 = VAR_5 + (VAR_9->fcoe_reset_timeout * VAR_0);
 while (1) {
  FUNC_4(VAR_8, VAR_2, &VAR_10);
  FUNC_4(VAR_8, VAR_3, &VAR_11);
  if ((VAR_10 & VAR_11) == VAR_11)
   break;

  if (FUNC_6(VAR_5, VAR_12)) {
   FUNC_1(VAR_7, VAR_8, 0xb067,
       "RESET ACK TIMEOUT! drv_presence=0x%x "
       "drv_ack=0x%x\n", VAR_11, VAR_10);





   if (VAR_10 != VAR_11)
    FUNC_5(VAR_8, VAR_3,
        VAR_10);
   break;
  }

  FUNC_3(VAR_8, 0);
  FUNC_0(1000);
  FUNC_2(VAR_8, 0);
 }

 FUNC_5(VAR_8, VAR_1, VAR_4);
 FUNC_1(VAR_6, VAR_8, 0xb068, "HW State: COLD/RE-INIT.\n");
}
