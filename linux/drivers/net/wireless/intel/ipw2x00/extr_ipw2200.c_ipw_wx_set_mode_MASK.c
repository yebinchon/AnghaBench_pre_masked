
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union iwreq_data {int mode; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw_priv {int mutex; int adapter_restart; TYPE_2__* ieee; TYPE_1__* net_dev; } ;
struct TYPE_4__ {int iw_mode; } ;
struct TYPE_3__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;




 int FUNC_1 () ;
 int FUNC_2 (struct ipw_priv*,int ) ;
 struct ipw_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_4,
      struct iw_request_info *VAR_5,
      union iwreq_data *VAR_6, char *VAR_7)
{
 struct ipw_priv *VAR_8 = FUNC_3(VAR_4);
 int VAR_9 = 0;

 FUNC_0("Set MODE: %d\n", VAR_6->mode);

 switch (VAR_6->mode) {



 case 131:
 case 129:
  break;
 case 130:
  VAR_6->mode = 129;
  break;
 default:
  return -VAR_3;
 }
 if (VAR_6->mode == VAR_8->ieee->iw_mode)
  return 0;

 FUNC_4(&VAR_8->mutex);

 FUNC_2(VAR_8, 0);
 FUNC_1();

 VAR_8->ieee->iw_mode = VAR_6->mode;

 FUNC_6(&VAR_8->adapter_restart);
 FUNC_5(&VAR_8->mutex);
 return VAR_9;
}
