
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_dcb_info {int dcb_version; } ;
struct port_info {struct port_dcb_info dcb; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct port_info* FUNC_0 (struct net_device*) ;

void FUNC_1(struct net_device *VAR_1)
{
 struct port_info *VAR_2 = FUNC_0(VAR_1);
 struct port_dcb_info *VAR_3 = &VAR_2->dcb;




 VAR_3->dcb_version = VAR_0;
}
