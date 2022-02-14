
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int swreg ;
struct nfp_prog {int dummy; } ;
struct TYPE_6__ {int off; int src_reg; int dst_reg; int code; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct nfp_insn_meta {scalar_t__ ldst_gather_len; TYPE_3__ insn; TYPE_2__* paired_st; TYPE_1__ ptr; } ;
typedef int s16 ;
struct TYPE_5__ {int off; int dst_reg; } ;





 int FUNC_0 (int ) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct nfp_prog*,int,int ,int *,int *) ;
 int FUNC_5 (struct nfp_prog*,int ,int ,int,int ,int ,int,int ) ;
 int FUNC_6 (struct nfp_prog*,int ,int ,int ,int ,int ,int,int ,int) ;
 int FUNC_7 (struct nfp_prog*,int ,int ,int ,int ,int ,int,int ) ;
 int FUNC_8 (struct nfp_prog*) ;
 int FUNC_9 (struct nfp_prog*,int,int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;
 int FUNC_13 (int) ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (struct nfp_prog*,int ,int) ;
 int FUNC_16 (struct nfp_prog*,int ,int ) ;
 int FUNC_17 (struct nfp_prog*,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_18(struct nfp_prog *VAR_9, struct nfp_insn_meta *VAR_10)
{
 bool VAR_11 = VAR_10->ldst_gather_len < 0;
 s16 VAR_12 = FUNC_3(VAR_10->ldst_gather_len);
 swreg VAR_13, VAR_14;
 bool VAR_15;
 unsigned int VAR_16;
 u8 VAR_17;

 VAR_14 = FUNC_9(VAR_9, VAR_10->insn.off, FUNC_8(VAR_9));
 VAR_15 = VAR_10->ptr.type == VAR_8;
 VAR_13 = FUNC_10(VAR_10->insn.src_reg * 2);
 VAR_17 = FUNC_14(VAR_12, 4) / 4;

 if (VAR_15)
  FUNC_4(VAR_9, VAR_10->insn.src_reg * 2, VAR_14, &VAR_13,
         &VAR_14);


 if (VAR_12 > 32)
  FUNC_15(VAR_9, FUNC_12(),
     VAR_3 | FUNC_1(VAR_4, VAR_17 - 1));


 FUNC_6(VAR_9, VAR_5,
       VAR_15 ? VAR_2 : VAR_1, 0,
       VAR_13, VAR_14, VAR_17 - 1, VAR_0, VAR_12 > 32);


 for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++)
  FUNC_16(VAR_9, FUNC_13(VAR_16), FUNC_13(VAR_16));

 VAR_14 = FUNC_9(VAR_9, VAR_10->paired_st->off, FUNC_8(VAR_9));

 if (VAR_12 <= 8) {

  FUNC_5(VAR_9, VAR_7, VAR_1, 0,
    FUNC_10(VAR_10->paired_st->dst_reg * 2), VAR_14, VAR_12 - 1,
    VAR_0);
 } else if (VAR_12 <= 32 && FUNC_2(VAR_12, 4)) {

  FUNC_5(VAR_9, VAR_6, VAR_1, 0,
    FUNC_10(VAR_10->paired_st->dst_reg * 2), VAR_14, VAR_17 - 1,
    VAR_0);
 } else if (VAR_12 <= 32) {

  FUNC_15(VAR_9, FUNC_12(),
     VAR_3 | FUNC_1(VAR_4, VAR_12 - 1));
  FUNC_7(VAR_9, VAR_7, VAR_1, 0,
          FUNC_10(VAR_10->paired_st->dst_reg * 2), VAR_14,
          VAR_12 - 1, VAR_0);
 } else if (FUNC_2(VAR_12, 4)) {

  FUNC_15(VAR_9, FUNC_12(),
     VAR_3 | FUNC_1(VAR_4, VAR_17 - 1));
  FUNC_7(VAR_9, VAR_6, VAR_1, 0,
          FUNC_10(VAR_10->paired_st->dst_reg * 2), VAR_14,
          VAR_17 - 1, VAR_0);
 } else if (VAR_12 <= 40) {



  FUNC_5(VAR_9, VAR_6, VAR_1, 0,
    FUNC_10(VAR_10->paired_st->dst_reg * 2), VAR_14, 7,
    VAR_0);

  VAR_14 = FUNC_9(VAR_9, VAR_10->paired_st->off + 32,
          FUNC_8(VAR_9));
  FUNC_5(VAR_9, VAR_7, VAR_1, 8,
    FUNC_10(VAR_10->paired_st->dst_reg * 2), VAR_14, VAR_12 - 33,
    VAR_0);
 } else {



  u8 VAR_18;

  FUNC_15(VAR_9, FUNC_12(),
     VAR_3 | FUNC_1(VAR_4, VAR_17 - 2));
  FUNC_7(VAR_9, VAR_6, VAR_1, 0,
          FUNC_10(VAR_10->paired_st->dst_reg * 2), VAR_14,
          VAR_17 - 2, VAR_0);
  VAR_18 = VAR_10->paired_st->off + (VAR_17 - 1) * 4;
  VAR_14 = FUNC_9(VAR_9, VAR_18, FUNC_8(VAR_9));
  FUNC_5(VAR_9, VAR_7, VAR_1,
    VAR_17 - 1, FUNC_10(VAR_10->paired_st->dst_reg * 2), VAR_14,
    (VAR_12 & 0x3) - 1, VAR_0);
 }
 if (VAR_11)
  VAR_17 = 0;
 else if (FUNC_0(VAR_10->insn.code) != 130)
  VAR_17 = VAR_17 - 1;
 else
  VAR_17 = VAR_17 - 2;

 switch (FUNC_0(VAR_10->insn.code)) {
 case 131:
  FUNC_17(VAR_9, FUNC_11(VAR_10->insn.dst_reg * 2),
    FUNC_13(VAR_17), 1,
    FUNC_2(VAR_12, 4) ? 3 : (VAR_12 & 3) - 1);
  break;
 case 129:
  FUNC_17(VAR_9, FUNC_11(VAR_10->insn.dst_reg * 2),
    FUNC_13(VAR_17), 2, (VAR_12 & 3) ^ 2);
  break;
 case 128:
  FUNC_16(VAR_9, FUNC_11(VAR_10->insn.dst_reg * 2),
   FUNC_13(0));
  break;
 case 130:
  FUNC_16(VAR_9, FUNC_11(VAR_10->insn.dst_reg * 2),
   FUNC_13(VAR_17));
  FUNC_16(VAR_9, FUNC_11(VAR_10->insn.dst_reg * 2 + 1),
   FUNC_13(VAR_17 + 1));
  break;
 }

 if (FUNC_0(VAR_10->insn.code) != 130)
  FUNC_15(VAR_9, FUNC_11(VAR_10->insn.dst_reg * 2 + 1), 0);

 return 0;
}
