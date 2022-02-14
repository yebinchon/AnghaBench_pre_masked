
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm_ftl {scalar_t__ cache_data; int cache_data_invalid_bitmap; } ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__,int) ;
 scalar_t__ FUNC_1 (int,int *) ;

__attribute__((used)) static int FUNC_2(struct sm_ftl *VAR_1, char *VAR_2, int VAR_3)
{
 if (FUNC_1(VAR_3 / VAR_0,
  &VAR_1->cache_data_invalid_bitmap))
   return -1;

 FUNC_0(VAR_2, VAR_1->cache_data + VAR_3, VAR_0);
 return 0;
}
