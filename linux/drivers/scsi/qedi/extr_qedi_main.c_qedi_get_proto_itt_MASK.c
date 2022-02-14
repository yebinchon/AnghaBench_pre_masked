
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct qedi_ctx {int dbg_ctx; TYPE_1__* itt_map; } ;
struct TYPE_2__ {size_t itt; } ;


 int FUNC_0 (int *,int ,char*,size_t,size_t) ;
 int VAR_0 ;

void FUNC_1(struct qedi_ctx *VAR_1, u32 VAR_2, u32 *VAR_3)
{
 *VAR_3 = VAR_1->itt_map[VAR_2].itt;
 FUNC_0(&VAR_1->dbg_ctx, VAR_0,
    "Get itt map tid [0x%x with proto itt[0x%x]",
    VAR_2, *VAR_3);
}
