
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nb8800_priv {int dummy; } ;
struct mii_bus {struct nb8800_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mii_bus*) ;
 int FUNC_1 (struct nb8800_priv*,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct mii_bus *VAR_2, u32 VAR_3)
{
 struct nb8800_priv *VAR_4 = VAR_2->priv;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5)
  return VAR_5;

 FUNC_1(VAR_4, VAR_1, VAR_3);
 FUNC_2(10);
 FUNC_1(VAR_4, VAR_1, VAR_3 | VAR_0);

 return FUNC_0(VAR_2);
}
