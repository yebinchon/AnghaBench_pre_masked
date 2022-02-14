
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transport_container {int dummy; } ;
struct raid_data {int component_list; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,struct raid_data*) ;
 struct raid_data* FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct transport_container *VAR_2, struct device *VAR_3,
         struct device *VAR_4)
{
 struct raid_data *VAR_5;

 FUNC_0(FUNC_2(VAR_4));

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_1(&VAR_5->component_list);
 FUNC_3(VAR_4, VAR_5);

 return 0;
}
