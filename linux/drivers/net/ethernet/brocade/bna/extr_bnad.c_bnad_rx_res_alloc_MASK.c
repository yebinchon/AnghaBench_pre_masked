
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct bnad {int dummy; } ;
struct TYPE_2__ {int intr_info; int mem_info; } ;
struct bna_res_info {scalar_t__ res_type; TYPE_1__ res_u; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bnad*,int *) ;
 int FUNC_1 (struct bnad*,struct bna_res_info*) ;
 int FUNC_2 (struct bnad*,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_3(struct bnad *VAR_4, struct bna_res_info *VAR_5,
    uint VAR_6)
{
 int VAR_7, VAR_8 = 0;


 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  if (VAR_5[VAR_7].res_type == VAR_2)
   VAR_8 = FUNC_0(VAR_4,
     &VAR_5[VAR_7].res_u.mem_info);
  else if (VAR_5[VAR_7].res_type == VAR_1)
   VAR_8 = FUNC_2(VAR_4, VAR_0, VAR_6,
     &VAR_5[VAR_7].res_u.intr_info);
  if (VAR_8)
   goto err_return;
 }
 return 0;

err_return:
 FUNC_1(VAR_4, VAR_5);
 return VAR_8;
}
