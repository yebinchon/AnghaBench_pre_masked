
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opp_table {int dev_list; } ;
struct opp_device {int node; struct device const* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct opp_device* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct opp_device*,struct opp_table*) ;

__attribute__((used)) static struct opp_device *FUNC_3(const struct device *VAR_1,
      struct opp_table *VAR_2)
{
 struct opp_device *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);


 VAR_3->dev = VAR_1;

 FUNC_1(&VAR_3->node, &VAR_2->dev_list);


 FUNC_2(VAR_3, VAR_2);

 return VAR_3;
}
