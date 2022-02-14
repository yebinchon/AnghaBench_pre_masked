
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int flcdone; scalar_t__ flcerr; } ;
union ich8_hws_flash_status {TYPE_4__ hsf_status; int regval; } ;
struct TYPE_7__ {int fldbcount; int flcycle; } ;
union ich8_hws_flash_ctrl {int regval; TYPE_3__ hsf_ctrl; } ;
typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_6__ {int flash_base_addr; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_2__ nvm; TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static s32 FUNC_7(struct e1000_hw *VAR_9, u32 VAR_10,
        u32 *VAR_11)
{
 union ich8_hws_flash_status VAR_12;
 union ich8_hws_flash_ctrl VAR_13;
 u32 VAR_14;
 s32 VAR_15 = -VAR_0;
 u8 VAR_16 = 0;

 if (VAR_10 > VAR_6 || VAR_9->mac.type < VAR_8)
  return -VAR_0;
 VAR_14 = ((VAR_6 & VAR_10) +
        VAR_9->nvm.flash_base_addr);

 do {
  FUNC_6(1);

  VAR_15 = FUNC_1(VAR_9);
  if (VAR_15)
   break;



  VAR_13.regval = FUNC_4(VAR_5) >> 16;


  VAR_13.hsf_ctrl.fldbcount = sizeof(u32) - 1;
  VAR_13.hsf_ctrl.flcycle = VAR_1;



  FUNC_5(VAR_5, (u32)VAR_13.regval << 16);
  FUNC_5(VAR_3, VAR_14);

  VAR_15 =
     FUNC_0(VAR_9,
          VAR_7);






  if (!VAR_15) {
   *VAR_11 = FUNC_4(VAR_4);
   break;
  } else {





   VAR_12.regval = FUNC_3(VAR_5);
   if (VAR_12.hsf_status.flcerr) {

    continue;
   } else if (!VAR_12.hsf_status.flcdone) {
    FUNC_2("Timeout error - flash cycle did not complete.\n");
    break;
   }
  }
 } while (VAR_16++ < VAR_2);

 return VAR_15;
}
