
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ fixed; int value; scalar_t__ disabled; } ;
union iwreq_data {TYPE_1__ rts; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw2100_priv {int status; int rts_threshold; int action_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
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
 int VAR_9, VAR_10;


 if (VAR_6->rts.fixed == 0)
  return -VAR_0;

 FUNC_3(&VAR_8->action_mutex);
 if (!(VAR_8->status & VAR_3)) {
  VAR_10 = -VAR_1;
  goto done;
 }

 if (VAR_6->rts.disabled)
  VAR_9 = VAR_8->rts_threshold | VAR_2;
 else {
  if (VAR_6->rts.value < 1 || VAR_6->rts.value > 2304) {
   VAR_10 = -VAR_0;
   goto done;
  }
  VAR_9 = VAR_6->rts.value;
 }

 VAR_10 = FUNC_1(VAR_8, VAR_9);

 FUNC_0("SET RTS Threshold -> 0x%08X\n", VAR_9);
      done:
 FUNC_4(&VAR_8->action_mutex);
 return VAR_10;
}
