
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adu_device {int udev; struct adu_device* interrupt_out_buffer; struct adu_device* interrupt_in_buffer; struct adu_device* read_buffer_secondary; struct adu_device* read_buffer_primary; int interrupt_out_urb; int interrupt_in_urb; } ;


 int FUNC_0 (struct adu_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct adu_device *VAR_0)
{

 FUNC_1(VAR_0->interrupt_in_urb);
 FUNC_1(VAR_0->interrupt_out_urb);
 FUNC_0(VAR_0->read_buffer_primary);
 FUNC_0(VAR_0->read_buffer_secondary);
 FUNC_0(VAR_0->interrupt_in_buffer);
 FUNC_0(VAR_0->interrupt_out_buffer);
 FUNC_2(VAR_0->udev);
 FUNC_0(VAR_0);
}
