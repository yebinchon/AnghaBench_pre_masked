
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct rpmpd_desc {size_t num_pds; int max_state; struct rpmpd** rpmpds; } ;
struct TYPE_8__ {int opp_to_performance_state; int set_performance_state; int power_on; int power_off; } ;
struct rpmpd {TYPE_1__ pd; int max_state; struct qcom_smd_rpm* rpm; } ;
struct qcom_smd_rpm {int dummy; } ;
struct TYPE_9__ {int of_node; int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct genpd_onecell_data {size_t num_domains; TYPE_1__** domains; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 struct qcom_smd_rpm* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char*,int) ;
 TYPE_1__** FUNC_3 (TYPE_2__*,size_t,int,int ) ;
 struct genpd_onecell_data* FUNC_4 (TYPE_2__*,int,int ) ;
 struct rpmpd_desc* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,struct genpd_onecell_data*) ;
 int FUNC_7 (TYPE_1__*,int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_8)
{
 int VAR_9;
 size_t VAR_10;
 struct genpd_onecell_data *VAR_11;
 struct qcom_smd_rpm *VAR_12;
 struct rpmpd **VAR_13;
 const struct rpmpd_desc *VAR_14;

 VAR_12 = FUNC_1(VAR_8->dev.parent);
 if (!VAR_12) {
  FUNC_0(&VAR_8->dev, "Unable to retrieve handle to RPM\n");
  return -VAR_1;
 }

 VAR_14 = FUNC_5(&VAR_8->dev);
 if (!VAR_14)
  return -VAR_0;

 VAR_13 = VAR_14->rpmpds;
 VAR_10 = VAR_14->num_pds;

 VAR_11 = FUNC_4(&VAR_8->dev, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_2;

 VAR_11->domains = FUNC_3(&VAR_8->dev, VAR_10, sizeof(*VAR_11->domains),
         VAR_3);
 VAR_11->num_domains = VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  if (!VAR_13[VAR_9]) {
   FUNC_2(&VAR_8->dev, "rpmpds[] with empty entry at index=%d\n",
     VAR_9);
   continue;
  }

  VAR_13[VAR_9]->rpm = VAR_12;
  VAR_13[VAR_9]->max_state = VAR_14->max_state;
  VAR_13[VAR_9]->pd.power_off = VAR_5;
  VAR_13[VAR_9]->pd.power_on = VAR_6;
  VAR_13[VAR_9]->pd.set_performance_state = VAR_7;
  VAR_13[VAR_9]->pd.opp_to_performance_state = VAR_4;
  FUNC_7(&VAR_13[VAR_9]->pd, ((void*)0), 1);

  VAR_11->domains[VAR_9] = &VAR_13[VAR_9]->pd;
 }

 return FUNC_6(VAR_8->dev.of_node, VAR_11);
}
