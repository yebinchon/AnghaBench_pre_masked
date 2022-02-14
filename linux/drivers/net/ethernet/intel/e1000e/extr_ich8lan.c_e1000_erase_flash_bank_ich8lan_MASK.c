
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int berasesz; int flcdone; scalar_t__ flcerr; } ;
union ich8_hws_flash_status {TYPE_3__ hsf_status; void* regval; } ;
struct TYPE_4__ {int flcycle; } ;
union ich8_hws_flash_ctrl {int regval; TYPE_1__ hsf_ctrl; } ;
typedef scalar_t__ u32 ;
struct e1000_nvm_info {int flash_bank_size; scalar_t__ flash_base_addr; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_2__ mac; struct e1000_nvm_info nvm; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ VAR_11 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static s32 FUNC_6(struct e1000_hw *VAR_12, u32 VAR_13)
{
 struct e1000_nvm_info *VAR_14 = &VAR_12->nvm;
 union ich8_hws_flash_status VAR_15;
 union ich8_hws_flash_ctrl VAR_16;
 u32 VAR_17;

 u32 VAR_18 = VAR_14->flash_bank_size * 2;
 s32 VAR_19;
 s32 VAR_20 = 0;
 s32 VAR_21, VAR_22, VAR_23;

 VAR_15.regval = FUNC_2(VAR_6);
 switch (VAR_15.hsf_status.berasesz) {
 case 0:

  VAR_23 = VAR_7;
  VAR_22 = VAR_18 / VAR_7;
  break;
 case 1:
  VAR_23 = VAR_8;
  VAR_22 = 1;
  break;
 case 2:
  VAR_23 = VAR_10;
  VAR_22 = 1;
  break;
 case 3:
  VAR_23 = VAR_9;
  VAR_22 = 1;
  break;
 default:
  return -VAR_0;
 }


 VAR_17 = VAR_12->nvm.flash_base_addr;
 VAR_17 += (VAR_13) ? VAR_18 : 0;

 for (VAR_21 = 0; VAR_21 < VAR_22; VAR_21++) {
  do {
   u32 VAR_24 = VAR_3;


   VAR_19 = FUNC_1(VAR_12);
   if (VAR_19)
    return VAR_19;




   if (VAR_12->mac.type >= VAR_11)
    VAR_16.regval =
        FUNC_3(VAR_6) >> 16;
   else
    VAR_16.regval = FUNC_2(VAR_5);

   VAR_16.hsf_ctrl.flcycle = VAR_1;
   if (VAR_12->mac.type >= VAR_11)
    FUNC_5(VAR_6,
       VAR_16.regval << 16);
   else
    FUNC_4(VAR_5, VAR_16.regval);





   VAR_17 += (VAR_21 * VAR_23);
   FUNC_5(VAR_4, VAR_17);

   VAR_19 = FUNC_0(VAR_12, VAR_24);
   if (!VAR_19)
    break;





   VAR_15.regval = FUNC_2(VAR_6);
   if (VAR_15.hsf_status.flcerr)

    continue;
   else if (!VAR_15.hsf_status.flcdone)
    return VAR_19;
  } while (++VAR_20 < VAR_2);
 }

 return 0;
}
