
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num; void* len; void* mem_type; } ;
struct TYPE_4__ {TYPE_1__ mem_info; } ;
struct bna_res_info {TYPE_2__ res_u; void* res_type; } ;
struct bfi_enet_stats {int dummy; } ;


 void* FUNC_0 (int,int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;

void
FUNC_5(struct bna_res_info *VAR_9)
{

 VAR_9[VAR_4].res_type = VAR_7;
 VAR_9[VAR_4].res_u.mem_info.mem_type = VAR_1;
 VAR_9[VAR_4].res_u.mem_info.num = 1;
 VAR_9[VAR_4].res_u.mem_info.len = FUNC_0(
    (FUNC_2() +
     FUNC_3() +
     FUNC_1()), VAR_8);


 VAR_9[VAR_3].res_type = VAR_7;
 VAR_9[VAR_3].res_u.mem_info.mem_type = VAR_1;
 VAR_9[VAR_3].res_u.mem_info.num = 1;
 VAR_9[VAR_3].res_u.mem_info.len =
    FUNC_0(FUNC_4(), VAR_8);


 VAR_9[VAR_5].res_type = VAR_7;
 VAR_9[VAR_5].res_u.mem_info.mem_type = VAR_2;
 VAR_9[VAR_5].res_u.mem_info.num = 1;
 VAR_9[VAR_5].res_u.mem_info.len = VAR_0;


 VAR_9[VAR_6].res_type = VAR_7;
 VAR_9[VAR_6].res_u.mem_info.mem_type = VAR_1;
 VAR_9[VAR_6].res_u.mem_info.num = 1;
 VAR_9[VAR_6].res_u.mem_info.len =
    FUNC_0(sizeof(struct bfi_enet_stats),
     VAR_8);
}
