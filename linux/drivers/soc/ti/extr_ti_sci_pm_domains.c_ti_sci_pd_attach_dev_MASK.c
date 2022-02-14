
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ti_sci_pm_domain {struct ti_sci_handle* ti_sci; } ;
struct TYPE_3__ {int (* is_valid ) (struct ti_sci_handle const*,int) ;} ;
struct TYPE_4__ {TYPE_1__ dev_ops; } ;
struct ti_sci_handle {TYPE_2__ ops; } ;
struct ti_sci_genpd_dev_data {int idx; int exclusive; } ;
struct of_phandle_args {int args_count; int* args; } ;
struct generic_pm_domain_data {struct ti_sci_genpd_dev_data* data; } ;
struct generic_pm_domain {int dummy; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct generic_pm_domain_data* FUNC_0 (struct device*) ;
 struct ti_sci_pm_domain* FUNC_1 (struct generic_pm_domain*) ;
 struct ti_sci_genpd_dev_data* FUNC_2 (int,int ) ;
 int FUNC_3 (struct device_node*,char*,char*,int ,struct of_phandle_args*) ;
 int FUNC_4 (struct ti_sci_handle const*,int) ;

__attribute__((used)) static int FUNC_5(struct generic_pm_domain *VAR_4,
    struct device *VAR_5)
{
 struct device_node *VAR_6 = VAR_5->of_node;
 struct of_phandle_args VAR_7;
 struct ti_sci_pm_domain *VAR_8 = FUNC_1(VAR_4);
 const struct ti_sci_handle *VAR_9 = VAR_8->ti_sci;
 struct ti_sci_genpd_dev_data *VAR_10;
 struct generic_pm_domain_data *VAR_11;
 int VAR_12, VAR_13 = 0;

 VAR_13 = FUNC_3(VAR_6, "power-domains",
      "#power-domain-cells", 0, &VAR_7);
 if (VAR_13 < 0)
  return VAR_13;

 if (VAR_7.args_count != 1 && VAR_7.args_count != 2)
  return -VAR_0;

 VAR_12 = VAR_7.args[0];





 VAR_13 = VAR_9->ops.dev_ops.is_valid(VAR_9, VAR_12);
 if (VAR_13)
  return -VAR_0;

 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->idx = VAR_12;

 VAR_10->exclusive = VAR_3;
 if (VAR_7.args_count == 2)
  VAR_10->exclusive = VAR_7.args[1] & 0x1;

 VAR_11 = FUNC_0(VAR_5);
 VAR_11->data = VAR_10;

 return 0;
}
