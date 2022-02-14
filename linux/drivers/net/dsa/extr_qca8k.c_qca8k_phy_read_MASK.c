
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qca8k_priv {int dummy; } ;
struct dsa_switch {struct qca8k_priv* priv; } ;


 int FUNC_0 (struct qca8k_priv*,int,int) ;

__attribute__((used)) static int
FUNC_1(struct dsa_switch *VAR_0, int VAR_1, int VAR_2)
{
 struct qca8k_priv *VAR_3 = VAR_0->priv;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_1, VAR_2);

 if (VAR_4 < 0)
  return 0xffff;

 return VAR_4;
}
