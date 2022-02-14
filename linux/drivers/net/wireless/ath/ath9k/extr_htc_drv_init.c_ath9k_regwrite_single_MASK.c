
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int u8 ;
typedef int u32 ;
struct ath_hw {int dummy; } ;
struct ath_common {scalar_t__ priv; } ;
struct ath9k_htc_priv {int wmi; } ;
typedef int buf ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (int ,int ,int *,int,int *,int,int) ;
 int FUNC_2 (struct ath_common*,int ,char*,int ,int) ;
 int const FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(void *VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct ath_hw *VAR_5 = VAR_2;
 struct ath_common *VAR_6 = FUNC_0(VAR_5);
 struct ath9k_htc_priv *VAR_7 = (struct ath9k_htc_priv *) VAR_6->priv;
 const __be32 VAR_8[2] = {
  FUNC_3(VAR_4),
  FUNC_3(VAR_3),
 };
 int VAR_9;

 VAR_9 = FUNC_1(VAR_7->wmi, VAR_1,
     (u8 *) &VAR_8, sizeof(VAR_8),
     (u8 *) &VAR_3, sizeof(VAR_3),
     100);
 if (FUNC_4(VAR_9)) {
  FUNC_2(VAR_6, VAR_0, "REGISTER WRITE FAILED:(0x%04x, %d)\n",
   VAR_4, VAR_9);
 }
}
