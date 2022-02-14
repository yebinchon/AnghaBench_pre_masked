
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ledctl_mode2; } ;
struct e1000_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_5)
{
 u32 VAR_6;
 u32 VAR_7;

 VAR_6 = VAR_5->mac.ledctl_mode2;
 if (!(VAR_2 & FUNC_0(VAR_4))) {



  for (VAR_7 = 0; VAR_7 < 4; VAR_7++)
   if (((VAR_5->mac.ledctl_mode2 >> (VAR_7 * 8)) & 0xFF) ==
       VAR_1)
    VAR_6 |= (VAR_0 << (VAR_7 * 8));
 }
 FUNC_1(VAR_3, VAR_6);

 return 0;
}
