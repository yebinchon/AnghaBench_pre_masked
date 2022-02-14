
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_hfi_device {int dummy; } ;
struct hfi_msg_event_notify_pkt {scalar_t__ event_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct venus_hfi_device*) ;
 int FUNC_1 (struct venus_hfi_device*,int ) ;
 int FUNC_2 (struct venus_hfi_device*) ;

__attribute__((used)) static void FUNC_3(struct venus_hfi_device *VAR_2,
     void *VAR_3)
{
 struct hfi_msg_event_notify_pkt *VAR_4 = VAR_3;

 if (VAR_4->event_id != VAR_0)
  return;

 FUNC_1(VAR_2, VAR_1);







 FUNC_0(VAR_2);
 FUNC_2(VAR_2);
}
