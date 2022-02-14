
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bnad {int dummy; } ;
struct TYPE_2__ {int mem_info; } ;
struct bna_res_info {TYPE_1__ res_u; } ;


 int FUNC_0 (struct bnad*,int *) ;

__attribute__((used)) static void
FUNC_1(struct bnad *VAR_0, struct bna_res_info *VAR_1,
  u32 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_0(VAR_0, &VAR_1[VAR_3].res_u.mem_info);
}
