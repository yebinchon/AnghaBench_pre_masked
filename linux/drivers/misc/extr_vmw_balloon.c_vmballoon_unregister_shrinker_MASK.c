
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmballoon {int shrinker_registered; int shrinker; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct vmballoon *VAR_0)
{
 if (VAR_0->shrinker_registered)
  FUNC_0(&VAR_0->shrinker);
 VAR_0->shrinker_registered = 0;
}
