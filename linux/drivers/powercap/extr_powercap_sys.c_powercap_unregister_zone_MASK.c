
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powercap_zone {int dev; } ;
struct powercap_control_type {int lock; int nr_zones; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct powercap_control_type *VAR_1,
    struct powercap_zone *VAR_2)
{
 if (!VAR_2 || !VAR_1)
  return -VAR_0;

 FUNC_1(&VAR_1->lock);
 VAR_1->nr_zones--;
 FUNC_2(&VAR_1->lock);

 FUNC_0(&VAR_2->dev);

 return 0;
}
