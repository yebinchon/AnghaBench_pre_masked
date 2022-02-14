
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k {int hw_rev; } ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ath10k*,scalar_t__) ;
 int FUNC_1 (struct ath10k*,scalar_t__,int ) ;

void FUNC_2(struct ath10k *VAR_3)
{
 u32 VAR_4;

 switch (VAR_3->hw_rev) {
 case 131:
 case 133:
 case 135:
 case 134:
  VAR_4 = FUNC_0(VAR_3, VAR_2 +
     VAR_0);
  VAR_4 &= ~VAR_1;
  FUNC_1(VAR_3, VAR_2 +
       VAR_0, VAR_4);
  break;
 case 129:
 case 130:
 case 132:
 case 136:



  break;
 case 128:
  break;
 }
}
