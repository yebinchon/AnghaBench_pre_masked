
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_priv {int mutex; int hw; int trans; } ;


 int FUNC_0 (struct iwl_priv*,char*) ;
 int FUNC_1 (struct iwl_priv*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (struct iwl_priv*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct iwl_priv *VAR_0)
{
 FUNC_6(&VAR_0->mutex);
 FUNC_2(VAR_0->hw);
 if (FUNC_5(VAR_0, 0)) {
  FUNC_1(VAR_0, "flush request fail\n");
  goto done;
 }
 FUNC_0(VAR_0, "wait transmit/flush all frames\n");
 FUNC_4(VAR_0->trans, 0xffffffff);
done:
 FUNC_3(VAR_0->hw);
 FUNC_7(&VAR_0->mutex);
}
