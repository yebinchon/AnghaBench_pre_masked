
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct mdio_device {int dev; int addr; int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct mdio_device* FUNC_2 (struct phy*) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_4)
{
 struct mdio_device *VAR_5 = FUNC_2(VAR_4);
 int VAR_6;


 VAR_6 = FUNC_1(VAR_5->bus, VAR_5->addr,
      VAR_0, VAR_1);
 if (VAR_6)
  goto err;


 VAR_6 = FUNC_1(VAR_5->bus, VAR_5->addr,
      VAR_3, VAR_2);
 if (VAR_6)
  goto err;

 return 0;

err:
 FUNC_0(&VAR_5->dev, "Error %d writing to phy\n", VAR_6);
 return VAR_6;
}
