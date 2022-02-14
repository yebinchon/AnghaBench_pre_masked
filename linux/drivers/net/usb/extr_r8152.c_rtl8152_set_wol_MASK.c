
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8152 {int saved_wolopts; int intf; int control; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct r8152*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct r8152* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct r8152*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_3, struct ethtool_wolinfo *VAR_4)
{
 struct r8152 *VAR_5 = FUNC_3(VAR_3);
 int VAR_6;

 if (!FUNC_4(VAR_5))
  return -VAR_1;

 if (VAR_4->wolopts & ~VAR_2)
  return -VAR_0;

 VAR_6 = FUNC_5(VAR_5->intf);
 if (VAR_6 < 0)
  goto out_set_wol;

 FUNC_1(&VAR_5->control);

 FUNC_0(VAR_5, VAR_4->wolopts);
 VAR_5->saved_wolopts = VAR_4->wolopts & VAR_2;

 FUNC_2(&VAR_5->control);

 FUNC_6(VAR_5->intf);

out_set_wol:
 return VAR_6;
}
