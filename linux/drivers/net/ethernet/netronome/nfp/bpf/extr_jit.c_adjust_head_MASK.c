
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int swreg ;
struct nfp_prog {scalar_t__ adjust_head_location; TYPE_1__* bpf; } ;
struct nfp_insn_meta {scalar_t__ n; } ;
struct nfp_bpf_cap_adjust_head {int off_max; int off_min; } ;
struct TYPE_2__ {struct nfp_bpf_cap_adjust_head adjust_head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct nfp_prog*,int ,int ,int ,int ) ;
 int FUNC_2 (struct nfp_prog*,int ,scalar_t__,int) ;
 int FUNC_3 (struct nfp_prog*,int ,int,int ,int ,int ) ;
 int FUNC_4 (struct nfp_prog*) ;
 int FUNC_5 (struct nfp_prog*) ;
 int FUNC_6 (struct nfp_prog*,scalar_t__) ;
 scalar_t__ FUNC_7 (struct nfp_prog*) ;
 int FUNC_8 (struct nfp_prog*) ;
 int FUNC_9 (struct nfp_prog*) ;
 int FUNC_10 (struct nfp_prog*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 (struct nfp_prog*,int ,int) ;

__attribute__((used)) static int FUNC_16(struct nfp_prog *VAR_10, struct nfp_insn_meta *VAR_11)
{
 swreg VAR_12 = FUNC_4(VAR_10), VAR_13 = FUNC_5(VAR_10);
 struct nfp_bpf_cap_adjust_head *VAR_14;
 u32 VAR_15, VAR_16;

 VAR_14 = &VAR_10->bpf->adjust_head;


 if (VAR_10->adjust_head_location != VAR_9) {
  if (FUNC_0(VAR_10->adjust_head_location != VAR_11->n))
   return -VAR_6;

  FUNC_1(VAR_10, FUNC_9(VAR_10),
    FUNC_11(2 * 2), VAR_0, FUNC_9(VAR_10));
  FUNC_1(VAR_10, FUNC_8(VAR_10),
    FUNC_8(VAR_10), VAR_2, FUNC_11(2 * 2));
  FUNC_1(VAR_10, FUNC_10(VAR_10),
    FUNC_10(VAR_10), VAR_2, FUNC_11(2 * 2));

  FUNC_15(VAR_10, FUNC_12(0), 0);
  FUNC_15(VAR_10, FUNC_12(1), 0);





  return 0;
 }

 VAR_15 = FUNC_7(VAR_10) + 14;
 VAR_16 = VAR_15 + 2;


 FUNC_1(VAR_10, VAR_12,
   FUNC_11(2 * 2), VAR_1, FUNC_9(VAR_10));


 FUNC_1(VAR_10, FUNC_14(),
   VAR_12, VAR_2, FUNC_13(VAR_14->off_min));
 FUNC_2(VAR_10, VAR_3, VAR_15, 0);
 FUNC_1(VAR_10, FUNC_14(),
   FUNC_13(VAR_14->off_max), VAR_2, VAR_12);
 FUNC_2(VAR_10, VAR_3, VAR_15, 0);


 FUNC_1(VAR_10, VAR_13,
   FUNC_8(VAR_10), VAR_2, FUNC_11(2 * 2));
 FUNC_1(VAR_10, FUNC_14(),
   VAR_13, VAR_2, FUNC_13(VAR_7));
 FUNC_2(VAR_10, VAR_4, VAR_15, 0);


 FUNC_15(VAR_10, FUNC_12(0), 0);
 FUNC_15(VAR_10, FUNC_12(1), 0);


 FUNC_3(VAR_10, FUNC_9(VAR_10), 0x3, VAR_12, VAR_8, 0);


 FUNC_2(VAR_10, VAR_5, VAR_16, 2);

 FUNC_1(VAR_10, FUNC_8(VAR_10),
   FUNC_8(VAR_10), VAR_2, FUNC_11(2 * 2));
 FUNC_1(VAR_10, FUNC_10(VAR_10),
   FUNC_10(VAR_10), VAR_2, FUNC_11(2 * 2));


 if (!FUNC_6(VAR_10, VAR_15))
  return -VAR_6;

 FUNC_15(VAR_10, FUNC_12(0), -22);
 FUNC_15(VAR_10, FUNC_12(1), ~0);

 if (!FUNC_6(VAR_10, VAR_16))
  return -VAR_6;

 return 0;
}
