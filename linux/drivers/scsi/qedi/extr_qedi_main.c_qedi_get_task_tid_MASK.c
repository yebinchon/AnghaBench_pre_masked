
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct qedi_ctx {int dbg_ctx; TYPE_1__* itt_map; } ;
typedef size_t s16 ;
struct TYPE_2__ {scalar_t__ itt; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int ,char*,scalar_t__,size_t) ;
 int VAR_1 ;
 int FUNC_1 (int) ;

void FUNC_2(struct qedi_ctx *VAR_2, u32 VAR_3, s16 *VAR_4)
{
 u16 VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_2->itt_map[VAR_5].itt == VAR_3) {
   *VAR_4 = VAR_5;
   FUNC_0(&VAR_2->dbg_ctx, VAR_1,
      "Ref itt=0x%x, found at tid=0x%x\n",
      VAR_3, *VAR_4);
   return;
  }
 }

 FUNC_1(1);
}
