
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfp_prog {int dummy; } ;
struct TYPE_3__ {scalar_t__ value; } ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__ var_off; scalar_t__ off; } ;
struct nfp_insn_meta {TYPE_2__ ptr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct nfp_prog*,struct nfp_insn_meta*,unsigned int) ;
 int FUNC_1 (struct nfp_prog*,struct nfp_insn_meta*,unsigned int,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct nfp_prog *VAR_3, struct nfp_insn_meta *VAR_4,
 unsigned int VAR_5)
{
 if (VAR_4->ptr.type == VAR_1)
  return FUNC_0(VAR_3, VAR_4, VAR_5);

 if (VAR_4->ptr.type == VAR_2)
  return FUNC_1(VAR_3, VAR_4, VAR_5,
         VAR_4->ptr.off + VAR_4->ptr.var_off.value);

 return -VAR_0;
}
