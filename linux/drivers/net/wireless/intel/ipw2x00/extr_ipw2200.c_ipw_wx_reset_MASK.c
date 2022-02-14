
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union iwreq_data {int dummy; } iwreq_data ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw_priv {int adapter_restart; } ;


 int FUNC_0 (char*) ;
 struct ipw_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0,
   struct iw_request_info *VAR_1,
   union iwreq_data *VAR_2, char *VAR_3)
{
 struct ipw_priv *VAR_4 = FUNC_1(VAR_0);
 FUNC_0("RESET\n");
 FUNC_2(&VAR_4->adapter_restart);
 return 0;
}
