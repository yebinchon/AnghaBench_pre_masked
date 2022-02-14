
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int value; scalar_t__ disabled; } ;
union iwreq_data {TYPE_1__ retry; } ;
typedef void* u8 ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw_priv {void* long_retry_limit; void* short_retry_limit; int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (char*,void*,void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ipw_priv*,void*,void*) ;
 struct ipw_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_5,
       struct iw_request_info *VAR_6,
       union iwreq_data *VAR_7, char *VAR_8)
{
 struct ipw_priv *VAR_9 = FUNC_2(VAR_5);

 if (VAR_7->retry.flags & VAR_1 || VAR_7->retry.disabled)
  return -VAR_0;

 if (!(VAR_7->retry.flags & VAR_2))
  return 0;

 if (VAR_7->retry.value < 0 || VAR_7->retry.value >= 255)
  return -VAR_0;

 FUNC_3(&VAR_9->mutex);
 if (VAR_7->retry.flags & VAR_4)
  VAR_9->short_retry_limit = (u8) VAR_7->retry.value;
 else if (VAR_7->retry.flags & VAR_3)
  VAR_9->long_retry_limit = (u8) VAR_7->retry.value;
 else {
  VAR_9->short_retry_limit = (u8) VAR_7->retry.value;
  VAR_9->long_retry_limit = (u8) VAR_7->retry.value;
 }

 FUNC_1(VAR_9, VAR_9->short_retry_limit,
        VAR_9->long_retry_limit);
 FUNC_4(&VAR_9->mutex);
 FUNC_0("SET retry limit -> short:%d long:%d\n",
       VAR_9->short_retry_limit, VAR_9->long_retry_limit);
 return 0;
}
