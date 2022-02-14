
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int dummy; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,int) ;
 int FUNC_2 (struct ath_hw*,int) ;
 int FUNC_3 (struct ath_hw*,int) ;
 int FUNC_4 (struct ath_common*,int ,char*,int,int) ;

__attribute__((used)) static void FUNC_5(struct ath_hw *VAR_1, int VAR_2)
{
 struct ath_common *VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = (VAR_2 - 3) / 2;

 FUNC_4(VAR_3, VAR_0, "ACK timeout %u slottime %u\n",
  VAR_2, VAR_4);
 FUNC_3(VAR_1, VAR_4);
 FUNC_1(VAR_1, VAR_2);
 FUNC_2(VAR_1, VAR_2);
}
