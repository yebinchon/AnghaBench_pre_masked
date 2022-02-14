
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int flags; int dev_addr; } ;
struct macsec_dev {struct net_device* real_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 struct macsec_dev* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2, void *VAR_3)
{
 struct macsec_dev *VAR_4 = FUNC_4(VAR_2);
 struct net_device *VAR_5 = VAR_4->real_dev;
 struct sockaddr *VAR_6 = VAR_3;
 int VAR_7;

 if (!FUNC_3(VAR_6->sa_data))
  return -VAR_0;

 if (!(VAR_2->flags & VAR_1))
  goto out;

 VAR_7 = FUNC_0(VAR_5, VAR_6->sa_data);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_1(VAR_5, VAR_2->dev_addr);

out:
 FUNC_2(VAR_2->dev_addr, VAR_6->sa_data);
 return 0;
}
