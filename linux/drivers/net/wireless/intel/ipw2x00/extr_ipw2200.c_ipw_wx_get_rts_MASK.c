
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int disabled; int value; scalar_t__ fixed; } ;
union iwreq_data {TYPE_1__ rts; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw_priv {int mutex; int rts_threshold; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 struct ipw_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1,
     struct iw_request_info *VAR_2,
     union iwreq_data *VAR_3, char *VAR_4)
{
 struct ipw_priv *VAR_5 = FUNC_1(VAR_1);
 FUNC_2(&VAR_5->mutex);
 VAR_3->rts.value = VAR_5->rts_threshold;
 VAR_3->rts.fixed = 0;
 VAR_3->rts.disabled = (VAR_3->rts.value == VAR_0);
 FUNC_3(&VAR_5->mutex);
 FUNC_0("GET RTS Threshold -> %d\n", VAR_3->rts.value);
 return 0;
}
