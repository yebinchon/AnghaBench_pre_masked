
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rcar_csi2 {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct rcar_csi2*,int ) ;
 int FUNC_4 (struct rcar_csi2*,int ,int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct rcar_csi2 *VAR_4, u16 VAR_5, u16 VAR_6)
{
 unsigned int VAR_7;

 FUNC_4(VAR_4, VAR_3,
      VAR_2 | FUNC_1(VAR_5) |
      VAR_1 | FUNC_0(VAR_6));


 for (VAR_7 = 0; VAR_7 <= 20; VAR_7++) {
  if (!(FUNC_3(VAR_4, VAR_3) & (VAR_2 | VAR_1)))
   return 0;

  FUNC_5(1000, 2000);
 }

 FUNC_2(VAR_4->dev, "Timeout waiting for PHTW_DWEN and/or PHTW_CWEN\n");

 return -VAR_0;
}
