
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u8 ;
typedef int swreg ;
struct nfp_prog {int dummy; } ;
struct TYPE_4__ {unsigned int off; int dst_reg; } ;
struct TYPE_3__ {unsigned int range_start; } ;
struct nfp_insn_meta {TYPE_2__ insn; TYPE_1__ pkt_cache; } ;
typedef unsigned int s16 ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct nfp_prog*,int ,int ,unsigned int,unsigned int) ;
 int FUNC_3 (struct nfp_prog*,int ,int ,unsigned int,unsigned int) ;
 int FUNC_4 (struct nfp_prog*,struct nfp_insn_meta*,unsigned int) ;

__attribute__((used)) static int
FUNC_5(struct nfp_prog *VAR_1,
         struct nfp_insn_meta *VAR_2,
         unsigned int VAR_3)
{
 s16 VAR_4 = VAR_2->pkt_cache.range_start;
 s16 VAR_5 = VAR_2->insn.off - VAR_4;
 swreg VAR_6, VAR_7, VAR_8, VAR_9;
 u8 VAR_10 = VAR_2->insn.dst_reg * 2;
 u8 VAR_11 = VAR_3, VAR_12 = 0;
 u8 VAR_13 = VAR_5 / VAR_0;
 u8 VAR_14 = VAR_5 % VAR_0;

 VAR_7 = FUNC_0(VAR_10 + 1);
 VAR_6 = FUNC_0(VAR_10);
 VAR_8 = FUNC_1(VAR_13);


 if (VAR_3 > VAR_0 - VAR_14) {

  VAR_11 = VAR_0 - VAR_14;
  VAR_12 = VAR_3 - VAR_11;


  if (VAR_3 > 2 * VAR_0 - VAR_14)
   VAR_12 = VAR_0;
 }

 FUNC_3(VAR_1, VAR_6, VAR_8, VAR_11, VAR_14);

 if (!VAR_12) {
  FUNC_4(VAR_1, VAR_2, VAR_10);
  return 0;
 }

 VAR_9 = FUNC_1(VAR_13 + 1);

 if (VAR_3 <= VAR_0) {
  FUNC_2(VAR_1, VAR_6, VAR_9, VAR_12, VAR_11);
  FUNC_4(VAR_1, VAR_2, VAR_10);
 } else {
  swreg VAR_15 = FUNC_1(VAR_13 + 2);

  FUNC_2(VAR_1, VAR_6, VAR_9,
       VAR_0 - VAR_11, VAR_11);
  FUNC_3(VAR_1, VAR_7, VAR_9, VAR_11,
    VAR_0 - VAR_11);
  FUNC_2(VAR_1, VAR_7, VAR_15, VAR_0 - VAR_11,
       VAR_11);
 }

 return 0;
}
