
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mfd_cell {int * usage_count; int num_parent_supplies; int parent_supplies; } ;
struct device {int * type; } ;
typedef int atomic_t ;


 int VAR_0 ;
 struct mfd_cell* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct device*,int ,int ) ;
 struct platform_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, void *VAR_2)
{
 struct platform_device *VAR_3;
 const struct mfd_cell *VAR_4;
 atomic_t **VAR_5 = VAR_2;

 if (VAR_1->type != &VAR_0)
  return 0;

 VAR_3 = FUNC_3(VAR_1);
 VAR_4 = FUNC_0(VAR_3);

 FUNC_2(VAR_1, VAR_4->parent_supplies,
            VAR_4->num_parent_supplies);


 if (!*VAR_5 || (VAR_4->usage_count < *VAR_5))
  *VAR_5 = VAR_4->usage_count;

 FUNC_1(VAR_3);
 return 0;
}
