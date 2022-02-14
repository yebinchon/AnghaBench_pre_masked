
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct qedi_ctx {TYPE_1__* itt_map; int dbg_ctx; } ;
struct qedi_cmd {int dummy; } ;
struct TYPE_2__ {size_t itt; struct qedi_cmd* p_cmd; } ;


 int FUNC_0 (int *,int ,char*,size_t,size_t) ;
 int VAR_0 ;

void FUNC_1(struct qedi_ctx *VAR_1, u32 VAR_2, u32 VAR_3,
    struct qedi_cmd *VAR_4)
{
 VAR_1->itt_map[VAR_2].itt = VAR_3;
 VAR_1->itt_map[VAR_2].p_cmd = VAR_4;

 FUNC_0(&VAR_1->dbg_ctx, VAR_0,
    "update itt map tid=0x%x, with proto itt=0x%x\n", VAR_2,
    VAR_1->itt_map[VAR_2].itt);
}
