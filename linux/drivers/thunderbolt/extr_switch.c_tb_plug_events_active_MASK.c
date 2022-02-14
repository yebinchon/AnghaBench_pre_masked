
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int plug_events_delay; int device_id; int enabled; } ;
struct tb_switch {int cap_plug_events; TYPE_1__ config; } ;





 int VAR_0 ;
 int FUNC_0 (struct tb_switch*,int*,int ,int,int) ;
 int FUNC_1 (struct tb_switch*,int*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct tb_switch *VAR_1, bool VAR_2)
{
 u32 VAR_3;
 int VAR_4;

 if (!VAR_1->config.enabled)
  return 0;

 VAR_1->config.plug_events_delay = 0xff;
 VAR_4 = FUNC_1(VAR_1, ((u32 *) &VAR_1->config) + 4, VAR_0, 4, 1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_1, &VAR_3, VAR_0, VAR_1->cap_plug_events + 1, 1);
 if (VAR_4)
  return VAR_4;

 if (VAR_2) {
  VAR_3 = VAR_3 & 0xFFFFFF83;
  switch (VAR_1->config.device_id) {
  case 129:
  case 130:
  case 128:
   break;
  default:
   VAR_3 |= 4;
  }
 } else {
  VAR_3 = VAR_3 | 0x7c;
 }
 return FUNC_1(VAR_1, &VAR_3, VAR_0,
      VAR_1->cap_plug_events + 1, 1);
}
