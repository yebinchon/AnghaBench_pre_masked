
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; scalar_t__ id; scalar_t__ off; } ;
struct TYPE_3__ {scalar_t__ off; } ;
struct nfp_insn_meta {TYPE_2__ ptr; TYPE_1__ insn; } ;
struct bpf_insn {scalar_t__ off; } ;
typedef scalar_t__ s16 ;



__attribute__((used)) static bool
FUNC_0(struct bpf_insn *VAR_0, struct nfp_insn_meta *VAR_1,
   struct nfp_insn_meta *VAR_2)
{
 s16 VAR_3, VAR_4, VAR_5;


 if (VAR_1->ptr.type != VAR_2->ptr.type)
  return 0;


 if (VAR_1->ptr.id != VAR_2->ptr.id)
  return 1;




 VAR_3 = VAR_1->insn.off + VAR_1->ptr.off;
 VAR_4 = VAR_2->insn.off + VAR_2->ptr.off;
 VAR_5 = VAR_0->off + VAR_1->ptr.off;


 if (VAR_5 > VAR_3 &&
     VAR_3 < VAR_4 && VAR_5 >= VAR_4)
  return 1;


 if (VAR_5 < VAR_3 &&
     VAR_3 > VAR_4 && VAR_5 <= VAR_4)
  return 1;

 return 0;
}
