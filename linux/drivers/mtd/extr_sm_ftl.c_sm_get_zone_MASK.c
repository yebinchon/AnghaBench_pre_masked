
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm_ftl {int zone_count; struct ftl_zone* zones; } ;
struct ftl_zone {int initialized; } ;


 int FUNC_0 (int) ;
 struct ftl_zone* FUNC_1 (int) ;
 int FUNC_2 (struct sm_ftl*,int) ;

__attribute__((used)) static struct ftl_zone *FUNC_3(struct sm_ftl *VAR_0, int VAR_1)
{
 struct ftl_zone *VAR_2;
 int VAR_3;

 FUNC_0(VAR_1 >= VAR_0->zone_count);
 VAR_2 = &VAR_0->zones[VAR_1];

 if (!VAR_2->initialized) {
  VAR_3 = FUNC_2(VAR_0, VAR_1);

  if (VAR_3)
   return FUNC_1(VAR_3);
 }
 return VAR_2;
}
