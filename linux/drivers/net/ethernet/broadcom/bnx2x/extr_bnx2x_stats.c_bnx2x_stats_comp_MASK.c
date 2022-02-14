
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__* FUNC_1 (struct bnx2x*,int ) ;
 int FUNC_2 () ;
 scalar_t__* VAR_1 ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct bnx2x *VAR_2)
{
 u32 *VAR_3 = FUNC_1(VAR_2, VAR_3);
 int VAR_4 = 10;

 FUNC_2();
 while (*VAR_3 != VAR_0) {
  if (!VAR_4) {
   FUNC_0("timeout waiting for stats finished\n");
   break;
  }
  VAR_4--;
  FUNC_3(1000, 2000);
 }
}
