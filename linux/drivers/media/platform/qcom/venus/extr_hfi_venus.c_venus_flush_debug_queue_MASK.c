
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct venus_hfi_device {void* dbg_buf; TYPE_1__* core; } ;
struct hfi_msg_sys_debug_pkt {int msg_data; } ;
struct TYPE_4__ {scalar_t__ pkt_type; } ;
struct hfi_msg_sys_coverage_pkt {TYPE_2__ hdr; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device* dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct venus_hfi_device*,void*) ;

__attribute__((used)) static void FUNC_2(struct venus_hfi_device *VAR_1)
{
 struct device *VAR_2 = VAR_1->core->dev;
 void *VAR_3 = VAR_1->dbg_buf;

 while (!FUNC_1(VAR_1, VAR_3)) {
  struct hfi_msg_sys_coverage_pkt *VAR_4 = VAR_3;

  if (VAR_4->hdr.pkt_type != VAR_0) {
   struct hfi_msg_sys_debug_pkt *VAR_5 = VAR_3;

   FUNC_0(VAR_2, "%s", VAR_5->msg_data);
  }
 }
}
