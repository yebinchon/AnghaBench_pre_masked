
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int doorbells; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct bnx2x *VAR_4, u32 *VAR_5)
{
 u32 VAR_6;
 int VAR_7 = 10, VAR_8 = 100;

 do {

  VAR_6 = FUNC_4(VAR_4->doorbells);
  if (FUNC_2(VAR_6))
   break;

  FUNC_3(VAR_8);

  FUNC_0("Invalid ME register value: 0x%08x\n. Is pf driver up?",
     VAR_6);
 } while (VAR_7-- > 0);

 if (!FUNC_2(VAR_6)) {
  FUNC_0("Invalid ME register value: 0x%08x\n", VAR_6);
  return -VAR_1;
 }

 FUNC_1(VAR_0, "valid ME register value: 0x%08x\n", VAR_6);

 *VAR_5 = (VAR_6 & VAR_2) >> VAR_3;

 return 0;
}
