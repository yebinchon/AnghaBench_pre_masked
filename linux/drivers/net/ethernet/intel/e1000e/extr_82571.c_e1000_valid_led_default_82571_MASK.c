
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int,int *) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_6, u16 *VAR_7)
{
 s32 VAR_8;

 VAR_8 = FUNC_0(VAR_6, VAR_5, 1, VAR_7);
 if (VAR_8) {
  FUNC_1("NVM Read Error\n");
  return VAR_8;
 }

 switch (VAR_6->mac.type) {
 case 130:
 case 129:
 case 128:
  if (*VAR_7 == VAR_3)
   *VAR_7 = VAR_1;
  break;
 default:
  if (*VAR_7 == VAR_2 ||
      *VAR_7 == VAR_4)
   *VAR_7 = VAR_0;
  break;
 }

 return 0;
}
