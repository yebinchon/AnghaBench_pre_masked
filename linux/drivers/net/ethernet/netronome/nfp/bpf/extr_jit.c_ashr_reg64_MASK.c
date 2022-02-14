
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u16 ;
struct nfp_prog {int dummy; } ;
struct bpf_insn {int dst_reg; int src_reg; } ;
struct nfp_insn_meta {int umin_src; int umax_src; struct bpf_insn insn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfp_prog*,int,int) ;
 int FUNC_1 (struct nfp_prog*,int,int) ;
 int FUNC_2 (struct nfp_prog*,int,int) ;
 int FUNC_3 (struct nfp_prog*,int,int) ;
 int FUNC_4 (struct nfp_prog*,int,int) ;
 int FUNC_5 (struct nfp_prog*,int ,scalar_t__,int) ;
 int FUNC_6 (struct nfp_prog*,int ,int,scalar_t__,int ) ;
 int FUNC_7 (struct nfp_prog*,scalar_t__) ;
 scalar_t__ FUNC_8 (struct nfp_prog*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct nfp_prog *VAR_2, struct nfp_insn_meta *VAR_3)
{
 const struct bpf_insn *VAR_4 = &VAR_3->insn;
 u64 VAR_5, VAR_6;
 u8 VAR_7, VAR_8;

 VAR_7 = VAR_4->dst_reg * 2;
 VAR_5 = VAR_3->umin_src;
 VAR_6 = VAR_3->umax_src;
 if (VAR_5 == VAR_6)
  return FUNC_0(VAR_2, VAR_7, VAR_5);

 VAR_8 = VAR_4->src_reg * 2;
 if (VAR_6 < 32) {
  FUNC_2(VAR_2, VAR_7, VAR_8);
 } else if (VAR_5 >= 32) {
  FUNC_1(VAR_2, VAR_7, VAR_8);
 } else {
  u16 VAR_9, VAR_10;

  VAR_9 = FUNC_8(VAR_2) + 6;
  FUNC_6(VAR_2, FUNC_9(VAR_8), 5, VAR_9, 0);
  FUNC_4(VAR_2, VAR_7, VAR_8);
  VAR_10 = FUNC_8(VAR_2) + 6;
  FUNC_5(VAR_2, VAR_0, VAR_10, 2);

  FUNC_3(VAR_2, VAR_7, VAR_8);

  if (!FUNC_7(VAR_2, VAR_9))
   return -VAR_1;
  FUNC_1(VAR_2, VAR_7, VAR_8);

  if (!FUNC_7(VAR_2, VAR_10))
   return -VAR_1;
 }

 return 0;
}
