
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union iwreq_data {TYPE_1__ sens; } ;
struct r8192_priv {scalar_t__ (* rf_set_sens ) (struct net_device*,int ) ;int wx_mutex; int sens; scalar_t__ bHwRadioOff; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 short VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1,
          struct iw_request_info *VAR_2,
          union iwreq_data *VAR_3, char *VAR_4)
{
 struct r8192_priv *VAR_5 = FUNC_2(VAR_1);

 short VAR_6 = 0;

 if (VAR_5->bHwRadioOff)
  return 0;

 FUNC_0(&VAR_5->wx_mutex);
 if (VAR_5->rf_set_sens == ((void*)0)) {
  VAR_6 = -1;
  goto exit;
 }
 if (VAR_5->rf_set_sens(VAR_1, VAR_3->sens.value) == 0)
  VAR_5->sens = VAR_3->sens.value;
 else
  VAR_6 = -VAR_0;

exit:
 FUNC_1(&VAR_5->wx_mutex);

 return VAR_6;
}
