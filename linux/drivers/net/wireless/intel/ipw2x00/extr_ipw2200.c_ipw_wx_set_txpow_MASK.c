
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ value; scalar_t__ flags; int fixed; int disabled; } ;
union iwreq_data {TYPE_1__ power; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw_priv {scalar_t__ tx_power; int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct ipw_priv*,int ) ;
 int FUNC_1 (struct ipw_priv*) ;
 struct ipw_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_6,
       struct iw_request_info *VAR_7,
       union iwreq_data *VAR_8, char *VAR_9)
{
 struct ipw_priv *VAR_10 = FUNC_2(VAR_6);
 int VAR_11 = 0;

 FUNC_3(&VAR_10->mutex);
 if (FUNC_0(VAR_10, VAR_8->power.disabled)) {
  VAR_11 = -VAR_0;
  goto out;
 }

 if (!VAR_8->power.fixed)
  VAR_8->power.value = VAR_2;

 if (VAR_8->power.flags != VAR_5) {
  VAR_11 = -VAR_1;
  goto out;
 }

 if ((VAR_8->power.value > VAR_3) ||
     (VAR_8->power.value < VAR_4)) {
  VAR_11 = -VAR_1;
  goto out;
 }

 VAR_10->tx_power = VAR_8->power.value;
 VAR_11 = FUNC_1(VAR_10);
      out:
 FUNC_4(&VAR_10->mutex);
 return VAR_11;
}
