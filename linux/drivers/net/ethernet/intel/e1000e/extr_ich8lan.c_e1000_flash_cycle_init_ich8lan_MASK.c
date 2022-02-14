
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flcerr; int dael; int flcdone; int flcinprog; int fldesvalid; } ;
union ich8_hws_flash_status {int regval; TYPE_1__ hsf_status; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_4)
{
 union ich8_hws_flash_status VAR_5;
 s32 VAR_6 = -VAR_0;

 VAR_5.regval = FUNC_1(VAR_1);


 if (!VAR_5.hsf_status.fldesvalid) {
  FUNC_0("Flash descriptor invalid.  SW Sequencing must be used.\n");
  return -VAR_0;
 }


 VAR_5.hsf_status.flcerr = 1;
 VAR_5.hsf_status.dael = 1;
 if (VAR_4->mac.type >= VAR_3)
  FUNC_3(VAR_1, VAR_5.regval & 0xFFFF);
 else
  FUNC_2(VAR_1, VAR_5.regval);
 if (!VAR_5.hsf_status.flcinprog) {




  VAR_5.hsf_status.flcdone = 1;
  if (VAR_4->mac.type >= VAR_3)
   FUNC_3(VAR_1, VAR_5.regval & 0xFFFF);
  else
   FUNC_2(VAR_1, VAR_5.regval);
  VAR_6 = 0;
 } else {
  s32 VAR_7;




  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
   VAR_5.regval = FUNC_1(VAR_1);
   if (!VAR_5.hsf_status.flcinprog) {
    VAR_6 = 0;
    break;
   }
   FUNC_4(1);
  }
  if (!VAR_6) {



   VAR_5.hsf_status.flcdone = 1;
   if (VAR_4->mac.type >= VAR_3)
    FUNC_3(VAR_1,
       VAR_5.regval & 0xFFFF);
   else
    FUNC_2(VAR_1, VAR_5.regval);
  } else {
   FUNC_0("Flash controller busy, cannot get access\n");
  }
 }

 return VAR_6;
}
