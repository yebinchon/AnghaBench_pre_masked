
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_hbm_cl_cmd {int dummy; } ;
struct mei_device {int dummy; } ;
struct mei_cl {int notify_en; int status; } ;
struct hbm_notification_response {scalar_t__ status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mei_device*,struct mei_cl*,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mei_device *VAR_3,
     struct mei_cl *VAR_4,
     struct mei_hbm_cl_cmd *VAR_5)
{
 struct hbm_notification_response *VAR_6 =
  (struct hbm_notification_response *)VAR_5;

 FUNC_0(VAR_3, VAR_4, "hbm: notify start response status=%d\n", VAR_6->status);

 if (VAR_6->status == VAR_2 ||
     VAR_6->status == VAR_1) {
  VAR_4->notify_en = 1;
  VAR_4->status = 0;
 } else {
  VAR_4->status = -VAR_0;
 }
}
