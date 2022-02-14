
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int size; int pkt_type; } ;
struct hfi_sys_test_ssr_pkt {int trigger_type; TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;




int FUNC_0(struct hfi_sys_test_ssr_pkt *VAR_2, u32 VAR_3)
{
 switch (VAR_3) {
 case 128:
 case 129:
 case 130:
  break;
 default:
  return -VAR_0;
 }

 VAR_2->hdr.size = sizeof(*VAR_2);
 VAR_2->hdr.pkt_type = VAR_1;
 VAR_2->trigger_type = VAR_3;

 return 0;
}
