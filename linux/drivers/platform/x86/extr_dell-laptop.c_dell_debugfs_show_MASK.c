
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct calling_interface_buffer {int* output; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct calling_interface_buffer*,int,int ,int ,int ) ;
 int FUNC_2 (struct calling_interface_buffer*,int ,int ) ;
 int FUNC_3 (struct seq_file*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_2, void *VAR_3)
{
 struct calling_interface_buffer VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;

 FUNC_1(&VAR_4, 0, 0, 0, 0);
 VAR_8 = FUNC_2(&VAR_4, VAR_0, VAR_1);
 if (VAR_8)
  return VAR_8;
 VAR_7 = VAR_4.output[1];

 FUNC_1(&VAR_4, 0x2, 0, 0, 0);
 VAR_6 = FUNC_2(&VAR_4, VAR_0, VAR_1);
 if (VAR_6)
  return VAR_6;
 VAR_5 = VAR_4.output[1];

 FUNC_3(VAR_2, "return:\t%d\n", VAR_8);
 FUNC_3(VAR_2, "status:\t0x%X\n", VAR_7);
 FUNC_3(VAR_2, "Bit 0 : Hardware switch supported:   %lu\n",
     VAR_7 & FUNC_0(0));
 FUNC_3(VAR_2, "Bit 1 : Wifi locator supported:      %lu\n",
    (VAR_7 & FUNC_0(1)) >> 1);
 FUNC_3(VAR_2, "Bit 2 : Wifi is supported:           %lu\n",
    (VAR_7 & FUNC_0(2)) >> 2);
 FUNC_3(VAR_2, "Bit 3 : Bluetooth is supported:      %lu\n",
    (VAR_7 & FUNC_0(3)) >> 3);
 FUNC_3(VAR_2, "Bit 4 : WWAN is supported:           %lu\n",
    (VAR_7 & FUNC_0(4)) >> 4);
 FUNC_3(VAR_2, "Bit 5 : Wireless keyboard supported: %lu\n",
    (VAR_7 & FUNC_0(5)) >> 5);
 FUNC_3(VAR_2, "Bit 6 : UWB supported:               %lu\n",
    (VAR_7 & FUNC_0(6)) >> 6);
 FUNC_3(VAR_2, "Bit 7 : WiGig supported:             %lu\n",
    (VAR_7 & FUNC_0(7)) >> 7);
 FUNC_3(VAR_2, "Bit 8 : Wifi is installed:           %lu\n",
    (VAR_7 & FUNC_0(8)) >> 8);
 FUNC_3(VAR_2, "Bit 9 : Bluetooth is installed:      %lu\n",
    (VAR_7 & FUNC_0(9)) >> 9);
 FUNC_3(VAR_2, "Bit 10: WWAN is installed:           %lu\n",
    (VAR_7 & FUNC_0(10)) >> 10);
 FUNC_3(VAR_2, "Bit 11: UWB installed:               %lu\n",
    (VAR_7 & FUNC_0(11)) >> 11);
 FUNC_3(VAR_2, "Bit 12: WiGig installed:             %lu\n",
    (VAR_7 & FUNC_0(12)) >> 12);

 FUNC_3(VAR_2, "Bit 16: Hardware switch is on:       %lu\n",
    (VAR_7 & FUNC_0(16)) >> 16);
 FUNC_3(VAR_2, "Bit 17: Wifi is blocked:             %lu\n",
    (VAR_7 & FUNC_0(17)) >> 17);
 FUNC_3(VAR_2, "Bit 18: Bluetooth is blocked:        %lu\n",
    (VAR_7 & FUNC_0(18)) >> 18);
 FUNC_3(VAR_2, "Bit 19: WWAN is blocked:             %lu\n",
    (VAR_7 & FUNC_0(19)) >> 19);
 FUNC_3(VAR_2, "Bit 20: UWB is blocked:              %lu\n",
    (VAR_7 & FUNC_0(20)) >> 20);
 FUNC_3(VAR_2, "Bit 21: WiGig is blocked:            %lu\n",
    (VAR_7 & FUNC_0(21)) >> 21);

 FUNC_3(VAR_2, "\nhwswitch_return:\t%d\n", VAR_6);
 FUNC_3(VAR_2, "hwswitch_state:\t0x%X\n", VAR_5);
 FUNC_3(VAR_2, "Bit 0 : Wifi controlled by switch:      %lu\n",
     VAR_5 & FUNC_0(0));
 FUNC_3(VAR_2, "Bit 1 : Bluetooth controlled by switch: %lu\n",
     (VAR_5 & FUNC_0(1)) >> 1);
 FUNC_3(VAR_2, "Bit 2 : WWAN controlled by switch:      %lu\n",
     (VAR_5 & FUNC_0(2)) >> 2);
 FUNC_3(VAR_2, "Bit 3 : UWB controlled by switch:       %lu\n",
     (VAR_5 & FUNC_0(3)) >> 3);
 FUNC_3(VAR_2, "Bit 4 : WiGig controlled by switch:     %lu\n",
     (VAR_5 & FUNC_0(4)) >> 4);
 FUNC_3(VAR_2, "Bit 7 : Wireless switch config locked:  %lu\n",
     (VAR_5 & FUNC_0(7)) >> 7);
 FUNC_3(VAR_2, "Bit 8 : Wifi locator enabled:           %lu\n",
     (VAR_5 & FUNC_0(8)) >> 8);
 FUNC_3(VAR_2, "Bit 15: Wifi locator setting locked:    %lu\n",
     (VAR_5 & FUNC_0(15)) >> 15);

 return 0;
}
