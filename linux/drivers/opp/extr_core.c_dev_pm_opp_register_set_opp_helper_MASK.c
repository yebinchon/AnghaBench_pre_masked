
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opp_table {int (* set_opp ) (struct dev_pm_set_opp_data*) ;int opp_list; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct opp_table* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 struct opp_table* FUNC_2 (struct device*) ;
 int FUNC_3 (struct opp_table*) ;
 int FUNC_4 (int *) ;

struct opp_table *FUNC_5(struct device *VAR_3,
   int (*VAR_4)(struct dev_pm_set_opp_data *VAR_5))
{
 struct opp_table *VAR_6;

 if (!VAR_4)
  return FUNC_0(-VAR_1);

 VAR_6 = FUNC_2(VAR_3);
 if (!VAR_6)
  return FUNC_0(-VAR_2);


 if (FUNC_1(!FUNC_4(&VAR_6->opp_list))) {
  FUNC_3(VAR_6);
  return FUNC_0(-VAR_0);
 }


 if (!VAR_6->set_opp)
  VAR_6->set_opp = VAR_4;

 return VAR_6;
}
