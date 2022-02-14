
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int size; int pkt_type; } ;
struct hfi_sys_set_resource_pkt {TYPE_1__ hdr; int resource_type; int * resource_data; int resource_handle; } ;
struct hfi_resource_ocmem {int size; int mem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (void*) ;

int FUNC_1(struct hfi_sys_set_resource_pkt *VAR_3, u32 VAR_4, u32 VAR_5,
    u32 VAR_6, void *VAR_7)
{
 VAR_3->hdr.size = sizeof(*VAR_3);
 VAR_3->hdr.pkt_type = VAR_1;
 VAR_3->resource_handle = FUNC_0(VAR_7);

 switch (VAR_4) {
 case 129:
 case 128: {
  struct hfi_resource_ocmem *VAR_8 =
   (struct hfi_resource_ocmem *)&VAR_3->resource_data[0];

  VAR_8->size = VAR_5;
  VAR_8->mem = VAR_6;
  VAR_3->resource_type = VAR_2;
  VAR_3->hdr.size += sizeof(*VAR_8) - sizeof(u32);
  break;
 }
 case 130:
 default:
  return -VAR_0;
 }

 return 0;
}
