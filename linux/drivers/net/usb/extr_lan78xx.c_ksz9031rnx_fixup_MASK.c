
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int attached_dev; } ;
struct lan78xx_net {int interface; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lan78xx_net* FUNC_0 (int ) ;
 int FUNC_1 (struct phy_device*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_2)
{
 struct lan78xx_net *VAR_3 = FUNC_0(VAR_2->attached_dev);



 FUNC_1(VAR_2, VAR_0, 4, 0x0077);

 FUNC_1(VAR_2, VAR_0, 5, 0x7777);

 FUNC_1(VAR_2, VAR_0, 8, 0x1FF);

 VAR_3->interface = VAR_1;

 return 1;
}
