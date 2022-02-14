
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int swreg ;
struct nfp_prog {int dummy; } ;
struct TYPE_4__ {unsigned int off; int dst_reg; } ;
struct TYPE_3__ {unsigned int range_start; } ;
struct nfp_insn_meta {TYPE_2__ insn; TYPE_1__ pkt_cache; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct nfp_prog*,int ,int ) ;
 int FUNC_3 (struct nfp_prog*,int ,int ,unsigned int,int ) ;
 int FUNC_4 (struct nfp_prog*,struct nfp_insn_meta*,int) ;

__attribute__((used)) static int
FUNC_5(struct nfp_prog *VAR_1,
       struct nfp_insn_meta *VAR_2,
       unsigned int VAR_3)
{
 swreg VAR_4, VAR_5, VAR_6;
 u8 VAR_7, VAR_8;

 VAR_8 = (VAR_2->insn.off - VAR_2->pkt_cache.range_start) / VAR_0;
 VAR_7 = VAR_2->insn.dst_reg * 2;
 VAR_5 = FUNC_0(VAR_7 + 1);
 VAR_4 = FUNC_0(VAR_7);
 VAR_6 = FUNC_1(VAR_8);

 if (VAR_3 < VAR_0) {
  FUNC_3(VAR_1, VAR_4, VAR_6, VAR_3, 0);
  FUNC_4(VAR_1, VAR_2, VAR_7);
 } else if (VAR_3 == VAR_0) {
  FUNC_2(VAR_1, VAR_4, VAR_6);
  FUNC_4(VAR_1, VAR_2, VAR_7);
 } else {
  swreg VAR_9 = FUNC_1(VAR_8 + 1);

  FUNC_2(VAR_1, VAR_4, VAR_6);
  FUNC_2(VAR_1, VAR_5, VAR_9);
 }

 return 0;
}
