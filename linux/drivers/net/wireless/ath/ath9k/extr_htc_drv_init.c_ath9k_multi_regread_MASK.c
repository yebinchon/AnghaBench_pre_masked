
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ath_hw {int dummy; } ;
struct ath_common {scalar_t__ priv; } ;
struct ath9k_htc_priv {int wmi; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (int ,int ,int *,int,int *,int,int) ;
 int FUNC_2 (struct ath_common*,int ,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(void *VAR_2, u32 *VAR_3,
    u32 *VAR_4, u16 VAR_5)
{
 struct ath_hw *VAR_6 = VAR_2;
 struct ath_common *VAR_7 = FUNC_0(VAR_6);
 struct ath9k_htc_priv *VAR_8 = (struct ath9k_htc_priv *) VAR_7->priv;
 __be32 VAR_9[8];
 __be32 VAR_10[8];
 int VAR_11, VAR_12;

 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  VAR_9[VAR_11] = FUNC_4(VAR_3[VAR_11]);
 }

 VAR_12 = FUNC_1(VAR_8->wmi, VAR_1,
      (u8 *)VAR_9 , sizeof(u32) * VAR_5,
      (u8 *)VAR_10, sizeof(u32) * VAR_5,
      100);
 if (FUNC_5(VAR_12)) {
  FUNC_2(VAR_7, VAR_0,
   "Multiple REGISTER READ FAILED (count: %d)\n", VAR_5);
 }

 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  VAR_4[VAR_11] = FUNC_3(VAR_10[VAR_11]);
 }
}
