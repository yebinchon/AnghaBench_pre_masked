
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct rvu_block {int addr; struct admin_queue* aq; } ;
struct rvu {int dummy; } ;
struct nix_aq_res_s {scalar_t__ compcode; } ;
struct nix_aq_inst_s {int dummy; } ;
struct admin_queue {TYPE_2__* inst; TYPE_1__* res; } ;
struct TYPE_4__ {int entry_sz; scalar_t__ base; } ;
struct TYPE_3__ {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (void*,void*,int) ;
 int FUNC_2 (struct nix_aq_res_s*,int ,int) ;
 int FUNC_3 (struct rvu*,int ,int ) ;
 int FUNC_4 (struct rvu*,int ,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct rvu *VAR_6, struct rvu_block *VAR_7,
          struct nix_aq_inst_s *VAR_8)
{
 struct admin_queue *VAR_9 = VAR_7->aq;
 struct nix_aq_res_s *VAR_10;
 int VAR_11 = 1000;
 u64 VAR_12, VAR_13;

 VAR_10 = (struct nix_aq_res_s *)VAR_9->res->base;


 VAR_12 = FUNC_3(VAR_6, VAR_7->addr, VAR_3);
 VAR_13 = (VAR_12 >> 4) & VAR_0;

 FUNC_1((void *)(VAR_9->inst->base + (VAR_13 * VAR_9->inst->entry_sz)),
        (void *)VAR_8, VAR_9->inst->entry_sz);
 FUNC_2(VAR_10, 0, sizeof(*VAR_10));

 FUNC_6();


 FUNC_4(VAR_6, VAR_7->addr, VAR_2, 1);
 while (VAR_10->compcode == VAR_5) {
  FUNC_0();
  FUNC_5(1);
  VAR_11--;
  if (!VAR_11)
   return -VAR_1;
 }

 if (VAR_10->compcode != VAR_4)

  return -VAR_1;

 return 0;
}
