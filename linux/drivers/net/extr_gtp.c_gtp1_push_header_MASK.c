
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct TYPE_3__ {int o_tei; } ;
struct TYPE_4__ {TYPE_1__ v1; } ;
struct pdp_ctx {TYPE_2__ u; } ;
struct gtp1_header {int flags; int tid; int length; int type; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 struct gtp1_header* FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static inline void FUNC_3(struct sk_buff *VAR_1, struct pdp_ctx *VAR_2)
{
 int VAR_3 = VAR_1->len;
 struct gtp1_header *VAR_4;

 VAR_4 = FUNC_2(VAR_1, sizeof(*VAR_4));







 VAR_4->flags = 0x30;
 VAR_4->type = VAR_0;
 VAR_4->length = FUNC_1(VAR_3);
 VAR_4->tid = FUNC_0(VAR_2->u.v1.o_tei);




}
