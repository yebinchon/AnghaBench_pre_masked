
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int flcdone; scalar_t__ flcerr; } ;
union ich8_hws_flash_status {TYPE_4__ hsf_status; void* regval; } ;
struct TYPE_6__ {int fldbcount; int flcycle; } ;
union ich8_hws_flash_ctrl {int regval; TYPE_2__ hsf_ctrl; } ;
typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_7__ {scalar_t__ type; } ;
struct TYPE_5__ {int flash_base_addr; } ;
struct e1000_hw {TYPE_3__ mac; TYPE_1__ nvm; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static s32 FUNC_8(struct e1000_hw *VAR_10, u32 VAR_11,
       u8 VAR_12, u16 VAR_13)
{
 union ich8_hws_flash_status VAR_14;
 union ich8_hws_flash_ctrl VAR_15;
 u32 VAR_16;
 u32 VAR_17 = 0;
 s32 VAR_18;
 u8 VAR_19 = 0;

 if (VAR_10->mac.type >= VAR_9) {
  if (VAR_12 != 4 || VAR_11 > VAR_7)
   return -VAR_0;
 } else {
  if (VAR_12 < 1 || VAR_12 > 2 || VAR_11 > VAR_7)
   return -VAR_0;
 }

 VAR_16 = ((VAR_7 & VAR_11) +
        VAR_10->nvm.flash_base_addr);

 do {
  FUNC_7(1);

  VAR_18 = FUNC_1(VAR_10);
  if (VAR_18)
   break;



  if (VAR_10->mac.type >= VAR_9)
   VAR_15.regval = FUNC_4(VAR_6) >> 16;
  else
   VAR_15.regval = FUNC_3(VAR_5);


  VAR_15.hsf_ctrl.fldbcount = VAR_12 - 1;
  VAR_15.hsf_ctrl.flcycle = VAR_1;




  if (VAR_10->mac.type >= VAR_9)
   FUNC_6(VAR_6, VAR_15.regval << 16);
  else
   FUNC_5(VAR_5, VAR_15.regval);

  FUNC_6(VAR_3, VAR_16);

  if (VAR_12 == 1)
   VAR_17 = (u32)VAR_13 & 0x00FF;
  else
   VAR_17 = (u32)VAR_13;

  FUNC_6(VAR_4, VAR_17);




  VAR_18 =
      FUNC_0(VAR_10,
           VAR_8);
  if (!VAR_18)
   break;






  VAR_14.regval = FUNC_3(VAR_6);
  if (VAR_14.hsf_status.flcerr)

   continue;
  if (!VAR_14.hsf_status.flcdone) {
   FUNC_2("Timeout error - flash cycle did not complete.\n");
   break;
  }
 } while (VAR_19++ < VAR_2);

 return VAR_18;
}
