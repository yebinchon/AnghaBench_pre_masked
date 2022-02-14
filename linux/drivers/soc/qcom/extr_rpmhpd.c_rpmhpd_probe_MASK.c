
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct rpmhpd_desc {size_t num_pds; struct rpmhpd** rpmhpds; } ;
struct TYPE_4__ {int opp_to_performance_state; int set_performance_state; int power_on; int power_off; } ;
struct rpmhpd {TYPE_1__ pd; scalar_t__ parent; int res_name; int addr; struct device* dev; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct genpd_onecell_data {size_t num_domains; TYPE_1__** domains; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*,int) ;
 TYPE_1__** FUNC_4 (struct device*,size_t,int,int ) ;
 struct genpd_onecell_data* FUNC_5 (struct device*,int,int ) ;
 struct rpmhpd_desc* FUNC_6 (struct device*) ;
 int FUNC_7 (int ,struct genpd_onecell_data*) ;
 int FUNC_8 (scalar_t__,TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int *,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (struct rpmhpd*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_9)
{
 int VAR_10, VAR_11;
 size_t VAR_12;
 struct device *VAR_13 = &VAR_9->dev;
 struct genpd_onecell_data *VAR_14;
 struct rpmhpd **VAR_15;
 const struct rpmhpd_desc *VAR_16;

 VAR_16 = FUNC_6(VAR_13);
 if (!VAR_16)
  return -VAR_1;

 VAR_15 = VAR_16->rpmhpds;
 VAR_12 = VAR_16->num_pds;

 VAR_14 = FUNC_5(VAR_13, sizeof(*VAR_14), VAR_4);
 if (!VAR_14)
  return -VAR_3;

 VAR_14->domains = FUNC_4(VAR_13, VAR_12, sizeof(*VAR_14->domains),
         VAR_4);
 if (!VAR_14->domains)
  return -VAR_3;

 VAR_14->num_domains = VAR_12;

 for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
  if (!VAR_15[VAR_10]) {
   FUNC_3(VAR_13, "rpmhpds[%d] is empty\n", VAR_10);
   continue;
  }

  VAR_15[VAR_10]->dev = VAR_13;
  VAR_15[VAR_10]->addr = FUNC_0(VAR_15[VAR_10]->res_name);
  if (!VAR_15[VAR_10]->addr) {
   FUNC_2(VAR_13, "Could not find RPMh address for resource %s\n",
    VAR_15[VAR_10]->res_name);
   return -VAR_2;
  }

  VAR_11 = FUNC_1(VAR_15[VAR_10]->res_name);
  if (VAR_11 != VAR_0) {
   FUNC_2(VAR_13, "RPMh slave ID mismatch\n");
   return -VAR_1;
  }

  VAR_11 = FUNC_10(VAR_15[VAR_10]);
  if (VAR_11)
   return VAR_11;

  VAR_15[VAR_10]->pd.power_off = VAR_6;
  VAR_15[VAR_10]->pd.power_on = VAR_7;
  VAR_15[VAR_10]->pd.set_performance_state = VAR_8;
  VAR_15[VAR_10]->pd.opp_to_performance_state = VAR_5;
  FUNC_9(&VAR_15[VAR_10]->pd, ((void*)0), 1);

  VAR_14->domains[VAR_10] = &VAR_15[VAR_10]->pd;
 }


 for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
  if (!VAR_15[VAR_10])
   continue;
  if (VAR_15[VAR_10]->parent)
   FUNC_8(VAR_15[VAR_10]->parent,
            &VAR_15[VAR_10]->pd);
 }

 return FUNC_7(VAR_9->dev.of_node, VAR_14);
}
