
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opp_table {scalar_t__ prop_name; int opp_list; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct opp_table* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 struct opp_table* FUNC_2 (struct device*) ;
 int FUNC_3 (struct opp_table*) ;
 scalar_t__ FUNC_4 (char const*,int ) ;
 int FUNC_5 (int *) ;

struct opp_table *FUNC_6(struct device *VAR_2, const char *VAR_3)
{
 struct opp_table *VAR_4;

 VAR_4 = FUNC_2(VAR_2);
 if (!VAR_4)
  return FUNC_0(-VAR_0);


 FUNC_1(!FUNC_5(&VAR_4->opp_list));


 if (VAR_4->prop_name)
  return VAR_4;

 VAR_4->prop_name = FUNC_4(VAR_3, VAR_1);
 if (!VAR_4->prop_name) {
  FUNC_3(VAR_4);
  return FUNC_0(-VAR_0);
 }

 return VAR_4;
}
