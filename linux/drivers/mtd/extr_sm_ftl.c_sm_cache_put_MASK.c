
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm_ftl {scalar_t__ cache_clean; int cache_data_invalid_bitmap; scalar_t__ cache_data; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (scalar_t__,char*,int) ;

__attribute__((used)) static void FUNC_2(struct sm_ftl *VAR_1, char *VAR_2, int VAR_3)
{
 FUNC_1(VAR_1->cache_data + VAR_3, VAR_2, VAR_0);
 FUNC_0(VAR_3 / VAR_0, &VAR_1->cache_data_invalid_bitmap);
 VAR_1->cache_clean = 0;
}
