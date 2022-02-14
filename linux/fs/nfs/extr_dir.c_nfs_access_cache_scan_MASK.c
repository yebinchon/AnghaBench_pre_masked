
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shrinker {int dummy; } ;
struct shrink_control {int nr_to_scan; int gfp_mask; } ;
typedef int gfp_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int) ;

unsigned long
FUNC_1(struct shrinker *VAR_2, struct shrink_control *VAR_3)
{
 int VAR_4 = VAR_3->nr_to_scan;
 gfp_t VAR_5 = VAR_3->gfp_mask;

 if ((VAR_5 & VAR_0) != VAR_0)
  return VAR_1;
 return FUNC_0(VAR_4);
}
