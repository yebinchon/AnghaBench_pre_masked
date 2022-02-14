
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qca8k_priv {int dummy; } ;
struct dsa_switch {scalar_t__ priv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct qca8k_priv*,unsigned char const*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct dsa_switch *VAR_0, int VAR_1,
     const unsigned char *VAR_2, u16 VAR_3)
{
 struct qca8k_priv *VAR_4 = (struct qca8k_priv *)VAR_0->priv;
 u16 VAR_5 = FUNC_0(VAR_1);

 return FUNC_1(VAR_4, VAR_2, VAR_5, VAR_3);
}
