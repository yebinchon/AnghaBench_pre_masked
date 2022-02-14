
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nfp_prog {scalar_t__ type; } ;
struct TYPE_5__ {scalar_t__ value; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_2__ var_off; scalar_t__ off; } ;
struct TYPE_4__ {scalar_t__ do_init; scalar_t__ range_end; } ;
struct nfp_insn_meta {TYPE_3__ ptr; TYPE_1__ pkt_cache; scalar_t__ ldst_gather_len; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct nfp_prog*,struct nfp_insn_meta*,unsigned int) ;
 int FUNC_1 (struct nfp_prog*,struct nfp_insn_meta*,unsigned int) ;
 int FUNC_2 (struct nfp_prog*,struct nfp_insn_meta*) ;
 int FUNC_3 (struct nfp_prog*,struct nfp_insn_meta*,unsigned int) ;
 int FUNC_4 (struct nfp_prog*,struct nfp_insn_meta*,unsigned int) ;
 int FUNC_5 (struct nfp_prog*,struct nfp_insn_meta*,unsigned int,scalar_t__) ;
 int FUNC_6 (struct nfp_prog*,struct nfp_insn_meta*,unsigned int) ;
 int FUNC_7 (struct nfp_prog*,struct nfp_insn_meta*) ;

__attribute__((used)) static int
FUNC_8(struct nfp_prog *VAR_6, struct nfp_insn_meta *VAR_7,
 unsigned int VAR_8)
{
 if (VAR_7->ldst_gather_len)
  return FUNC_7(VAR_6, VAR_7);

 if (VAR_7->ptr.type == VAR_2) {
  if (VAR_6->type == VAR_0)
   return FUNC_6(VAR_6, VAR_7, VAR_8);
  else
   return FUNC_4(VAR_6, VAR_7, VAR_8);
 }

 if (VAR_7->ptr.type == VAR_4) {
  if (VAR_7->pkt_cache.range_end) {
   if (VAR_7->pkt_cache.do_init)
    FUNC_2(VAR_6, VAR_7);

   return FUNC_1(VAR_6, VAR_7, VAR_8);
  } else {
   return FUNC_0(VAR_6, VAR_7, VAR_8);
  }
 }

 if (VAR_7->ptr.type == VAR_5)
  return FUNC_5(VAR_6, VAR_7, VAR_8,
         VAR_7->ptr.off + VAR_7->ptr.var_off.value);

 if (VAR_7->ptr.type == VAR_3)
  return FUNC_3(VAR_6, VAR_7, VAR_8);

 return -VAR_1;
}
