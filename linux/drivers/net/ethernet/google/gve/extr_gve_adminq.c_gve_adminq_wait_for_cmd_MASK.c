
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct gve_priv {TYPE_1__* reg_bar0; } ;
struct TYPE_2__ {int adminq_event_counter; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct gve_priv *VAR_2, u32 VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (FUNC_0(&VAR_2->reg_bar0->adminq_event_counter)
      == VAR_3)
   return 1;
  FUNC_1(VAR_0);
 }

 return 0;
}
