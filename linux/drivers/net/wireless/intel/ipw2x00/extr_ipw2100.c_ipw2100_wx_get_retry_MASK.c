
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; scalar_t__ value; scalar_t__ disabled; } ;
union iwreq_data {TYPE_1__ retry; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw2100_priv {scalar_t__ long_retry_limit; scalar_t__ short_retry_limit; } ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ipw2100_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_6,
    struct iw_request_info *VAR_7,
    union iwreq_data *VAR_8, char *VAR_9)
{




 struct ipw2100_priv *VAR_10 = FUNC_1(VAR_6);

 VAR_8->retry.disabled = 0;

 if ((VAR_8->retry.flags & VAR_5) == VAR_1)
  return -VAR_0;

 if (VAR_8->retry.flags & VAR_3) {
  VAR_8->retry.flags = VAR_2 | VAR_3;
  VAR_8->retry.value = VAR_10->long_retry_limit;
 } else {
  VAR_8->retry.flags =
      (VAR_10->short_retry_limit !=
       VAR_10->long_retry_limit) ?
      VAR_2 | VAR_4 : VAR_2;

  VAR_8->retry.value = VAR_10->short_retry_limit;
 }

 FUNC_0("GET Retry -> %d\n", VAR_8->retry.value);

 return 0;
}
