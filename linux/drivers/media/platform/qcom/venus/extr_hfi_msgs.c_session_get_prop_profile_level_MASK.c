
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct hfi_profile_level {int level; int profile; } ;
struct TYPE_3__ {int size; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
struct hfi_msg_session_property_info_pkt {int * data; TYPE_2__ shdr; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static unsigned int
FUNC_0(struct hfi_msg_session_property_info_pkt *VAR_2,
          struct hfi_profile_level *VAR_3)
{
 struct hfi_profile_level *VAR_4;
 u32 VAR_5;

 VAR_5 = VAR_2->shdr.hdr.size - sizeof(*VAR_2);

 if (!VAR_5 || VAR_5 % sizeof(struct hfi_profile_level))

  return VAR_1;

 VAR_4 = (struct hfi_profile_level *)&VAR_2->data[1];
 VAR_3->profile = VAR_4->profile;
 VAR_3->level = VAR_4->level;

 return VAR_0;
}
