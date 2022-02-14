
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int value; scalar_t__ disabled; } ;
union iwreq_data {TYPE_1__ retry; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw_priv {int mutex; int short_retry_limit; int long_retry_limit; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ipw_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_6,
       struct iw_request_info *VAR_7,
       union iwreq_data *VAR_8, char *VAR_9)
{
 struct ipw_priv *VAR_10 = FUNC_1(VAR_6);

 FUNC_2(&VAR_10->mutex);
 VAR_8->retry.disabled = 0;

 if ((VAR_8->retry.flags & VAR_5) == VAR_1) {
  FUNC_3(&VAR_10->mutex);
  return -VAR_0;
 }

 if (VAR_8->retry.flags & VAR_3) {
  VAR_8->retry.flags = VAR_2 | VAR_3;
  VAR_8->retry.value = VAR_10->long_retry_limit;
 } else if (VAR_8->retry.flags & VAR_4) {
  VAR_8->retry.flags = VAR_2 | VAR_4;
  VAR_8->retry.value = VAR_10->short_retry_limit;
 } else {
  VAR_8->retry.flags = VAR_2;
  VAR_8->retry.value = VAR_10->short_retry_limit;
 }
 FUNC_3(&VAR_10->mutex);

 FUNC_0("GET retry -> %d\n", VAR_8->retry.value);

 return 0;
}
