
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union iwreq_data {int dummy; } iwreq_data ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw2100_priv {int status; int user_requested_scan; int action_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct ipw2100_priv*) ;
 scalar_t__ FUNC_2 (struct ipw2100_priv*) ;
 struct ipw2100_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2,
          struct iw_request_info *VAR_3,
          union iwreq_data *VAR_4, char *VAR_5)
{
 struct ipw2100_priv *VAR_6 = FUNC_3(VAR_2);
 int VAR_7 = 0;

 FUNC_4(&VAR_6->action_mutex);
 if (!(VAR_6->status & VAR_1)) {
  VAR_7 = -VAR_0;
  goto done;
 }

 FUNC_0("Initiating scan...\n");

 VAR_6->user_requested_scan = 1;
 if (FUNC_1(VAR_6) || FUNC_2(VAR_6)) {
  FUNC_0("Start scan failed.\n");



 }

      done:
 FUNC_5(&VAR_6->action_mutex);
 return VAR_7;
}
