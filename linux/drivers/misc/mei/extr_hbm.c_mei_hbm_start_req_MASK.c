
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mei_msg_hdr {int dummy; } ;
struct mei_device {int init_clients_timer; int hbm_state; int dev; } ;
struct TYPE_2__ {int minor_version; int major_version; } ;
struct hbm_host_version_request {TYPE_1__ host_version; int hbm_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct mei_msg_hdr*,size_t const) ;
 int FUNC_2 (struct mei_device*) ;
 int FUNC_3 (struct mei_device*,struct mei_msg_hdr*,struct hbm_host_version_request*) ;
 int FUNC_4 (struct mei_device*) ;
 int FUNC_5 (struct hbm_host_version_request*,int ,size_t const) ;

int FUNC_6(struct mei_device *VAR_6)
{
 struct mei_msg_hdr VAR_7;
 struct hbm_host_version_request VAR_8;
 const size_t VAR_9 = sizeof(struct hbm_host_version_request);
 int VAR_10;

 FUNC_2(VAR_6);

 FUNC_1(&VAR_7, VAR_9);


 FUNC_5(&VAR_8, 0, VAR_9);
 VAR_8.hbm_cmd = VAR_2;
 VAR_8.host_version.major_version = VAR_0;
 VAR_8.host_version.minor_version = VAR_1;

 VAR_6->hbm_state = VAR_4;
 VAR_10 = FUNC_3(VAR_6, &VAR_7, &VAR_8);
 if (VAR_10) {
  FUNC_0(VAR_6->dev, "version message write failed: ret = %d\n",
   VAR_10);
  return VAR_10;
 }

 VAR_6->hbm_state = VAR_5;
 VAR_6->init_clients_timer = VAR_3;
 FUNC_4(VAR_6);
 return 0;
}
