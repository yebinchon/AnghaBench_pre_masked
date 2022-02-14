
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int bmi_eboard_id; int bmi_chip_id; scalar_t__ bmi_ids_valid; } ;
struct TYPE_3__ {int bus; } ;
struct ath10k {TYPE_2__ id; TYPE_1__ hif; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ath10k*,int ,char*,char*) ;
 int FUNC_2 (char*,size_t,char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ath10k *VAR_1, char *VAR_2,
       size_t VAR_3)
{
 if (VAR_1->id.bmi_ids_valid) {
  FUNC_2(VAR_2, VAR_3,
     "bus=%s,bmi-chip-id=%d,bmi-eboard-id=%d",
     FUNC_0(VAR_1->hif.bus),
     VAR_1->id.bmi_chip_id,
     VAR_1->id.bmi_eboard_id);

  FUNC_1(VAR_1, VAR_0, "boot using eboard name '%s'\n", VAR_2);
  return 0;
 }

 return -1;
}
