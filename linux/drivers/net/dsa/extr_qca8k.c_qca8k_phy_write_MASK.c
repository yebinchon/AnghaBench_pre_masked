
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qca8k_priv {int dummy; } ;
struct dsa_switch {struct qca8k_priv* priv; } ;


 int FUNC_0 (struct qca8k_priv*,int,int,int ) ;

__attribute__((used)) static int
FUNC_1(struct dsa_switch *VAR_0, int VAR_1, int VAR_2, u16 VAR_3)
{
 struct qca8k_priv *VAR_4 = VAR_0->priv;

 return FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3);
}
