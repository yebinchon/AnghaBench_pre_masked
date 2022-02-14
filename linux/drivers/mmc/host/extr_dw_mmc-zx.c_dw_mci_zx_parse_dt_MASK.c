
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct dw_mci_zx_priv_data {struct regmap* sysc_base; } ;
struct dw_mci {struct dw_mci_zx_priv_data* priv; TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 struct dw_mci_zx_priv_data* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (struct device_node*) ;
 struct device_node* FUNC_5 (struct device_node*,char*,int ) ;
 struct regmap* FUNC_6 (struct device_node*) ;

__attribute__((used)) static int FUNC_7(struct dw_mci *VAR_3)
{
 struct device_node *VAR_4 = VAR_3->dev->of_node;
 struct device_node *VAR_5;
 struct dw_mci_zx_priv_data *VAR_6;
 struct regmap *VAR_7;
 int VAR_8;


 VAR_5 = FUNC_5(VAR_4, "zte,aon-syscon", 0);
 if (VAR_5) {
  VAR_7 = FUNC_6(VAR_5);
  FUNC_4(VAR_5);

  if (FUNC_0(VAR_7)) {
   VAR_8 = FUNC_1(VAR_7);
   if (VAR_8 != -VAR_1)
    FUNC_2(VAR_3->dev, "Can't get syscon: %d\n",
     VAR_8);
   return VAR_8;
  }
 } else {
  return 0;
 }

 VAR_6 = FUNC_3(VAR_3->dev, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_0;
 VAR_6->sysc_base = VAR_7;
 VAR_3->priv = VAR_6;

 return 0;
}
