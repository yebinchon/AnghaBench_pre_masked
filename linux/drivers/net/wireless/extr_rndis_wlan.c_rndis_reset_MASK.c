
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int dummy; } ;
struct rndis_wlan_private {int command_lock; scalar_t__ current_command_oid; scalar_t__ command_buffer; } ;
struct rndis_reset {void* msg_len; void* msg_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 struct rndis_wlan_private* FUNC_1 (struct usbnet*) ;
 int FUNC_2 (struct rndis_reset*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct usbnet*,void*,int ) ;

__attribute__((used)) static int FUNC_6(struct usbnet *VAR_2)
{
 struct rndis_wlan_private *VAR_3 = FUNC_1(VAR_2);
 struct rndis_reset *VAR_4;
 int VAR_5;

 FUNC_3(&VAR_3->command_lock);

 VAR_4 = (void *)VAR_3->command_buffer;
 FUNC_2(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->msg_type = FUNC_0(VAR_1);
 VAR_4->msg_len = FUNC_0(sizeof(*VAR_4));
 VAR_3->current_command_oid = 0;
 VAR_5 = FUNC_5(VAR_2, (void *)VAR_4, VAR_0);

 FUNC_4(&VAR_3->command_lock);

 if (VAR_5 < 0)
  return VAR_5;
 return 0;
}
