
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscache_cache_tag {int link; int usage; } ;


 int VAR_0 ;
 struct fscache_cache_tag* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (struct fscache_cache_tag*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct fscache_cache_tag *VAR_2)
{
 if (VAR_2 != FUNC_0(-VAR_0)) {
  FUNC_2(&VAR_1);

  if (FUNC_1(&VAR_2->usage))
   FUNC_4(&VAR_2->link);
  else
   VAR_2 = ((void*)0);

  FUNC_5(&VAR_1);

  FUNC_3(VAR_2);
 }
}
