
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbip_header_cmd_submit {int interval; int number_of_packets; int start_frame; int transfer_buffer_length; int transfer_flags; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct usbip_header_cmd_submit *VAR_0,
          int VAR_1)
{
 if (VAR_1) {
  VAR_0->transfer_flags = FUNC_2(VAR_0->transfer_flags);

  FUNC_3(&VAR_0->transfer_buffer_length);
  FUNC_3(&VAR_0->start_frame);
  FUNC_3(&VAR_0->number_of_packets);
  FUNC_3(&VAR_0->interval);
 } else {
  VAR_0->transfer_flags = FUNC_0(VAR_0->transfer_flags);

  FUNC_1(&VAR_0->transfer_buffer_length);
  FUNC_1(&VAR_0->start_frame);
  FUNC_1(&VAR_0->number_of_packets);
  FUNC_1(&VAR_0->interval);
 }
}
