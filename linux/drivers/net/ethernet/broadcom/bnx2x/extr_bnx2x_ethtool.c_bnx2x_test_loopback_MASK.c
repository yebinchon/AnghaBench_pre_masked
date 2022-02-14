
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (struct bnx2x*,int) ;
 int FUNC_5 (struct bnx2x*) ;
 int FUNC_6 (struct bnx2x*,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct bnx2x *VAR_6)
{
 int VAR_7 = 0, VAR_8;

 if (FUNC_0(VAR_6))
  return VAR_7;

 if (!FUNC_7(VAR_6->dev))
  return VAR_0;

 FUNC_4(VAR_6, 1);
 FUNC_2(VAR_6);

 VAR_8 = FUNC_6(VAR_6, VAR_4);
 if (VAR_8) {
  FUNC_1(VAR_3, "  PHY loopback failed  (res %d)\n", VAR_8);
  VAR_7 |= VAR_5;
 }

 VAR_8 = FUNC_6(VAR_6, VAR_1);
 if (VAR_8) {
  FUNC_1(VAR_3, "  MAC loopback failed  (res %d)\n", VAR_8);
  VAR_7 |= VAR_2;
 }

 FUNC_5(VAR_6);
 FUNC_3(VAR_6);

 return VAR_7;
}
