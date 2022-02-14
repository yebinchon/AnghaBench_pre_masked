
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_usb {int dev; int id_workaround_work; int linkstat; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct twl4030_usb* FUNC_0 (struct phy*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(struct phy *VAR_2)
{
 struct twl4030_usb *VAR_3 = FUNC_0(VAR_2);

 FUNC_1(VAR_3->dev);
 VAR_3->linkstat = VAR_1;
 FUNC_4(&VAR_3->id_workaround_work, VAR_0);
 FUNC_2(VAR_3->dev);
 FUNC_3(VAR_3->dev);

 return 0;
}
