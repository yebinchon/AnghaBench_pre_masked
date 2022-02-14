
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {void* cdu_reserved; } ;
struct TYPE_3__ {void* cdu_usage; } ;
struct eth_context {TYPE_2__ xstorm_ag_context; TYPE_1__ ustorm_ag_context; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,struct eth_context*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct bnx2x*,int ) ;

void FUNC_3(struct bnx2x *VAR_3, struct eth_context *VAR_4,
         u32 VAR_5)
{
 if (!VAR_4) {
  FUNC_0("bad context pointer %p\n", VAR_4);
  return;
 }


 VAR_4->ustorm_ag_context.cdu_usage =
  FUNC_1(FUNC_2(VAR_3, VAR_5),
   VAR_0, VAR_2);

 VAR_4->xstorm_ag_context.cdu_reserved =
  FUNC_1(FUNC_2(VAR_3, VAR_5),
   VAR_1, VAR_2);
}
