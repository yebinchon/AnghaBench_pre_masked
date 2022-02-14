
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_region {scalar_t__ ndr_start; scalar_t__ ndr_size; scalar_t__ bb_state; int bb; } ;
struct device {int dummy; } ;
struct clear_badblocks_context {scalar_t__ phys; int cleared; } ;
typedef int sector_t ;
typedef scalar_t__ resource_size_t ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (scalar_t__) ;
 struct nd_region* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, void *VAR_1)
{
 struct clear_badblocks_context *VAR_2 = VAR_1;
 struct nd_region *VAR_3;
 resource_size_t VAR_4;
 sector_t VAR_5;


 if (!FUNC_1(VAR_0))
  return 0;

 VAR_3 = FUNC_3(VAR_0);
 VAR_4 = VAR_3->ndr_start + VAR_3->ndr_size - 1;


 if (VAR_2->phys < VAR_3->ndr_start
   || (VAR_2->phys + VAR_2->cleared) > VAR_4)
  return 0;

 VAR_5 = (VAR_2->phys - VAR_3->ndr_start) / 512;
 FUNC_0(&VAR_3->bb, VAR_5, VAR_2->cleared / 512);

 if (VAR_3->bb_state)
  FUNC_2(VAR_3->bb_state);

 return 0;
}
