
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct register_rmw {void* clr; void* set; void* reg; } ;
struct ath_hw {int dummy; } ;
struct ath_common {scalar_t__ priv; } ;
struct ath9k_htc_priv {int wmi; } ;
typedef int buf_ret ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (int ,int ,int *,int,int *,int,int) ;
 int FUNC_2 (struct ath_common*,int ,char*,int ,int) ;
 void* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(void *VAR_2,
     u32 VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct ath_hw *VAR_6 = VAR_2;
 struct ath_common *VAR_7 = FUNC_0(VAR_6);
 struct ath9k_htc_priv *VAR_8 = (struct ath9k_htc_priv *) VAR_7->priv;
 struct register_rmw VAR_9, VAR_10;
 int VAR_11;

 VAR_9.reg = FUNC_3(VAR_3);
 VAR_9.set = FUNC_3(VAR_4);
 VAR_9.clr = FUNC_3(VAR_5);

 VAR_11 = FUNC_1(VAR_8->wmi, VAR_1,
     (u8 *) &VAR_9, sizeof(VAR_9),
     (u8 *) &VAR_10, sizeof(VAR_10),
     100);
 if (FUNC_4(VAR_11)) {
  FUNC_2(VAR_7, VAR_0, "REGISTER RMW FAILED:(0x%04x, %d)\n",
   VAR_3, VAR_11);
 }
}
