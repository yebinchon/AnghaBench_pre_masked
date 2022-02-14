
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {int dummy; } ;
struct net_device {struct phy_device* phydev; } ;
struct macb {TYPE_1__* ptp_info; } ;
struct ifreq {int dummy; } ;
struct TYPE_2__ {int (* set_hwtst ) (struct net_device*,struct ifreq*,int) ;int (* get_hwtst ) (struct net_device*,struct ifreq*) ;} ;


 int VAR_0 ;
 int VAR_1 ;


 struct macb* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct phy_device*,struct ifreq*,int) ;
 int FUNC_3 (struct net_device*,struct ifreq*,int) ;
 int FUNC_4 (struct net_device*,struct ifreq*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2, struct ifreq *VAR_3, int VAR_4)
{
 struct phy_device *VAR_5 = VAR_2->phydev;
 struct macb *VAR_6 = FUNC_0(VAR_2);

 if (!FUNC_1(VAR_2))
  return -VAR_0;

 if (!VAR_5)
  return -VAR_1;

 if (!VAR_6->ptp_info)
  return FUNC_2(VAR_5, VAR_3, VAR_4);

 switch (VAR_4) {
 case 128:
  return VAR_6->ptp_info->set_hwtst(VAR_2, VAR_3, VAR_4);
 case 129:
  return VAR_6->ptp_info->get_hwtst(VAR_2, VAR_3);
 default:
  return FUNC_2(VAR_5, VAR_3, VAR_4);
 }
}
