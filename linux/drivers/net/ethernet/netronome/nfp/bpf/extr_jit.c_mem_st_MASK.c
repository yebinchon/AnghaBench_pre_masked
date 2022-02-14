
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_prog {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct nfp_insn_meta {TYPE_1__ ptr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct nfp_prog*,struct nfp_insn_meta*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct nfp_prog *VAR_2, struct nfp_insn_meta *VAR_3,
    unsigned int VAR_4)
{
 if (VAR_3->ptr.type == VAR_1)
  return FUNC_0(VAR_2, VAR_3, VAR_4);

 return -VAR_0;
}
