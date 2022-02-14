
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; int dev_addr; } ;
struct macsec_dev {struct net_device* real_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,struct net_device*) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,struct net_device*) ;
 struct macsec_dev* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_2)
{
 struct macsec_dev *VAR_3 = FUNC_5(VAR_2);
 struct net_device *VAR_4 = VAR_3->real_dev;

 FUNC_6(VAR_2);

 FUNC_0(VAR_4, VAR_2);
 FUNC_4(VAR_4, VAR_2);

 if (VAR_2->flags & VAR_0)
  FUNC_1(VAR_4, -1);

 if (VAR_2->flags & VAR_1)
  FUNC_2(VAR_4, -1);

 FUNC_3(VAR_4, VAR_2->dev_addr);

 return 0;
}
