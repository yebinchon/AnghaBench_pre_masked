
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; int dev_addr; } ;
struct macsec_dev {struct net_device* real_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*,int ) ;
 struct macsec_dev* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_2)
{
 struct macsec_dev *VAR_3 = FUNC_4(VAR_2);
 struct net_device *VAR_4 = VAR_3->real_dev;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_4, VAR_2->dev_addr);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_2->flags & VAR_0) {
  VAR_5 = FUNC_0(VAR_4, 1);
  if (VAR_5 < 0)
   goto del_unicast;
 }

 if (VAR_2->flags & VAR_1) {
  VAR_5 = FUNC_1(VAR_4, 1);
  if (VAR_5 < 0)
   goto clear_allmulti;
 }

 if (FUNC_6(VAR_4))
  FUNC_7(VAR_2);

 return 0;
clear_allmulti:
 if (VAR_2->flags & VAR_0)
  FUNC_0(VAR_4, -1);
del_unicast:
 FUNC_3(VAR_4, VAR_2->dev_addr);
 FUNC_5(VAR_2);
 return VAR_5;
}
