
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e6060_priv {int dummy; } ;
struct dsa_switch {struct mv88e6060_priv* priv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mv88e6060_priv*,int,int) ;

__attribute__((used)) static int FUNC_2(struct dsa_switch *VAR_0, int VAR_1, int VAR_2)
{
 struct mv88e6060_priv *VAR_3 = VAR_0->priv;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4 == -1)
  return 0xffff;

 return FUNC_1(VAR_3, VAR_4, VAR_2);
}
