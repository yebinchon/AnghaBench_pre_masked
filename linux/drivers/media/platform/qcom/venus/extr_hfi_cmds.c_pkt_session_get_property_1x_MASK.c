
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int size; int pkt_type; } ;
struct TYPE_4__ {int session_id; TYPE_1__ hdr; } ;
struct hfi_session_get_property_pkt {int num_properties; int* data; TYPE_2__ shdr; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (void*) ;

__attribute__((used)) static int FUNC_1(struct hfi_session_get_property_pkt *VAR_2,
           void *VAR_3, u32 VAR_4)
{
 switch (VAR_4) {
 case 128:
 case 129:
  break;
 default:
  return -VAR_0;
 }

 VAR_2->shdr.hdr.size = sizeof(*VAR_2);
 VAR_2->shdr.hdr.pkt_type = VAR_1;
 VAR_2->shdr.session_id = FUNC_0(VAR_3);
 VAR_2->num_properties = 1;
 VAR_2->data[0] = VAR_4;

 return 0;
}
