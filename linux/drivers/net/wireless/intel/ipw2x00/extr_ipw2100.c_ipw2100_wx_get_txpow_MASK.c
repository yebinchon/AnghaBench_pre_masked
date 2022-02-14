
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int disabled; int fixed; scalar_t__ value; int flags; } ;
union iwreq_data {TYPE_1__ txpower; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw2100_priv {int status; scalar_t__ tx_power; } ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ipw2100_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_4,
    struct iw_request_info *VAR_5,
    union iwreq_data *VAR_6, char *VAR_7)
{




 struct ipw2100_priv *VAR_8 = FUNC_1(VAR_4);

 VAR_6->txpower.disabled = (VAR_8->status & VAR_3) ? 1 : 0;

 if (VAR_8->tx_power == VAR_0) {
  VAR_6->txpower.fixed = 0;
  VAR_6->txpower.value = VAR_1;
 } else {
  VAR_6->txpower.fixed = 1;
  VAR_6->txpower.value = VAR_8->tx_power;
 }

 VAR_6->txpower.flags = VAR_2;

 FUNC_0("GET TX Power -> %d\n", VAR_6->txpower.value);

 return 0;
}
