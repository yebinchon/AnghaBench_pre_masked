
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_msg_hdr {int dummy; } ;
struct mei_device {int init_clients_timer; int hbm_state; int dev; scalar_t__ hbm_f_ie_supported; scalar_t__ hbm_f_dc_supported; } ;
struct hbm_host_enum_request {int flags; int hbm_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct mei_msg_hdr*,size_t const) ;
 int FUNC_2 (struct mei_device*,struct mei_msg_hdr*,struct hbm_host_enum_request*) ;
 int FUNC_3 (struct mei_device*) ;
 int FUNC_4 (struct hbm_host_enum_request*,int ,size_t const) ;

__attribute__((used)) static int FUNC_5(struct mei_device *VAR_5)
{
 struct mei_msg_hdr VAR_6;
 struct hbm_host_enum_request VAR_7;
 const size_t VAR_8 = sizeof(struct hbm_host_enum_request);
 int VAR_9;


 FUNC_1(&VAR_6, VAR_8);

 FUNC_4(&VAR_7, 0, VAR_8);
 VAR_7.hbm_cmd = VAR_0;
 VAR_7.flags |= VAR_5->hbm_f_dc_supported ?
     VAR_3 : 0;
 VAR_7.flags |= VAR_5->hbm_f_ie_supported ?
     VAR_4 : 0;

 VAR_9 = FUNC_2(VAR_5, &VAR_6, &VAR_7);
 if (VAR_9) {
  FUNC_0(VAR_5->dev, "enumeration request write failed: ret = %d.\n",
   VAR_9);
  return VAR_9;
 }
 VAR_5->hbm_state = VAR_2;
 VAR_5->init_clients_timer = VAR_1;
 FUNC_3(VAR_5);
 return 0;
}
