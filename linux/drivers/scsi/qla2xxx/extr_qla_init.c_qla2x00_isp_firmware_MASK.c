
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_8__ {scalar_t__ disable_risc_code_load; } ;
struct qla_hw_data {int fw_srisc_address; TYPE_1__ flags; } ;
struct TYPE_9__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*,int,char*) ;
 int VAR_2 ;
 int FUNC_1 (int ,TYPE_2__*,int,char*) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,int *,int *,int *,int *,int *,int *) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_4(scsi_qla_host_t *VAR_4)
{
 int VAR_5;
 uint16_t VAR_6, VAR_7, VAR_8;
 uint8_t VAR_9, VAR_10, VAR_11;
 struct qla_hw_data *VAR_12 = VAR_4->hw;


 VAR_5 = VAR_0;

 if (VAR_12->flags.disable_risc_code_load) {
  FUNC_1(VAR_3, VAR_4, 0x0079, "RISC CODE NOT loaded.\n");


  VAR_5 = FUNC_3(VAR_4, VAR_12->fw_srisc_address);
  if (VAR_5 == VAR_1) {

   VAR_5 = FUNC_2(VAR_4, &VAR_6, &VAR_11,
       &VAR_10, &VAR_9, &VAR_7, &VAR_8);
  }
 }

 if (VAR_5)
  FUNC_0(VAR_2, VAR_4, 0x007a,
      "**** Load RISC code ****.\n");

 return (VAR_5);
}
