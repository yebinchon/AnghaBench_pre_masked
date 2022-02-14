
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int ah_mibStats; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*,int ,int) ;
 struct ath_common* FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*,int *) ;
 int FUNC_5 (struct ath_common*,int ,char*) ;

void FUNC_6(struct ath_hw *VAR_12)
{
 struct ath_common *VAR_13 = FUNC_3(VAR_12);

 FUNC_5(VAR_13, VAR_0, "Enable MIB counters\n");

 FUNC_4(VAR_12, &VAR_12->ah_mibStats);

 FUNC_0(VAR_12);

 FUNC_2(VAR_12, VAR_2, 0);
 FUNC_2(VAR_12, VAR_1, 0);
 FUNC_2(VAR_12, VAR_3,
    ~(VAR_5 | VAR_6 | VAR_4 | VAR_7)
    & 0x0f);
 FUNC_2(VAR_12, VAR_9, VAR_11);
 FUNC_2(VAR_12, VAR_10, VAR_8);

 FUNC_1(VAR_12);
}
