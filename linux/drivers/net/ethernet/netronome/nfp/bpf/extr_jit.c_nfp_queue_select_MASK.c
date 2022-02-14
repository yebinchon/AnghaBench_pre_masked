
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nfp_prog {int dummy; } ;
struct TYPE_2__ {int src_reg; } ;
struct nfp_insn_meta {TYPE_1__ insn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct nfp_prog*,int ,int ,int ,int ) ;
 int FUNC_1 (struct nfp_prog*,int ,scalar_t__,int) ;
 int FUNC_2 (struct nfp_prog*,int ,int,int ,int ,int ) ;
 int FUNC_3 (struct nfp_prog*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct nfp_prog*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct nfp_prog*) ;
 int FUNC_6 (struct nfp_prog*) ;
 int FUNC_7 (struct nfp_prog*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 () ;

__attribute__((used)) static int
FUNC_12(struct nfp_prog *VAR_8, struct nfp_insn_meta *VAR_9)
{
 u32 VAR_10;

 VAR_10 = FUNC_5(VAR_8) + 5;


 FUNC_0(VAR_8, FUNC_11(), FUNC_8(VAR_9->insn.src_reg * 2),
   VAR_0, FUNC_10(0xff));
 FUNC_1(VAR_8, VAR_1, VAR_10, 2);


 FUNC_3(VAR_8, FUNC_6(VAR_8),
   FUNC_6(VAR_8), VAR_5, FUNC_10(1),
   VAR_6, VAR_4);
 FUNC_2(VAR_8,
        FUNC_7(VAR_8), 0x1, FUNC_9(VAR_9->insn.src_reg * 2),
        VAR_7, 0);



 FUNC_2(VAR_8,
        FUNC_7(VAR_8), 0x1, FUNC_10(VAR_3),
        VAR_7, 0);

 if (!FUNC_4(VAR_8, VAR_10))
  return -VAR_2;

 return 0;
}
