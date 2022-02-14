
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int swreg ;
struct nfp_prog {int dummy; } ;
struct TYPE_2__ {int type; } ;
struct nfp_insn_meta {scalar_t__ func_id; TYPE_1__ arg1; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nfp_prog*,int ,scalar_t__,int,int ) ;
 int FUNC_1 (struct nfp_prog*) ;
 int FUNC_2 (struct nfp_prog*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct nfp_prog*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct nfp_prog*,int ,int ) ;
 int FUNC_7 (struct nfp_prog*,int ,scalar_t__,int ) ;
 int FUNC_8 (struct nfp_prog*,int ,int ) ;

__attribute__((used)) static int
FUNC_9(struct nfp_prog *VAR_5, struct nfp_insn_meta *VAR_6)
{
 swreg VAR_7;
 u32 VAR_8;

 VAR_7 = FUNC_6(VAR_5, VAR_6->arg1.type, FUNC_1(VAR_5));

 VAR_8 = FUNC_3(VAR_5) + 3;

 FUNC_0(VAR_5, VAR_1, VAR_0 + VAR_6->func_id,
       2, VAR_3);


 FUNC_8(VAR_5, FUNC_4(1), VAR_7);


 FUNC_7(VAR_5, FUNC_5(0), VAR_8, VAR_4);

 if (!FUNC_2(VAR_5, VAR_8))
  return -VAR_2;

 return 0;
}
