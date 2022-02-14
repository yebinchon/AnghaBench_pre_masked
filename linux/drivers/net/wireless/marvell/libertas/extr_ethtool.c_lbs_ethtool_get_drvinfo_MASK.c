
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {int fwrelease; } ;
struct ethtool_drvinfo {int version; int driver; int fw_version; } ;


 char* VAR_0 ;
 int FUNC_0 (int ,int,char*,int,int,int,int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1,
      struct ethtool_drvinfo *VAR_2)
{
 struct lbs_private *VAR_3 = VAR_1->ml_priv;

 FUNC_0(VAR_2->fw_version, sizeof(VAR_2->fw_version),
  "%u.%u.%u.p%u",
  VAR_3->fwrelease >> 24 & 0xff,
  VAR_3->fwrelease >> 16 & 0xff,
  VAR_3->fwrelease >> 8 & 0xff,
  VAR_3->fwrelease & 0xff);
 FUNC_1(VAR_2->driver, "libertas", sizeof(VAR_2->driver));
 FUNC_1(VAR_2->version, VAR_0, sizeof(VAR_2->version));
}
