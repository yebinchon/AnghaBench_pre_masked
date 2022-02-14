
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int size; int pkt_type; } ;
struct hfi_sys_release_resource_pkt {int resource_type; int resource_handle; TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (void*) ;

int FUNC_1(struct hfi_sys_release_resource_pkt *VAR_3, u32 VAR_4,
      u32 VAR_5, void *VAR_6)
{
 VAR_3->hdr.size = sizeof(*VAR_3);
 VAR_3->hdr.pkt_type = VAR_1;
 VAR_3->resource_handle = FUNC_0(VAR_6);

 switch (VAR_4) {
 case 129:
 case 128:
  VAR_3->resource_type = VAR_2;
  break;
 case 130:
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
