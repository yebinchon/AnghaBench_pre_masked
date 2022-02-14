
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_msg_hdr {int dummy; } ;
struct mei_device {int dummy; } ;
struct hbm_host_stop_request {int reason; int hbm_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mei_msg_hdr*,size_t const) ;
 int FUNC_1 (struct mei_device*,struct mei_msg_hdr*,struct hbm_host_stop_request*) ;
 int FUNC_2 (struct hbm_host_stop_request*,int ,size_t const) ;

__attribute__((used)) static int FUNC_3(struct mei_device *VAR_2)
{
 struct mei_msg_hdr VAR_3;
 struct hbm_host_stop_request VAR_4;
 const size_t VAR_5 = sizeof(struct hbm_host_stop_request);

 FUNC_0(&VAR_3, VAR_5);

 FUNC_2(&VAR_4, 0, VAR_5);
 VAR_4.hbm_cmd = VAR_1;
 VAR_4.reason = VAR_0;

 return FUNC_1(VAR_2, &VAR_3, &VAR_4);
}
