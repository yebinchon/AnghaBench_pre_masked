
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mei_msg_hdr {int dummy; } ;
struct mei_device {int dev; } ;
struct mei_cl {int dummy; } ;
struct hbm_notification_request {int start; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct mei_cl*,int ,struct hbm_notification_request*,size_t const) ;
 int FUNC_2 (struct mei_msg_hdr*,size_t const) ;
 int FUNC_3 (struct mei_device*,struct mei_msg_hdr*,struct hbm_notification_request*) ;

int FUNC_4(struct mei_device *VAR_1,
     struct mei_cl *VAR_2, u8 VAR_3)
{

 struct mei_msg_hdr VAR_4;
 struct hbm_notification_request VAR_5;
 const size_t VAR_6 = sizeof(struct hbm_notification_request);
 int VAR_7;

 FUNC_2(&VAR_4, VAR_6);
 FUNC_1(VAR_2, VAR_0, &VAR_5, VAR_6);

 VAR_5.start = VAR_3;

 VAR_7 = FUNC_3(VAR_1, &VAR_4, &VAR_5);
 if (VAR_7)
  FUNC_0(VAR_1->dev, "notify request failed: ret = %d\n", VAR_7);

 return VAR_7;
}
