
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_phy {scalar_t__ phy_init_por; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct brcms_phy*,int ,int,int) ;
 int FUNC_2 (struct brcms_phy*) ;
 int FUNC_3 (struct brcms_phy*) ;

__attribute__((used)) static void FUNC_4(struct brcms_phy *VAR_4)
{

 FUNC_1(VAR_4, VAR_2, 0x1, 0x1);

 FUNC_1(VAR_4, VAR_1, 0x78, 0x78);
 FUNC_1(VAR_4, VAR_3, 0x80, 0x80);
 FUNC_0(2);
 FUNC_1(VAR_4, VAR_1, 0x78, 0x0);
 FUNC_1(VAR_4, VAR_3, 0x80, 0x0);

 if (VAR_4->phy_init_por) {
  FUNC_3(VAR_4);
  FUNC_2(VAR_4);
 }

 FUNC_1(VAR_4, VAR_0, 0x8, 0x0);
}
