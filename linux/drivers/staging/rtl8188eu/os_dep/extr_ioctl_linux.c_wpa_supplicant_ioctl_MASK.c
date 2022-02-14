
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct iw_point {int length; int pointer; } ;
struct TYPE_7__ {int reason_code; int command; } ;
struct TYPE_6__ {int len; scalar_t__ data; } ;
struct TYPE_5__ {int value; int name; } ;
struct TYPE_8__ {TYPE_3__ mlme; TYPE_2__ wpa_ie; TYPE_1__ wpa_param; } ;
struct ieee_param {int cmd; TYPE_4__ u; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 scalar_t__ FUNC_1 (struct ieee_param*,int ,int) ;
 scalar_t__ FUNC_2 (int ,struct ieee_param*,int) ;
 int FUNC_3 (struct ieee_param*) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct adapter*,char*,int ) ;
 int FUNC_7 (struct net_device*,int ,int ) ;
 int FUNC_8 (struct net_device*,struct ieee_param*,int) ;
 int FUNC_9 (struct net_device*,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_4, struct iw_point *VAR_5)
{
 struct ieee_param *VAR_6;
 uint VAR_7 = 0;

 if (VAR_5->length < sizeof(struct ieee_param) || !VAR_5->pointer) {
  VAR_7 = -VAR_1;
  goto out;
 }

 VAR_6 = (struct ieee_param *)FUNC_4(VAR_5->length);
 if (!VAR_6) {
  VAR_7 = -VAR_2;
  goto out;
 }

 if (FUNC_1(VAR_6, VAR_5->pointer, VAR_5->length)) {
  FUNC_3(VAR_6);
  VAR_7 = -VAR_0;
  goto out;
 }

 switch (VAR_6->cmd) {
 case 128:
  VAR_7 = FUNC_9(VAR_4, VAR_6->u.wpa_param.name, VAR_6->u.wpa_param.value);
  break;

 case 129:
  VAR_7 = FUNC_6((struct adapter *)FUNC_5(VAR_4),
          (char *)VAR_6->u.wpa_ie.data, (u16)VAR_6->u.wpa_ie.len);
  break;

 case 130:
  VAR_7 = FUNC_8(VAR_4, VAR_6, VAR_5->length);
  break;

 case 131:
  VAR_7 = FUNC_7(VAR_4, VAR_6->u.mlme.command, VAR_6->u.mlme.reason_code);
  break;

 default:
  FUNC_0("Unknown WPA supplicant request: %d\n", VAR_6->cmd);
  VAR_7 = -VAR_3;
  break;
 }

 if (VAR_7 == 0 && FUNC_2(VAR_5->pointer, VAR_6, VAR_5->length))
  VAR_7 = -VAR_0;

 FUNC_3(VAR_6);

out:

 return VAR_7;
}
