
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int seeks; int count_objects; int scan_objects; } ;
struct vmballoon {int shrinker_registered; TYPE_1__ shrinker; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct vmballoon *VAR_4)
{
 int VAR_5;


 if (!VAR_3)
  return 0;

 VAR_4->shrinker.scan_objects = VAR_2;
 VAR_4->shrinker.count_objects = VAR_1;
 VAR_4->shrinker.seeks = VAR_0;

 VAR_5 = FUNC_0(&VAR_4->shrinker);

 if (VAR_5 == 0)
  VAR_4->shrinker_registered = 1;

 return VAR_5;
}
