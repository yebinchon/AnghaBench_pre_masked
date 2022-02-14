
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int is_monitoring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_hw*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ath_hw*) ;





 int FUNC_2 (struct ath_hw*,int ,int ) ;
 int FUNC_3 (struct ath_hw*,int ,int,int) ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct ath_hw *VAR_6, int VAR_7)
{
 u32 VAR_8 = VAR_5 | VAR_3;
 u32 VAR_9 = VAR_4;

 FUNC_1(VAR_6);
 switch (VAR_7) {
 case 132:
  if (!FUNC_0(VAR_6)) {
   VAR_9 |= VAR_3;
   FUNC_5(VAR_6, VAR_0, VAR_1);
   break;
  }

 case 129:
 case 130:
 case 131:
  VAR_9 |= VAR_5;

 case 128:
  FUNC_2(VAR_6, VAR_0, VAR_1);
  break;
 default:
  if (!VAR_6->is_monitoring)
   VAR_9 = 0;
  break;
 }
 FUNC_3(VAR_6, VAR_2, VAR_9, VAR_8);
 FUNC_4(VAR_6);
}
