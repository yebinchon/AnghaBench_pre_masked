
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sunxi_priv_data {int regmap_field; TYPE_1__* variant; } ;
struct TYPE_2__ {int default_syscon_value; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct sunxi_priv_data *VAR_0)
{
 u32 VAR_1 = VAR_0->variant->default_syscon_value;

 FUNC_0(VAR_0->regmap_field, VAR_1);
}
