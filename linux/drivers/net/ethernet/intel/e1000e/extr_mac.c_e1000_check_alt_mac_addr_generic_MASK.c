
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {int (* rar_set ) (struct e1000_hw*,scalar_t__*,int ) ;} ;
struct TYPE_6__ {scalar_t__ type; TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ func; } ;
struct e1000_hw {TYPE_3__ mac; TYPE_1__ bus; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int,int,int*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (scalar_t__*) ;
 int FUNC_3 (struct e1000_hw*,scalar_t__*,int ) ;

s32 FUNC_4(struct e1000_hw *VAR_6)
{
 u32 VAR_7;
 s32 VAR_8;
 u16 VAR_9, VAR_10, VAR_11;
 u8 VAR_12[VAR_2];

 VAR_8 = FUNC_0(VAR_6, VAR_4, 1, &VAR_11);
 if (VAR_8)
  return VAR_8;


 if (VAR_6->mac.type == VAR_5)
  return 0;

 VAR_8 = FUNC_0(VAR_6, VAR_3, 1,
     &VAR_10);
 if (VAR_8) {
  FUNC_1("NVM Read Error\n");
  return VAR_8;
 }

 if ((VAR_10 == 0xFFFF) ||
     (VAR_10 == 0x0000))

  return 0;

 if (VAR_6->bus.func == VAR_1)
  VAR_10 += VAR_0;
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7 += 2) {
  VAR_9 = VAR_10 + (VAR_7 >> 1);
  VAR_8 = FUNC_0(VAR_6, VAR_9, 1, &VAR_11);
  if (VAR_8) {
   FUNC_1("NVM Read Error\n");
   return VAR_8;
  }

  VAR_12[VAR_7] = (u8)(VAR_11 & 0xFF);
  VAR_12[VAR_7 + 1] = (u8)(VAR_11 >> 8);
 }


 if (FUNC_2(VAR_12)) {
  FUNC_1("Ignoring Alternate Mac Address with MC bit set\n");
  return 0;
 }





 VAR_6->mac.ops.rar_set(VAR_6, VAR_12, 0);

 return 0;
}
