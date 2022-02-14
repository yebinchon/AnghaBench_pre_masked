
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iss_csi2_device {int regs1; int iss; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,int const) ;
 int FUNC_3 (int ,int ,int ,int const) ;
 int FUNC_4 (int ,int ,int ,int const) ;

__attribute__((used)) static void FUNC_5(struct iss_csi2_device *VAR_2, int VAR_3)
{
 const u32 VAR_4 = VAR_0 | VAR_1;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
  FUNC_4(VAR_2->iss, VAR_2->regs1, FUNC_1(VAR_5),
         VAR_4);
  if (VAR_3)
   FUNC_3(VAR_2->iss, VAR_2->regs1,
        FUNC_0(VAR_5), VAR_4);
  else
   FUNC_2(VAR_2->iss, VAR_2->regs1,
        FUNC_0(VAR_5), VAR_4);
 }
}
