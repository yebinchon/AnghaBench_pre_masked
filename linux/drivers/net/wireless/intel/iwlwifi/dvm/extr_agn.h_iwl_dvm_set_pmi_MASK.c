
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_priv {int trans; int status; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static inline void FUNC_3(struct iwl_priv *VAR_1, bool VAR_2)
{
 if (VAR_2)
  FUNC_2(VAR_0, &VAR_1->status);
 else
  FUNC_0(VAR_0, &VAR_1->status);
 FUNC_1(VAR_1->trans, VAR_2);
}
