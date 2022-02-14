
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netvsc_device {scalar_t__ send_buf_gpadl_handle; } ;
struct net_device {int dummy; } ;
struct hv_device {int channel; } ;


 int FUNC_0 (struct net_device*,char*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct hv_device *VAR_0,
           struct netvsc_device *VAR_1,
           struct net_device *VAR_2)
{
 int VAR_3;

 if (VAR_1->send_buf_gpadl_handle) {
  VAR_3 = FUNC_1(VAR_0->channel,
        VAR_1->send_buf_gpadl_handle);




  if (VAR_3 != 0) {
   FUNC_0(VAR_2,
       "unable to teardown send buffer's gpadl\n");
   return;
  }
  VAR_1->send_buf_gpadl_handle = 0;
 }
}
