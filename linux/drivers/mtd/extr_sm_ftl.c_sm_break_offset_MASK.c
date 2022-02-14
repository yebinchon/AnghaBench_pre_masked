
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sm_ftl {int zone_count; int max_lba; int block_size; } ;
typedef int loff_t ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct sm_ftl *VAR_0, loff_t VAR_1,
       int *VAR_2, int *VAR_3, int *VAR_4)
{
 u64 VAR_5 = VAR_1;
 *VAR_4 = FUNC_0(VAR_5, VAR_0->block_size);
 *VAR_3 = FUNC_0(VAR_5, VAR_0->max_lba);
 *VAR_2 = VAR_5 >= VAR_0->zone_count ? -1 : VAR_5;
}
