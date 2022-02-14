
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnad {int dummy; } ;
struct TYPE_2__ {int intr_info; int mem_info; } ;
struct bna_res_info {scalar_t__ res_type; TYPE_1__ res_u; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnad*,int *) ;
 int FUNC_1 (struct bnad*,int *) ;

__attribute__((used)) static void
FUNC_2(struct bnad *VAR_3, struct bna_res_info *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (VAR_4[VAR_5].res_type == VAR_1)
   FUNC_0(VAR_3, &VAR_4[VAR_5].res_u.mem_info);
  else if (VAR_4[VAR_5].res_type == VAR_0)
   FUNC_1(VAR_3, &VAR_4[VAR_5].res_u.intr_info);
 }
}
