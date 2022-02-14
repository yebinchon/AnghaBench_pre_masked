
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union iwreq_data {int dummy; } iwreq_data ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw2100_priv {int status; int action_mutex; int power_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ipw2100_priv*,int) ;
 struct ipw2100_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4,
        struct iw_request_info *VAR_5,
        union iwreq_data *VAR_6, char *VAR_7)
{
 struct ipw2100_priv *VAR_8 = FUNC_2(VAR_4);
 int VAR_9 = 0, VAR_10 = *(int *)VAR_7;

 FUNC_3(&VAR_8->action_mutex);
 if (!(VAR_8->status & VAR_3)) {
  VAR_9 = -VAR_0;
  goto done;
 }

 if ((VAR_10 < 0) || (VAR_10 > VAR_2))
  VAR_10 = VAR_1;

 if (FUNC_0(VAR_8->power_mode) != VAR_10)
  VAR_9 = FUNC_1(VAR_8, VAR_10);
      done:
 FUNC_4(&VAR_8->action_mutex);
 return VAR_9;
}
