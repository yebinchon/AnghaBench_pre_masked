
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int VAR_0 ;





 int FUNC_0 (struct e1000_hw*,int ,int ,int *) ;
 int FUNC_1 (struct e1000_hw*,int ,int ,int *) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_1, u16 VAR_2, u16 VAR_3,
     u16 *VAR_4)
{
 s32 VAR_5;

 switch (VAR_1->mac.type) {
 case 130:
 case 129:
 case 128:
  VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
  break;
 case 132:
 case 131:
  VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }

 return VAR_5;
}
