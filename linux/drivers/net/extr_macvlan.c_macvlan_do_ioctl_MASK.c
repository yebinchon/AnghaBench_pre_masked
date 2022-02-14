
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_ops {int (* ndo_do_ioctl ) (struct net_device*,struct ifreq*,int) ;} ;
struct net_device {int name; struct net_device_ops* netdev_ops; } ;
struct ifreq {int ifr_ifru; int ifr_name; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct net_device*) ;
 int VAR_2 ;
 struct net_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct net_device*,struct ifreq*,int) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_3, struct ifreq *VAR_4, int VAR_5)
{
 struct net_device *VAR_6 = FUNC_1(VAR_3);
 const struct net_device_ops *VAR_7 = VAR_6->netdev_ops;
 struct ifreq VAR_8;
 int VAR_9 = -VAR_0;

 FUNC_4(VAR_8.ifr_name, VAR_6->name, VAR_1);
 VAR_8.ifr_ifru = VAR_4->ifr_ifru;

 switch (VAR_5) {
 case 128:
  if (!FUNC_2(FUNC_0(VAR_3), &VAR_2))
   break;

 case 129:
  if (FUNC_3(VAR_6) && VAR_7->ndo_do_ioctl)
   VAR_9 = VAR_7->ndo_do_ioctl(VAR_6, &VAR_8, VAR_5);
  break;
 }

 if (!VAR_9)
  VAR_4->ifr_ifru = VAR_8.ifr_ifru;

 return VAR_9;
}
