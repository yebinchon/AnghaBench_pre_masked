
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct k3_priv {int reg; } ;
struct dw_mci {int dev; struct k3_priv* priv; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct dw_mci *VAR_2, bool VAR_3)
{
 int VAR_4;
 unsigned int VAR_5;
 struct k3_priv *VAR_6;

 VAR_6 = VAR_2->priv;

 VAR_5 = VAR_3 ? VAR_0 : 0;
 VAR_4 = FUNC_1(VAR_6->reg, VAR_1,
     VAR_0, VAR_5);
 if (VAR_4) {
  FUNC_0(VAR_2->dev, "sel18 %u error\n", VAR_5);
  return VAR_4;
 }

 return 0;
}
