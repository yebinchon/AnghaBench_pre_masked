
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2 {int mii_bmcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnx2*,int ,int*) ;
 int FUNC_1 (struct bnx2*,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct bnx2 *VAR_3)
{
 int VAR_4;
 u32 VAR_5;

        FUNC_1(VAR_3, VAR_3->mii_bmcr, VAR_0);


 for (VAR_4 = 0; VAR_4 < 100; VAR_4++) {
  FUNC_2(10);

  FUNC_0(VAR_3, VAR_3->mii_bmcr, &VAR_5);
  if (!(VAR_5 & VAR_0)) {
   FUNC_2(20);
   break;
  }
 }
 if (VAR_4 == 100) {
  return -VAR_1;
 }
 return 0;
}
