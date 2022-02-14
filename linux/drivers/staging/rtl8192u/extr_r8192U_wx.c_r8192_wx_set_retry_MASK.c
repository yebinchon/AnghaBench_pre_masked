
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; scalar_t__ value; scalar_t__ disabled; } ;
union iwreq_data {TYPE_1__ retry; } ;
struct r8192_priv {scalar_t__ retry_rts; scalar_t__ retry_data; int wx_mutex; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_5,
    struct iw_request_info *VAR_6,
    union iwreq_data *VAR_7, char *VAR_8)
{
 struct r8192_priv *VAR_9 = FUNC_1(VAR_5);
 int VAR_10 = 0;

 FUNC_2(&VAR_9->wx_mutex);

 if (VAR_7->retry.flags & VAR_1 ||
     VAR_7->retry.disabled){
  VAR_10 = -VAR_0;
  goto exit;
 }
 if (!(VAR_7->retry.flags & VAR_2)) {
  VAR_10 = -VAR_0;
  goto exit;
 }

 if (VAR_7->retry.value > VAR_4) {
  VAR_10 = -VAR_0;
  goto exit;
 }
 if (VAR_7->retry.flags & VAR_3) {
  VAR_9->retry_rts = VAR_7->retry.value;
  FUNC_0("Setting retry for RTS/CTS data to %d", VAR_7->retry.value);

 } else {
  VAR_9->retry_data = VAR_7->retry.value;
  FUNC_0("Setting retry for non RTS/CTS data to %d", VAR_7->retry.value);
 }







 FUNC_4(VAR_5);
exit:
 FUNC_3(&VAR_9->wx_mutex);

 return VAR_10;
}
