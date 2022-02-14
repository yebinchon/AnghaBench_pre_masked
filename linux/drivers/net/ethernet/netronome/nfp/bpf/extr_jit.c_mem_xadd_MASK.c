
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int swreg ;
struct nfp_prog {int dummy; } ;
struct TYPE_2__ {int dst_reg; int src_reg; scalar_t__ off; } ;
struct nfp_insn_meta {scalar_t__ xadd_over_16bit; scalar_t__ xadd_maybe_16bit; TYPE_1__ insn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct nfp_prog*,int ,int ,int ,int ) ;
 int FUNC_2 (struct nfp_prog*,int ,unsigned int,int) ;
 int FUNC_3 (struct nfp_prog*,int ,int ,int ,int ,int ,int,int ) ;
 int FUNC_4 (struct nfp_prog*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct nfp_prog*) ;
 int FUNC_6 (struct nfp_prog*) ;
 int FUNC_7 (struct nfp_prog*) ;
 int FUNC_8 (struct nfp_prog*) ;
 int FUNC_9 (struct nfp_prog*,unsigned int) ;
 unsigned int FUNC_10 (struct nfp_prog*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 (int) ;
 int FUNC_16 (struct nfp_prog*,scalar_t__,int ) ;
 int FUNC_17 (struct nfp_prog*,int ,int) ;
 int FUNC_18 (struct nfp_prog*,int ,int ) ;
 int FUNC_19 (struct nfp_prog*,int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_20(struct nfp_prog *VAR_16, struct nfp_insn_meta *VAR_17, bool VAR_18)
{
 u8 VAR_19 = VAR_17->insn.dst_reg * 2;
 u8 VAR_20 = VAR_17->insn.src_reg * 2;
 unsigned int VAR_21, VAR_22;
 swreg VAR_23, VAR_24, VAR_25;

 VAR_25 = FUNC_16(VAR_16, VAR_17->insn.off, FUNC_6(VAR_16));






 VAR_22 = FUNC_10(VAR_16);
 VAR_21 = FUNC_10(VAR_16);

 if (VAR_17->insn.off) {
  VAR_22 += 2;
  VAR_21 += 2;
 }
 if (VAR_17->xadd_maybe_16bit) {
  VAR_22 += 3;
  VAR_21 += 3;
 }
 if (VAR_17->xadd_over_16bit)
  VAR_22 += 2 + VAR_18;
 if (VAR_17->xadd_maybe_16bit && VAR_17->xadd_over_16bit) {
  VAR_22 += 5;
  VAR_21 += 5;
 }


 if (VAR_17->xadd_maybe_16bit && VAR_17->xadd_over_16bit) {
  swreg VAR_26 = FUNC_5(VAR_16);

  FUNC_17(VAR_16, VAR_26, 0xffff);
  FUNC_1(VAR_16, FUNC_14(),
    VAR_26, VAR_2, FUNC_12(VAR_20));
  FUNC_1(VAR_16, FUNC_14(),
    FUNC_13(0), VAR_3, FUNC_12(VAR_20 + 1));
  FUNC_2(VAR_16, VAR_4, VAR_21, VAR_17->insn.off ? 2 : 0);

 }


 if (!VAR_17->insn.off) {
  VAR_23 = FUNC_11(VAR_19);
  VAR_24 = FUNC_12(VAR_19 + 1);
 } else {
  FUNC_1(VAR_16, FUNC_7(VAR_16),
    FUNC_11(VAR_19), VAR_0, VAR_25);
  FUNC_1(VAR_16, FUNC_8(VAR_16),
    FUNC_11(VAR_19 + 1), VAR_1, FUNC_13(0));
  VAR_23 = FUNC_7(VAR_16);
  VAR_24 = FUNC_8(VAR_16);
 }


 if (VAR_17->xadd_maybe_16bit) {
  swreg VAR_27 = FUNC_5(VAR_16);

  FUNC_17(VAR_16, VAR_27,
     FUNC_0(VAR_10, 2) |
     VAR_11 |
     FUNC_0(VAR_12, 0x8 | VAR_18 << 2));
  FUNC_19(VAR_16, VAR_27, FUNC_12(VAR_20), 2, 2);
  FUNC_4(VAR_16, VAR_14, VAR_9, 0,
          VAR_23, VAR_24, 0, VAR_6);

  if (VAR_17->xadd_over_16bit)
   FUNC_2(VAR_16, VAR_5, VAR_22, 0);
 }

 if (!FUNC_9(VAR_16, VAR_21))
  return -VAR_15;


 if (VAR_17->xadd_over_16bit) {
  FUNC_3(VAR_16, VAR_13, VAR_9, 0,
    VAR_23, VAR_24, VAR_18 << 2,
    VAR_18 ? VAR_8 : VAR_7);

  FUNC_18(VAR_16, FUNC_15(0), FUNC_11(VAR_20));
  if (VAR_18)
   FUNC_18(VAR_16, FUNC_15(1), FUNC_11(VAR_20 + 1));
 }

 if (!FUNC_9(VAR_16, VAR_22))
  return -VAR_15;

 return 0;
}
