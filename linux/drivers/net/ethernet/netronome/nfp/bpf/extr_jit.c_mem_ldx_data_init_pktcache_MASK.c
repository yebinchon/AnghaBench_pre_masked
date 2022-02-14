
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int swreg ;
struct nfp_prog {int dummy; } ;
struct TYPE_3__ {int src_reg; } ;
struct TYPE_4__ {int range_start; int range_end; } ;
struct nfp_insn_meta {TYPE_1__ insn; TYPE_2__ pkt_cache; } ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int VAR_5 ;
 int FUNC_1 (struct nfp_prog*,int ,int ,int ,int ,int ,int,int ,int) ;
 int FUNC_2 (struct nfp_prog*) ;
 int FUNC_3 (struct nfp_prog*,int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (struct nfp_prog*,int ,int) ;

__attribute__((used)) static void
FUNC_8(struct nfp_prog *VAR_6,
      struct nfp_insn_meta *VAR_7)
{
 s16 VAR_8 = VAR_7->pkt_cache.range_start;
 s16 VAR_9 = VAR_7->pkt_cache.range_end;
 swreg VAR_10, VAR_11;
 u8 VAR_12, VAR_13;
 bool VAR_14;

 VAR_11 = FUNC_3(VAR_6, VAR_8, FUNC_2(VAR_6));
 VAR_10 = FUNC_4(VAR_7->insn.src_reg * 2);
 VAR_13 = VAR_9 - VAR_8;
 VAR_12 = FUNC_6(VAR_13, VAR_5) / VAR_5;

 VAR_14 = VAR_13 > 8 * VAR_5;

 if (VAR_14)
  FUNC_7(VAR_6, FUNC_5(),
     VAR_2 | FUNC_0(VAR_3, VAR_12 - 1));


 FUNC_1(VAR_6, VAR_4, VAR_1, 0, VAR_10,
       VAR_11, VAR_12 - 1, VAR_0, VAR_14);
}
