
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int sta_id1_defaults; int opmode; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ath_hw*) ;
 int VAR_6 ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*,int ,int,int ) ;
 int FUNC_3 (struct ath_hw*,int ,int) ;
 struct ath_common* FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*,int ) ;
 int FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (struct ath_common*) ;

__attribute__((used)) static void FUNC_8(struct ath_hw *VAR_7,
      u32 VAR_8, u32 VAR_9)
{
 struct ath_common *VAR_10 = FUNC_4(VAR_7);

 FUNC_0(VAR_7);

 FUNC_2(VAR_7, VAR_3, VAR_8
    | VAR_4
    | VAR_7->sta_id1_defaults,
    ~VAR_5);
 FUNC_7(VAR_10);
 FUNC_3(VAR_7, VAR_0, VAR_9);
 FUNC_6(VAR_7);
 FUNC_3(VAR_7, VAR_1, ~0);
 FUNC_3(VAR_7, VAR_2, VAR_6);

 FUNC_1(VAR_7);

 FUNC_5(VAR_7, VAR_7->opmode);
}
