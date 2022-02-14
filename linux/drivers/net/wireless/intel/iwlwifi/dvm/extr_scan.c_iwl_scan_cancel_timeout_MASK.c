
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_priv {int status; int mutex; } ;


 int FUNC_0 (struct iwl_priv*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct iwl_priv*) ;
 int FUNC_2 (struct iwl_priv*) ;
 unsigned long VAR_1 ;
 int FUNC_3 (int *) ;
 unsigned long FUNC_4 (unsigned long) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;

void FUNC_8(struct iwl_priv *VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4 = VAR_1 + FUNC_4(VAR_3);

 FUNC_3(&VAR_2->mutex);

 FUNC_0(VAR_2, "Scan cancel timeout\n");

 FUNC_1(VAR_2);

 while (FUNC_7(VAR_1, VAR_4)) {
  if (!FUNC_6(VAR_0, &VAR_2->status))
   goto finished;
  FUNC_5(20);
 }

 return;

 finished:
 FUNC_2(VAR_2);
}
