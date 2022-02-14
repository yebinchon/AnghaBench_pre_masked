
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_eth {int ethsys; int dev; } ;
typedef scalar_t__ phy_interface_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct mtk_eth *VAR_7,
         phy_interface_t VAR_8)
{
 u32 VAR_9;




 FUNC_1(VAR_7->ethsys, VAR_2, &VAR_9);
 if (VAR_8 == VAR_5 &&
     VAR_9 & VAR_6) {
  FUNC_0(VAR_7->dev,
   "TRGMII mode with DDR2 memory is not supported!\n");
  return -VAR_0;
 }

 VAR_9 = (VAR_8 == VAR_5) ?
  VAR_3 : 0;

 FUNC_2(VAR_7->ethsys, VAR_1,
      VAR_4, VAR_9);

 return 0;
}
