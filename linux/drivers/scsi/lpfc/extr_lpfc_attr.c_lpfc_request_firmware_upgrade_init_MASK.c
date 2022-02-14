
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_hba {int cfg_request_firmware_upgrade; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct lpfc_hba *VAR_1, int VAR_2)
{
 if (VAR_2 >= 0 && VAR_2 <= 1) {
  VAR_1->cfg_request_firmware_upgrade = VAR_2;
  return 0;
 }
 return -VAR_0;
}
