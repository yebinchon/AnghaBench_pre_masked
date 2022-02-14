
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct xgene_mdio_pdata {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct xgene_mdio_pdata*,int ) ;
 int FUNC_3 (struct xgene_mdio_pdata*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct xgene_mdio_pdata *VAR_3)
{
 u32 VAR_4;
 u8 VAR_5 = 10;

 FUNC_3(VAR_3, VAR_2, 0x0);
 do {
  FUNC_1(100, 110);
  VAR_4 = FUNC_2(VAR_3, VAR_1);
 } while ((VAR_4 != 0xffffffff) && VAR_5--);

 if (VAR_4 != 0xffffffff) {
  FUNC_0(VAR_3->dev, "Failed to release memory from shutdown\n");
  return -VAR_0;
 }

 return 0;
}
