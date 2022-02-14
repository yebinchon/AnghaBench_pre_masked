
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct iwl_priv {int tx_flush; int workqueue; int status; } ;


 int FUNC_0 (struct iwl_priv*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct iwl_priv *VAR_2,
       u8 VAR_3, u32 VAR_4)
{
 if (VAR_3 == 1 && VAR_4 == VAR_1) {
  FUNC_0(VAR_2, "Tx flush command to flush out all frames\n");
  if (!FUNC_2(VAR_0, &VAR_2->status))
   FUNC_1(VAR_2->workqueue, &VAR_2->tx_flush);
 }
}
