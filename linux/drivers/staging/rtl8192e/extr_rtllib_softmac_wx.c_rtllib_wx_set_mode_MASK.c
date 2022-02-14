
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


union iwreq_data {int mode; } ;
struct rtllib_device {int iw_mode; int wx_mutex; int proto_started; TYPE_1__* dev; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_3__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (struct rtllib_device*) ;
 int FUNC_5 (struct rtllib_device*,int) ;
 int FUNC_6 (struct rtllib_device*) ;

int FUNC_7(struct rtllib_device *VAR_3, struct iw_request_info *VAR_4,
        union iwreq_data *VAR_5, char *VAR_6)
{
 int VAR_7 = 0;

 FUNC_6(VAR_3);
 FUNC_0(&VAR_3->wx_mutex);
 switch (VAR_5->mode) {
 case 128:
 case 131:
 case 129:
  break;
 case 130:
  VAR_5->mode = 129;
  break;
 default:
  VAR_7 = -VAR_2;
  goto out;
 }

 if (VAR_5->mode == VAR_3->iw_mode)
  goto out;

 if (VAR_5->mode == 128) {
  VAR_3->dev->type = VAR_1;
  FUNC_3(VAR_3->dev, 0);
 } else {
  VAR_3->dev->type = VAR_0;
  if (VAR_3->iw_mode == 128)
   FUNC_2(VAR_3->dev, 0);
 }

 if (!VAR_3->proto_started) {
  VAR_3->iw_mode = VAR_5->mode;
 } else {
  FUNC_5(VAR_3, 1);
  VAR_3->iw_mode = VAR_5->mode;
  FUNC_4(VAR_3);
 }

out:
 FUNC_1(&VAR_3->wx_mutex);
 return VAR_7;
}
