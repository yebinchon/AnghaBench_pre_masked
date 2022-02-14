
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shrinker {int dummy; } ;
struct shrink_control {int gfp_mask; } ;


 int FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_2 (int *,struct shrink_control*,int ,int *) ;

__attribute__((used)) static unsigned long FUNC_3(struct shrinker *VAR_5,
      struct shrink_control *VAR_6)
{
 FUNC_0(VAR_2);
 unsigned long VAR_7;

 if (!(VAR_6->gfp_mask & VAR_1))
  return VAR_0;

 VAR_7 = FUNC_2(&VAR_4, VAR_6,
         VAR_3, &VAR_2);

 FUNC_1(&VAR_2);

 return VAR_7;
}
