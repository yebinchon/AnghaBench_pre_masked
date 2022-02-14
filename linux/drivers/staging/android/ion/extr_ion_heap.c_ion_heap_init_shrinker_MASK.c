
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ batch; int seeks; int scan_objects; int count_objects; } ;
struct ion_heap {TYPE_1__ shrinker; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(struct ion_heap *VAR_3)
{
 VAR_3->shrinker.count_objects = VAR_1;
 VAR_3->shrinker.scan_objects = VAR_2;
 VAR_3->shrinker.seeks = VAR_0;
 VAR_3->shrinker.batch = 0;

 return FUNC_0(&VAR_3->shrinker);
}
