
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int els_req; } ;
struct fc_rdp_link_service_desc {void* length; TYPE_1__ payload; void* tag; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static uint32_t
FUNC_1(struct fc_rdp_link_service_desc *VAR_1,
  uint32_t VAR_2)
{

 VAR_1->tag = FUNC_0(VAR_0);
 VAR_1->payload.els_req = VAR_2;
 VAR_1->length = FUNC_0(sizeof(VAR_1->payload));

 return sizeof(struct fc_rdp_link_service_desc);
}
