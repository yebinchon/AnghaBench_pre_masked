
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int attached_dev; } ;
struct lan78xx_net {int interface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct lan78xx_net*,int ,int) ;
 struct lan78xx_net* FUNC_1 (int ) ;
 int FUNC_2 (struct phy_device*,int ,int) ;
 int FUNC_3 (struct phy_device*,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct phy_device *VAR_5)
{
 int VAR_6;
 int VAR_7;
 struct lan78xx_net *VAR_8 = FUNC_1(VAR_5->attached_dev);


 VAR_6 = FUNC_2(VAR_5, VAR_2, 0x8010);
 VAR_6 &= ~0x1800;
 VAR_6 |= 0x0800;
 FUNC_3(VAR_5, VAR_2, 0x8010, VAR_6);


 VAR_7 = FUNC_0(VAR_8, VAR_0,
    VAR_1);


 VAR_7 = FUNC_0(VAR_8, VAR_4, 0x3D00);

 VAR_8->interface = VAR_3;

 return 1;
}
