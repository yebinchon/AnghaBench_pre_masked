
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; scalar_t__ disabled; } ;
union iwreq_data {TYPE_1__ power; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw2100_priv {int status; int power_mode; int action_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;



 int VAR_4 ;
 int FUNC_2 (struct ipw2100_priv*,int) ;
 struct ipw2100_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_5,
    struct iw_request_info *VAR_6,
    union iwreq_data *VAR_7, char *VAR_8)
{
 struct ipw2100_priv *VAR_9 = FUNC_3(VAR_5);
 int VAR_10 = 0;

 FUNC_4(&VAR_9->action_mutex);
 if (!(VAR_9->status & VAR_4)) {
  VAR_10 = -VAR_0;
  goto done;
 }

 if (VAR_7->power.disabled) {
  VAR_9->power_mode = FUNC_1(VAR_9->power_mode);
  VAR_10 = FUNC_2(VAR_9, VAR_3);
  FUNC_0("SET Power Management Mode -> off\n");
  goto done;
 }

 switch (VAR_7->power.flags & 129) {
 case 128:
 case 129:
 case 130:
  break;
 default:
  FUNC_0("SET PM Mode: %X not supported.\n",
        VAR_7->power.flags);
  VAR_10 = -VAR_1;
  goto done;
 }



 VAR_9->power_mode = VAR_2 | VAR_9->power_mode;
 VAR_10 = FUNC_2(VAR_9, FUNC_1(VAR_9->power_mode));

 FUNC_0("SET Power Management Mode -> 0x%02X\n", VAR_9->power_mode);

      done:
 FUNC_5(&VAR_9->action_mutex);
 return VAR_10;

}
