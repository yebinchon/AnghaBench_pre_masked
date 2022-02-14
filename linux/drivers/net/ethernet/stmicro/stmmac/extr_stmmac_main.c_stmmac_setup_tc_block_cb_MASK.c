
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_priv {int dev; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;


 int VAR_0 ;


 int FUNC_0 (struct stmmac_priv*) ;
 int FUNC_1 (struct stmmac_priv*) ;
 int FUNC_2 (struct stmmac_priv*,struct stmmac_priv*,void*) ;
 int FUNC_3 (struct stmmac_priv*,struct stmmac_priv*,void*) ;
 int FUNC_4 (int ,void*) ;

__attribute__((used)) static int FUNC_5(enum tc_setup_type VAR_1, void *VAR_2,
        void *VAR_3)
{
 struct stmmac_priv *VAR_4 = VAR_3;
 int VAR_5 = -VAR_0;

 if (!FUNC_4(VAR_4->dev, VAR_2))
  return VAR_5;

 FUNC_0(VAR_4);

 switch (VAR_1) {
 case 128:
  VAR_5 = FUNC_3(VAR_4, VAR_4, VAR_2);
  break;
 case 129:
  VAR_5 = FUNC_2(VAR_4, VAR_4, VAR_2);
  break;
 default:
  break;
 }

 FUNC_1(VAR_4);
 return VAR_5;
}
