
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct iw_point {int length; int pointer; } ;
struct TYPE_7__ {int reason_code; int command; } ;
struct TYPE_6__ {int len; scalar_t__ data; } ;
struct TYPE_5__ {int value; int name; } ;
struct TYPE_8__ {TYPE_3__ mlme; TYPE_2__ wpa_ie; TYPE_1__ wpa_param; } ;
struct ieee_param {int cmd; TYPE_4__ u; } ;
struct _adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 scalar_t__ FUNC_0 (struct ieee_param*) ;
 int FUNC_1 (struct ieee_param*) ;
 scalar_t__ FUNC_2 (int ,struct ieee_param*,int) ;
 int FUNC_3 (struct ieee_param*) ;
 struct ieee_param* FUNC_4 (int ,int) ;
 struct _adapter* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct _adapter*,char*,int ) ;
 int FUNC_7 (struct net_device*,int ,int ) ;
 int FUNC_8 (struct net_device*,struct ieee_param*,int) ;
 int FUNC_9 (struct net_device*,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_3, struct iw_point *VAR_4)
{
 struct ieee_param *VAR_5;
 int VAR_6 = 0;
 struct _adapter *VAR_7 = FUNC_5(VAR_3);

 if (VAR_4->length < sizeof(struct ieee_param) || !VAR_4->pointer)
  return -VAR_1;
 VAR_5 = FUNC_4(VAR_4->pointer, VAR_4->length);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);
 switch (VAR_5->cmd) {
 case 128:
  VAR_6 = FUNC_9(VAR_3, VAR_5->u.wpa_param.name,
        VAR_5->u.wpa_param.value);
  break;
 case 129:
  VAR_6 = FUNC_6(VAR_7, (char *)VAR_5->u.wpa_ie.data,
         (u16)VAR_5->u.wpa_ie.len);
  break;
 case 130:
  VAR_6 = FUNC_8(VAR_3, VAR_5, VAR_4->length);
  break;
 case 131:
  VAR_6 = FUNC_7(VAR_3, VAR_5->u.mlme.command,
        VAR_5->u.mlme.reason_code);
  break;
 default:
  VAR_6 = -VAR_2;
  break;
 }
 if (VAR_6 == 0 && FUNC_2(VAR_4->pointer, VAR_5, VAR_4->length))
  VAR_6 = -VAR_0;
 FUNC_3(VAR_5);
 return VAR_6;
}
