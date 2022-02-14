
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e6060_priv {struct dsa_switch* ds; } ;
struct dsa_switch {struct mv88e6060_priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct mv88e6060_priv*) ;
 int FUNC_1 (struct mv88e6060_priv*) ;
 int FUNC_2 (struct mv88e6060_priv*,int) ;
 int FUNC_3 (struct mv88e6060_priv*) ;

__attribute__((used)) static int FUNC_4(struct dsa_switch *VAR_1)
{
 struct mv88e6060_priv *VAR_2 = VAR_1->priv;
 int VAR_3;
 int VAR_4;

 VAR_2->ds = VAR_1;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;



 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = FUNC_2(VAR_2, VAR_4);
  if (VAR_3 < 0)
   return VAR_3;
 }

 return 0;
}
