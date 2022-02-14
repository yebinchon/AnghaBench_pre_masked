
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
typedef unsigned int u32 ;
typedef int swreg ;
struct nfp_prog {unsigned int stack_frame_depth; } ;
struct TYPE_2__ {unsigned int off; } ;
struct nfp_insn_meta {int flags; TYPE_1__ insn; scalar_t__ ptr_not_const; } ;
typedef unsigned int s32 ;
typedef int (* lmem_step ) (struct nfp_prog*,unsigned int,unsigned int,unsigned int,unsigned int,int,int,int,int,int) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nfp_prog*,int ,int ,int ,int ) ;
 int FUNC_1 (struct nfp_prog*,int ,int ) ;
 int FUNC_2 (struct nfp_prog*) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (unsigned int) ;
 scalar_t__ FUNC_5 (unsigned int,int) ;
 unsigned int FUNC_6 (unsigned int,int) ;
 int FUNC_7 (struct nfp_prog*) ;
 int FUNC_8 (struct nfp_prog*) ;
 int FUNC_9 (struct nfp_prog*,scalar_t__,int ) ;
 int FUNC_10 (struct nfp_prog*,unsigned int) ;
 int FUNC_11 (struct nfp_prog*,struct nfp_insn_meta*,unsigned int) ;

__attribute__((used)) static int
FUNC_12(struct nfp_prog *VAR_4, struct nfp_insn_meta *VAR_5,
      unsigned int VAR_6, unsigned int VAR_7, u8 VAR_8, u8 VAR_9,
      bool VAR_10, lmem_step VAR_11)
{
 s32 VAR_12 = VAR_4->stack_frame_depth + VAR_5->insn.off + VAR_7;
 bool VAR_13 = 1, VAR_14, VAR_15;
 bool VAR_16 = 0;
 swreg VAR_17;
 u8 VAR_18 = 255;
 u32 VAR_19 = 0;
 bool VAR_20 = 1;
 int VAR_21;

 if (VAR_5->ptr_not_const ||
     VAR_5->flags & VAR_2) {




  VAR_17 = FUNC_9(VAR_4, VAR_5->insn.off,
      FUNC_7(VAR_4));

  FUNC_0(VAR_4, FUNC_2(VAR_4),
    FUNC_4(VAR_9), VAR_0, VAR_17);

  VAR_16 = 1;
 } else if (VAR_12 + VAR_6 <= 64) {

  VAR_20 = 0;
 } else if (FUNC_5(VAR_12, 32) == FUNC_5(VAR_12 + VAR_6 - 1, 32)) {






  VAR_17 = FUNC_9(VAR_4, FUNC_5(VAR_12, 32),
      FUNC_7(VAR_4));
  FUNC_0(VAR_4, FUNC_2(VAR_4),
    FUNC_8(VAR_4), VAR_0, VAR_17);

  VAR_12 %= 32;
 } else {
  VAR_17 = FUNC_9(VAR_4, FUNC_5(VAR_12, 4),
      FUNC_7(VAR_4));

  FUNC_0(VAR_4, FUNC_2(VAR_4),
    FUNC_8(VAR_4), VAR_0, VAR_17);

  VAR_16 = 1;
 }

 VAR_14 = VAR_10 && VAR_6 < 8;

 if (VAR_20) {
  unsigned int VAR_22;

  FUNC_1(VAR_4, FUNC_2(VAR_4), VAR_3);




  VAR_22 = VAR_14 && VAR_5->flags & VAR_1 ? 2 : 3;
  FUNC_10(VAR_4, VAR_22);
 }

 if (VAR_14)
  FUNC_11(VAR_4, VAR_5, VAR_8);

 while (VAR_6) {
  u32 VAR_23;
  u8 VAR_24;

  VAR_24 = FUNC_3(VAR_6, 4 - VAR_19);
  VAR_23 = FUNC_3(VAR_12 + VAR_24, FUNC_6(VAR_12 + 1, 4));
  VAR_24 = VAR_23 - VAR_12;

  VAR_15 = VAR_24 == VAR_6;

  if (VAR_16)
   VAR_12 %= 4;

  VAR_21 = VAR_11(VAR_4, VAR_8, VAR_19, VAR_12, VAR_24,
      VAR_13, VAR_8 != VAR_18, VAR_15, VAR_20, VAR_16);
  if (VAR_21)
   return VAR_21;

  VAR_18 = VAR_8;
  VAR_13 = 0;

  VAR_19 += VAR_24;
  if (VAR_19 >= 4) {
   VAR_19 -= 4;
   VAR_8++;
  }

  VAR_6 -= VAR_24;
  VAR_12 += VAR_24;
 }

 return 0;
}
