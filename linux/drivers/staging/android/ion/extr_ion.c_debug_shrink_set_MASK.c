
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct shrink_control {int nr_to_scan; int gfp_mask; } ;
struct TYPE_3__ {int (* count_objects ) (TYPE_1__*,struct shrink_control*) ;int (* scan_objects ) (TYPE_1__*,struct shrink_control*) ;} ;
struct ion_heap {TYPE_1__ shrinker; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct shrink_control*) ;
 int FUNC_1 (TYPE_1__*,struct shrink_control*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, u64 VAR_2)
{
 struct ion_heap *VAR_3 = VAR_1;
 struct shrink_control VAR_4;
 int VAR_5;

 VAR_4.gfp_mask = VAR_0;
 VAR_4.nr_to_scan = VAR_2;

 if (!VAR_2) {
  VAR_5 = VAR_3->shrinker.count_objects(&VAR_3->shrinker, &VAR_4);
  VAR_4.nr_to_scan = VAR_5;
 }

 VAR_3->shrinker.scan_objects(&VAR_3->shrinker, &VAR_4);
 return 0;
}
