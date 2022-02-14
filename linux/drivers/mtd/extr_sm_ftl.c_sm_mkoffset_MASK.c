
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm_ftl {int zone_count; int zone_size; int block_size; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static loff_t FUNC_1(struct sm_ftl *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 FUNC_0(VAR_5 & (VAR_1 - 1));
 FUNC_0(VAR_3 < 0 || VAR_3 >= VAR_2->zone_count);
 FUNC_0(VAR_4 >= VAR_2->zone_size);
 FUNC_0(VAR_5 >= VAR_2->block_size);

 if (VAR_4 == -1)
  return -1;

 return (VAR_3 * VAR_0 + VAR_4) * VAR_2->block_size + VAR_5;
}
