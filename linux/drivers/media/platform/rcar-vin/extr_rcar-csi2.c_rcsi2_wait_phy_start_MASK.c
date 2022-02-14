
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rcar_csi2 {int lanes; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int const FUNC_1 (struct rcar_csi2*,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct rcar_csi2 *VAR_4)
{
 unsigned int VAR_5;


 for (VAR_5 = 0; VAR_5 <= 20; VAR_5++) {
  const u32 VAR_6 = (1 << VAR_4->lanes) - 1;

  if ((FUNC_1(VAR_4, VAR_1) & VAR_2) &&
      (FUNC_1(VAR_4, VAR_3) & VAR_6) == VAR_6)
   return 0;

  FUNC_2(1000, 2000);
 }

 FUNC_0(VAR_4->dev, "Timeout waiting for LP-11 state\n");

 return -VAR_0;
}
