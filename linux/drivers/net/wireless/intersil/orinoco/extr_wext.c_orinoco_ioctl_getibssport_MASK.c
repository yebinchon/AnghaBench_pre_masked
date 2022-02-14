
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orinoco_private {int ibss_port; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 struct orinoco_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0,
         struct iw_request_info *VAR_1,
         void *VAR_2,
         char *VAR_3)
{
 struct orinoco_private *VAR_4 = FUNC_0(VAR_0);
 int *VAR_5 = (int *) VAR_3;

 *VAR_5 = VAR_4->ibss_port;
 return 0;
}
