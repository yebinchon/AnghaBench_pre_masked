
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct phy_device {int interface; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct phy_device*,int,int,int) ;
 int FUNC_1 (struct phy_device*,int ,int) ;
 int FUNC_2 (struct phy_device*,int,int) ;
 int FUNC_3 (struct phy_device*,int) ;

__attribute__((used)) static int FUNC_4(struct phy_device *VAR_3)
{
 int VAR_4 = 0, VAR_5;
 u16 VAR_6;


 switch (VAR_3->interface) {
 case 131:
  VAR_6 = 0;
  break;
 case 130:
  VAR_6 = VAR_1 | VAR_0;
  break;
 case 129:
  VAR_6 = VAR_0;
  break;
 case 128:
  VAR_6 = VAR_1;
  break;
 default:
  return 0;
 }
 VAR_5 = FUNC_3(VAR_3, 0x7);
 if (VAR_5 < 0)
  goto err_restore_page;

 VAR_4 = FUNC_1(VAR_3, VAR_2, 0xa4);
 if (VAR_4)
  goto err_restore_page;

 VAR_4 = FUNC_0(VAR_3, 0x1c, VAR_1 | VAR_0,
      VAR_6);

err_restore_page:
 return FUNC_2(VAR_3, VAR_5, VAR_4);
}
