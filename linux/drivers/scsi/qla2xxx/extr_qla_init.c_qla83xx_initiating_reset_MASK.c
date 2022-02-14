
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_12__ {scalar_t__ nic_core_reset_owner; } ;
struct qla_hw_data {TYPE_1__ flags; } ;
struct TYPE_13__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,int*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,TYPE_2__*,int,char*,...) ;
 int VAR_7 ;
 char* FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*,int ,int*) ;
 int FUNC_9 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int
FUNC_10(scsi_qla_host_t *VAR_8)
{
 struct qla_hw_data *VAR_9 = VAR_8->hw;
 uint32_t VAR_10, VAR_11;

 FUNC_0(VAR_8, &VAR_10);
 if ((VAR_10 & VAR_2)) {
  FUNC_3(VAR_7, VAR_8, 0xb080,
      "NIC Core reset has been disabled. idc-control=0x%x\n",
      VAR_10);
  return VAR_5;
 }


 FUNC_8(VAR_8, VAR_1, &VAR_11);
 if (VAR_9->flags.nic_core_reset_owner && VAR_11 == VAR_4) {
  FUNC_9(VAR_8, VAR_1,
      VAR_3);
  FUNC_3(VAR_7, VAR_8, 0xb056, "HW State: NEED RESET.\n");
  FUNC_5(VAR_8, VAR_0);
 } else {
  const char *VAR_12 = FUNC_4(VAR_11);

  FUNC_3(VAR_7, VAR_8, 0xb057, "HW State: %s.\n", VAR_12);



  while (VAR_11 == VAR_4) {
   FUNC_7(VAR_8, 0);
   FUNC_2(200);
   FUNC_6(VAR_8, 0);
   FUNC_8(VAR_8, VAR_1, &VAR_11);
  }
 }


 FUNC_1(VAR_8);

 return VAR_6;
}
