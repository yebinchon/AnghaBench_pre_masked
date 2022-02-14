
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mii_ioctl_data {int dummy; } ;
struct ifreq {int dummy; } ;
struct ftmac100 {int mii; } ;


 int FUNC_0 (int *,struct mii_ioctl_data*,int,int *) ;
 struct mii_ioctl_data* FUNC_1 (struct ifreq*) ;
 struct ftmac100* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, struct ifreq *VAR_1, int VAR_2)
{
 struct ftmac100 *VAR_3 = FUNC_2(VAR_0);
 struct mii_ioctl_data *VAR_4 = FUNC_1(VAR_1);

 return FUNC_0(&VAR_3->mii, VAR_4, VAR_2, ((void*)0));
}
