
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct rtl_priv {int dummy; } ;
struct btc_coexist {int dummy; } ;


 int FUNC_0 (struct btc_coexist*,struct seq_file*) ;
 struct btc_coexist* FUNC_1 (struct rtl_priv*) ;
 int FUNC_2 (struct seq_file*,char*) ;

void FUNC_3(struct rtl_priv *VAR_0, struct seq_file *VAR_1)
{
 struct btc_coexist *VAR_2 = FUNC_1(VAR_0);

 if (!VAR_2) {
  FUNC_2(VAR_1, "btc_coexist context is NULL!\n");
  return;
 }

 FUNC_0(VAR_2, VAR_1);
}
