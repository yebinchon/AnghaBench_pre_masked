
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; scalar_t__ fixed; } ;
union iwreq_data {TYPE_1__ sens; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw_priv {int roaming_threshold; int disassociate_threshold; int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ipw_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_5,
       struct iw_request_info *VAR_6,
       union iwreq_data *VAR_7, char *VAR_8)
{
 struct ipw_priv *VAR_9 = FUNC_1(VAR_5);
 int VAR_10 = 0;

 FUNC_0("Setting roaming threshold to %d\n", VAR_7->sens.value);
 FUNC_0("Setting disassociate threshold to %d\n", 3*VAR_7->sens.value);
 FUNC_2(&VAR_9->mutex);

 if (VAR_7->sens.fixed == 0)
 {
  VAR_9->roaming_threshold = VAR_2;
  VAR_9->disassociate_threshold = VAR_1;
  goto out;
 }
 if ((VAR_7->sens.value > VAR_3) ||
     (VAR_7->sens.value < VAR_4)) {
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_9->roaming_threshold = VAR_7->sens.value;
 VAR_9->disassociate_threshold = 3*VAR_7->sens.value;
      out:
 FUNC_3(&VAR_9->mutex);
 return VAR_10;
}
