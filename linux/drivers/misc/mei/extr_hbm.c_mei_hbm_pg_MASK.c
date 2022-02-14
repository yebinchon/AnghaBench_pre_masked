
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mei_msg_hdr {int dummy; } ;
struct mei_device {int dev; int hbm_f_pg_supported; } ;
struct hbm_power_gate {int hbm_cmd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mei_msg_hdr*,size_t const) ;
 int FUNC_2 (struct mei_device*,struct mei_msg_hdr*,struct hbm_power_gate*) ;
 int FUNC_3 (struct hbm_power_gate*,int ,size_t const) ;

int FUNC_4(struct mei_device *VAR_1, u8 VAR_2)
{
 struct mei_msg_hdr VAR_3;
 struct hbm_power_gate VAR_4;
 const size_t VAR_5 = sizeof(struct hbm_power_gate);
 int VAR_6;

 if (!VAR_1->hbm_f_pg_supported)
  return -VAR_0;

 FUNC_1(&VAR_3, VAR_5);

 FUNC_3(&VAR_4, 0, VAR_5);
 VAR_4.hbm_cmd = VAR_2;

 VAR_6 = FUNC_2(VAR_1, &VAR_3, &VAR_4);
 if (VAR_6)
  FUNC_0(VAR_1->dev, "power gate command write failed.\n");
 return VAR_6;
}
