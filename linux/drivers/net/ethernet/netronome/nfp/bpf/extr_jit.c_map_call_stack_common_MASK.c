
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nfp_prog {scalar_t__ stack_frame_depth; } ;
struct TYPE_4__ {scalar_t__ value; } ;
struct TYPE_5__ {scalar_t__ off; TYPE_1__ var_off; } ;
struct TYPE_6__ {scalar_t__ var_off; TYPE_2__ reg; } ;
struct nfp_insn_meta {scalar_t__ func_id; TYPE_3__ arg2; } ;
typedef scalar_t__ s64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct nfp_prog*,int ,scalar_t__,int,int ) ;
 int FUNC_1 (struct nfp_prog*,int ,int ) ;
 int FUNC_2 (struct nfp_prog*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct nfp_prog*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct nfp_prog*) ;
 int FUNC_7 (struct nfp_prog*,int ,scalar_t__,int ) ;
 int FUNC_8 (struct nfp_prog*,int ,int ) ;
 int FUNC_9 (struct nfp_prog*,int) ;

__attribute__((used)) static int
FUNC_10(struct nfp_prog *VAR_8, struct nfp_insn_meta *VAR_9)
{
 bool VAR_10;
 u32 VAR_11;
 s64 VAR_12;


 VAR_12 = VAR_8->stack_frame_depth;
 VAR_12 += VAR_9->arg2.reg.var_off.value + VAR_9->arg2.reg.off;
 VAR_10 = VAR_9->arg2.var_off || VAR_12;


 if (VAR_10)
  FUNC_1(VAR_8, FUNC_5(2 * 2), VAR_4);
 if (VAR_9->func_id == VAR_0)
  FUNC_1(VAR_8, FUNC_5(3 * 2), VAR_5);

 FUNC_0(VAR_8, VAR_2, VAR_1 + VAR_9->func_id,
       2, VAR_6);
 VAR_11 = FUNC_3(VAR_8) + 2;


 FUNC_8(VAR_8, FUNC_4(0), FUNC_4(2));


 FUNC_7(VAR_8, FUNC_5(0), VAR_11, VAR_7);

 if (!FUNC_2(VAR_8, VAR_11))
  return -VAR_3;


 if (!VAR_10)
  return 0;

 FUNC_1(VAR_8, FUNC_6(VAR_8), VAR_4);
 FUNC_9(VAR_8, 3);

 return 0;
}
