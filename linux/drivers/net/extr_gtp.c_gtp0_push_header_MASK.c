
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct TYPE_3__ {int flow; int tid; } ;
struct TYPE_4__ {TYPE_1__ v0; } ;
struct pdp_ctx {TYPE_2__ u; int tx_seq; } ;
struct gtp0_header {int flags; int number; int* spare; int tid; void* flow; void* seq; void* length; int type; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 struct gtp0_header* FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static inline void FUNC_4(struct sk_buff *VAR_1, struct pdp_ctx *VAR_2)
{
 int VAR_3 = VAR_1->len;
 struct gtp0_header *VAR_4;

 VAR_4 = FUNC_3(VAR_1, sizeof(*VAR_4));

 VAR_4->flags = 0x1e;
 VAR_4->type = VAR_0;
 VAR_4->length = FUNC_2(VAR_3);
 VAR_4->seq = FUNC_2((FUNC_0(&VAR_2->tx_seq) - 1) % 0xffff);
 VAR_4->flow = FUNC_2(VAR_2->u.v0.flow);
 VAR_4->number = 0xff;
 VAR_4->spare[0] = VAR_4->spare[1] = VAR_4->spare[2] = 0xff;
 VAR_4->tid = FUNC_1(VAR_2->u.v0.tid);
}
