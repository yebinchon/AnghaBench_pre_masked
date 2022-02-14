
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_msg_hdr {int dummy; } ;
struct mei_device {int init_clients_timer; int dev; int hbm_state; int me_clients_map; } ;
struct hbm_props_request {unsigned long me_addr; int hbm_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 unsigned long FUNC_1 (int ,unsigned long,unsigned long) ;
 int FUNC_2 (struct mei_msg_hdr*,size_t const) ;
 int FUNC_3 (struct mei_device*,struct mei_msg_hdr*,struct hbm_props_request*) ;
 int FUNC_4 (struct mei_device*) ;
 int FUNC_5 (struct mei_device*) ;
 int FUNC_6 (struct hbm_props_request*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct mei_device *VAR_4, unsigned long VAR_5)
{
 struct mei_msg_hdr VAR_6;
 struct hbm_props_request VAR_7;
 const size_t VAR_8 = sizeof(struct hbm_props_request);
 unsigned long VAR_9;
 int VAR_10;

 VAR_9 = FUNC_1(VAR_4->me_clients_map, VAR_2, VAR_5);


 if (VAR_9 == VAR_2) {
  VAR_4->hbm_state = VAR_3;
  FUNC_4(VAR_4);

  return 0;
 }

 FUNC_2(&VAR_6, VAR_8);

 FUNC_6(&VAR_7, 0, sizeof(struct hbm_props_request));

 VAR_7.hbm_cmd = VAR_0;
 VAR_7.me_addr = VAR_9;

 VAR_10 = FUNC_3(VAR_4, &VAR_6, &VAR_7);
 if (VAR_10) {
  FUNC_0(VAR_4->dev, "properties request write failed: ret = %d\n",
   VAR_10);
  return VAR_10;
 }

 VAR_4->init_clients_timer = VAR_1;
 FUNC_5(VAR_4);

 return 0;
}
