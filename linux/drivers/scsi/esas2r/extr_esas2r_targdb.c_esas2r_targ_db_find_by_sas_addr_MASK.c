
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct esas2r_target {scalar_t__ sas_addr; } ;
struct esas2r_adapter {struct esas2r_target* targetdb_end; struct esas2r_target* targetdb; } ;



struct esas2r_target *FUNC_0(struct esas2r_adapter *VAR_0,
            u64 *VAR_1)
{
 struct esas2r_target *VAR_2;

 for (VAR_2 = VAR_0->targetdb; VAR_2 < VAR_0->targetdb_end; VAR_2++)
  if (VAR_2->sas_addr == *VAR_1)
   return VAR_2;

 return ((void*)0);
}
