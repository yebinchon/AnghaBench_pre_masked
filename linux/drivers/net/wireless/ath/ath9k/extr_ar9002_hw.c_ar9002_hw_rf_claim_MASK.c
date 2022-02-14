
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int analog5GhzRev; } ;
struct ath_hw {TYPE_1__ hw_version; } ;


 int FUNC_0 (int ) ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ath_hw*,int ,int) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (int ,char*,int) ;

int FUNC_5(struct ath_hw *VAR_2)
{
 u32 VAR_3;

 FUNC_1(VAR_2, FUNC_0(0), 0x00000007);

 VAR_3 = FUNC_2(VAR_2);
 switch (VAR_3 & VAR_0) {
 case 0:
  VAR_3 = 128;
  break;
 case 128:
 case 129:
 case 130:
 case 131:
  break;
 default:
  FUNC_4(FUNC_3(VAR_2),
   "Radio Chip Rev 0x%02X not supported\n",
   VAR_3 & VAR_0);
  return -VAR_1;
 }

 VAR_2->hw_version.analog5GhzRev = VAR_3;

 return 0;
}
