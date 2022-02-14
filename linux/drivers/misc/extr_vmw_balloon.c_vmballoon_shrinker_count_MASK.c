
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmballoon {int size; } ;
struct shrinker {int dummy; } ;
struct shrink_control {int dummy; } ;


 unsigned long FUNC_0 (int *) ;
 struct vmballoon VAR_0 ;

__attribute__((used)) static unsigned long FUNC_1(struct shrinker *VAR_1,
           struct shrink_control *VAR_2)
{
 struct vmballoon *VAR_3 = &VAR_0;

 return FUNC_0(&VAR_3->size);
}
