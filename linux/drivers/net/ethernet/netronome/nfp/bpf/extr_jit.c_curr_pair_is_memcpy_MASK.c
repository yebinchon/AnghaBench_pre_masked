
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct bpf_insn {scalar_t__ dst_reg; scalar_t__ src_reg; int code; } ;
struct nfp_insn_meta {int flags; TYPE_1__ ptr; struct bpf_insn insn; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct nfp_insn_meta*) ;
 int FUNC_2 (struct nfp_insn_meta*) ;

__attribute__((used)) static bool
FUNC_3(struct nfp_insn_meta *VAR_3,
      struct nfp_insn_meta *VAR_4)
{
 struct bpf_insn *VAR_5 = &VAR_3->insn;
 struct bpf_insn *VAR_6 = &VAR_4->insn;

 if (!FUNC_1(VAR_3) || !FUNC_2(VAR_4))
  return 0;

 if (VAR_3->ptr.type != VAR_2 &&
     VAR_3->ptr.type != VAR_1)
  return 0;

 if (VAR_4->ptr.type != VAR_2)
  return 0;

 if (FUNC_0(VAR_5->code) != FUNC_0(VAR_6->code))
  return 0;

 if (VAR_5->dst_reg != VAR_6->src_reg)
  return 0;


 if (VAR_4->flags & VAR_0)
  return 0;

 return 1;
}
