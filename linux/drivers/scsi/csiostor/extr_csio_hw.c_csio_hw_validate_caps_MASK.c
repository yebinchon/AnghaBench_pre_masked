
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct fw_caps_config_cmd {int fcoecaps; } ;
struct csio_mb {scalar_t__ mb; } ;
struct csio_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct csio_hw*,char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct csio_hw *VAR_3, struct csio_mb *VAR_4)
{
 struct fw_caps_config_cmd *VAR_5 = (struct fw_caps_config_cmd *)VAR_4->mb;
 uint16_t VAR_6;

 VAR_6 = FUNC_1(VAR_5->fcoecaps);

 if (!(VAR_6 & VAR_2)) {
  FUNC_0(VAR_3, "No FCoE Initiator capability in the firmware.\n");
  return -VAR_0;
 }

 if (!(VAR_6 & VAR_1)) {
  FUNC_0(VAR_3, "No FCoE Control Offload capability\n");
  return -VAR_0;
 }

 return 0;
}
