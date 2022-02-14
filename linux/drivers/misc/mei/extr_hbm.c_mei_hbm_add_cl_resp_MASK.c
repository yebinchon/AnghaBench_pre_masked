
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct mei_msg_hdr {int dummy; } ;
struct mei_device {int dev; } ;
struct hbm_add_client_response {void* status; void* me_addr; int hbm_cmd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct mei_msg_hdr*,size_t const) ;
 int FUNC_3 (struct mei_device*,struct mei_msg_hdr*,struct hbm_add_client_response*) ;
 int FUNC_4 (struct hbm_add_client_response*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct mei_device *VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct mei_msg_hdr VAR_4;
 struct hbm_add_client_response VAR_5;
 const size_t VAR_6 = sizeof(struct hbm_add_client_response);
 int VAR_7;

 FUNC_0(VAR_1->dev, "adding client response\n");

 FUNC_2(&VAR_4, VAR_6);

 FUNC_4(&VAR_5, 0, sizeof(struct hbm_add_client_response));
 VAR_5.hbm_cmd = VAR_0;
 VAR_5.me_addr = VAR_2;
 VAR_5.status = VAR_3;

 VAR_7 = FUNC_3(VAR_1, &VAR_4, &VAR_5);
 if (VAR_7)
  FUNC_1(VAR_1->dev, "add client response write failed: ret = %d\n",
   VAR_7);
 return VAR_7;
}
