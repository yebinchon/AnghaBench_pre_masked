
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int swreg ;
struct nfp_prog {int dummy; } ;
struct nfp_insn_meta {int dummy; } ;
typedef enum cmd_mode { ____Placeholder_cmd_mode } cmd_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct nfp_prog*,int ,int,int ,int ,int ,int,int ) ;
 int FUNC_2 (struct nfp_prog*,int ,int,int ,int ,int ,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (struct nfp_prog*,int ,int ) ;
 int FUNC_7 (struct nfp_prog*,struct nfp_insn_meta*,int) ;

__attribute__((used)) static int
FUNC_8(struct nfp_prog *VAR_3, struct nfp_insn_meta *VAR_4,
     u8 VAR_5, swreg VAR_6, swreg VAR_7, int VAR_8,
     enum cmd_mode VAR_9)
{
 unsigned int VAR_10;
 u8 VAR_11, VAR_12;




 VAR_12 = FUNC_3(VAR_8, 4);
 VAR_11 = VAR_8 < 4 ? FUNC_0(VAR_8 - 1, 0) : 0;

 FUNC_1(VAR_3, VAR_1, VAR_9, 0,
   VAR_6, VAR_7, VAR_12 / 4 - 1, VAR_0);

 VAR_10 = 0;
 if (VAR_11)
  FUNC_2(VAR_3, FUNC_4(VAR_5), VAR_11,
      FUNC_5(0), VAR_2, 0, 1);
 else
  for (; VAR_10 * 4 < VAR_8; VAR_10++)
   FUNC_6(VAR_3, FUNC_4(VAR_5 + VAR_10), FUNC_5(VAR_10));

 if (VAR_10 < 2)
  FUNC_7(VAR_3, VAR_4, VAR_5);

 return 0;
}
