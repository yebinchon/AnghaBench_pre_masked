
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtmc_device_data {int kref; int * iin_urb; int * iin_buffer; int iin_ep_present; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct usbtmc_device_data *VAR_1)
{
 if (!VAR_1->iin_ep_present || !VAR_1->iin_urb)
  return;
 FUNC_3(VAR_1->iin_urb);
 FUNC_0(VAR_1->iin_buffer);
 VAR_1->iin_buffer = ((void*)0);
 FUNC_2(VAR_1->iin_urb);
 VAR_1->iin_urb = ((void*)0);
 FUNC_1(&VAR_1->kref, VAR_0);
}
