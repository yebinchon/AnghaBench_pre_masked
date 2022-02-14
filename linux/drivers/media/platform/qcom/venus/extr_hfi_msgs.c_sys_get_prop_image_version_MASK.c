
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int size; } ;
struct hfi_msg_sys_property_info_pkt {int num_properties; int * data; TYPE_1__ hdr; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int *) ;

__attribute__((used)) static void
FUNC_1(struct device *VAR_0,
      struct hfi_msg_sys_property_info_pkt *VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_1->hdr.size - sizeof(*VAR_1);

 if (VAR_2 < 128 || !VAR_1->data[1] || VAR_1->num_properties > 1)

  return;

 FUNC_0(VAR_0, "F/W version: %s\n", (u8 *)&VAR_1->data[1]);
}
