
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flcerr; scalar_t__ flcdone; } ;
union ich8_hws_flash_status {TYPE_2__ hsf_status; void* regval; } ;
struct TYPE_4__ {int flcgo; } ;
union ich8_hws_flash_ctrl {int regval; TYPE_1__ hsf_ctrl; } ;
typedef scalar_t__ u32 ;
struct TYPE_6__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_3__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_4, u32 VAR_5)
{
 union ich8_hws_flash_ctrl VAR_6;
 union ich8_hws_flash_status VAR_7;
 u32 VAR_8 = 0;


 if (VAR_4->mac.type >= VAR_3)
  VAR_6.regval = FUNC_1(VAR_2) >> 16;
 else
  VAR_6.regval = FUNC_0(VAR_1);
 VAR_6.hsf_ctrl.flcgo = 1;

 if (VAR_4->mac.type >= VAR_3)
  FUNC_3(VAR_2, VAR_6.regval << 16);
 else
  FUNC_2(VAR_1, VAR_6.regval);


 do {
  VAR_7.regval = FUNC_0(VAR_2);
  if (VAR_7.hsf_status.flcdone)
   break;
  FUNC_4(1);
 } while (VAR_8++ < VAR_5);

 if (VAR_7.hsf_status.flcdone && !VAR_7.hsf_status.flcerr)
  return 0;

 return -VAR_0;
}
