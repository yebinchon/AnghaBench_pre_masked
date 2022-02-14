
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dim_channel {int dummy; } ;
struct TYPE_2__ {int dim_is_initialized; } ;


 int VAR_0 ;
 int FUNC_0 (struct dim_channel* const) ;
 int FUNC_1 (int ,char*) ;
 TYPE_1__ VAR_1 ;

void FUNC_2(struct dim_channel *const *VAR_2)
{
 bool VAR_3;

 if (!VAR_1.dim_is_initialized) {
  FUNC_1(VAR_0,
        "DIM is not initialized");
  return;
 }

 if (!VAR_2) {
  FUNC_1(VAR_0, "Bad channels");
  return;
 }
 do {
  struct dim_channel *const *VAR_4 = VAR_2;

  VAR_3 = 0;

  while (*VAR_4) {
   VAR_3 |= FUNC_0(*VAR_4);
   ++VAR_4;
  }
 } while (VAR_3);
}
