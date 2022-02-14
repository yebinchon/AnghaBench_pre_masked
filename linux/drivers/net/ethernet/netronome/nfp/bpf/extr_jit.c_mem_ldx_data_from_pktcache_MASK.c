
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct nfp_prog {int dummy; } ;
struct TYPE_4__ {scalar_t__ range_start; } ;
struct TYPE_3__ {scalar_t__ off; } ;
struct nfp_insn_meta {TYPE_2__ pkt_cache; TYPE_1__ insn; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct nfp_prog*,struct nfp_insn_meta*,unsigned int) ;
 int FUNC_2 (struct nfp_prog*,struct nfp_insn_meta*,unsigned int) ;

__attribute__((used)) static int
FUNC_3(struct nfp_prog *VAR_1,
      struct nfp_insn_meta *VAR_2, unsigned int VAR_3)
{
 u8 VAR_4 = VAR_2->insn.off - VAR_2->pkt_cache.range_start;

 if (FUNC_0(VAR_4, VAR_0))
  return FUNC_1(VAR_1, VAR_2, VAR_3);

 return FUNC_2(VAR_1, VAR_2, VAR_3);
}
