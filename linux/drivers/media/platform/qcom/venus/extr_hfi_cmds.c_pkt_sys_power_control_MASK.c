
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int size; int pkt_type; } ;
struct hfi_sys_set_property_pkt {int num_properties; int * data; TYPE_1__ hdr; } ;
struct hfi_enable {int enable; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct hfi_sys_set_property_pkt *VAR_2, u32 VAR_3)
{
 struct hfi_enable *VAR_4 = (struct hfi_enable *)&VAR_2->data[1];

 VAR_2->hdr.size = sizeof(*VAR_2) + sizeof(*VAR_4) + sizeof(u32);
 VAR_2->hdr.pkt_type = VAR_0;
 VAR_2->num_properties = 1;
 VAR_2->data[0] = VAR_1;
 VAR_4->enable = VAR_3;
}
