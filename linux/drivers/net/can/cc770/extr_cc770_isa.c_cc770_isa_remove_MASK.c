
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int id; } ;
struct net_device {int dummy; } ;
struct cc770_priv {scalar_t__ read_reg; int reg_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 scalar_t__* VAR_3 ;
 struct cc770_priv* FUNC_2 (struct net_device*) ;
 struct net_device* FUNC_3 (struct platform_device*) ;
 int * VAR_4 ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_5)
{
 struct net_device *VAR_6 = FUNC_3(VAR_5);
 struct cc770_priv *VAR_7 = FUNC_2(VAR_6);
 int VAR_8 = VAR_5->id;

 FUNC_6(VAR_6);

 if (VAR_3[VAR_8]) {
  FUNC_1(VAR_7->reg_base);
  FUNC_4(VAR_3[VAR_8], VAR_0);
 } else {
  if (VAR_7->read_reg == VAR_2)
   FUNC_5(VAR_4[VAR_8], VAR_1);
  else
   FUNC_5(VAR_4[VAR_8], VAR_0);
 }
 FUNC_0(VAR_6);

 return 0;
}
