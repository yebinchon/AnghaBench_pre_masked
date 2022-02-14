
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int size; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
struct hfi_msg_session_property_info_pkt {int * data; TYPE_2__ shdr; } ;
struct hfi_buffer_requirements {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct hfi_buffer_requirements*,struct hfi_buffer_requirements*,int) ;

__attribute__((used)) static unsigned int
FUNC_1(struct hfi_msg_session_property_info_pkt *VAR_3,
    struct hfi_buffer_requirements *VAR_4)
{
 struct hfi_buffer_requirements *VAR_5;
 u32 VAR_6;
 unsigned int VAR_7 = 0;

 VAR_6 = VAR_3->shdr.hdr.size - sizeof(*VAR_3);

 if (!VAR_6 || VAR_6 % sizeof(*VAR_5) || !VAR_3->data[1])

  return VAR_2;

 VAR_5 = (struct hfi_buffer_requirements *)&VAR_3->data[1];
 if (!VAR_5)
  return VAR_2;

 while (VAR_6) {
  FUNC_0(&VAR_4[VAR_7], VAR_5, sizeof(*VAR_4));
  VAR_7++;

  if (VAR_7 > VAR_0)
   return VAR_2;

  VAR_6 -= sizeof(struct hfi_buffer_requirements);
  VAR_5++;
 }

 return VAR_1;
}
