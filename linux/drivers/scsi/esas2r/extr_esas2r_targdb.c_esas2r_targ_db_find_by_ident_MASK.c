
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct esas2r_target {scalar_t__ identifier_len; int * identifier; } ;
struct esas2r_adapter {struct esas2r_target* targetdb_end; struct esas2r_target* targetdb; } ;


 scalar_t__ FUNC_0 (int *,void*,scalar_t__) ;

struct esas2r_target *FUNC_1(struct esas2r_adapter *VAR_0,
         void *VAR_1,
         u8 VAR_2)
{
 struct esas2r_target *VAR_3;

 for (VAR_3 = VAR_0->targetdb; VAR_3 < VAR_0->targetdb_end; VAR_3++) {
  if (VAR_2 == VAR_3->identifier_len
      && FUNC_0(&VAR_3->identifier[0], VAR_1,
         VAR_2) == 0)
   return VAR_3;
 }

 return ((void*)0);
}
