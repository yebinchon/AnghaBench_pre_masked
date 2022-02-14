
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union iwreq_data {int dummy; } iwreq_data ;
struct rtllib_device {short raw_tx; scalar_t__ iw_mode; int wx_mutex; int dev; int (* data_hard_resume ) (int ) ;} ;
struct iw_request_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct rtllib_device *VAR_1,
   struct iw_request_info *VAR_2,
   union iwreq_data *VAR_3, char *VAR_4)
{

 int *VAR_5 = (int *)VAR_4;
 int VAR_6 = (VAR_5[0] > 0);
 short VAR_7 = VAR_1->raw_tx;

 FUNC_0(&VAR_1->wx_mutex);

 if (VAR_6)
  VAR_1->raw_tx = 1;
 else
  VAR_1->raw_tx = 0;

 FUNC_2(VAR_1->dev, "raw TX is %s\n",
      VAR_1->raw_tx ? "enabled" : "disabled");

 if (VAR_1->iw_mode == VAR_0) {
  if (VAR_7 == 0 && VAR_1->raw_tx) {
   if (VAR_1->data_hard_resume)
    VAR_1->data_hard_resume(VAR_1->dev);

   FUNC_4(VAR_1->dev);
  }

  if (VAR_7 && VAR_1->raw_tx == 1)
   FUNC_3(VAR_1->dev);
 }

 FUNC_1(&VAR_1->wx_mutex);

 return 0;
}
