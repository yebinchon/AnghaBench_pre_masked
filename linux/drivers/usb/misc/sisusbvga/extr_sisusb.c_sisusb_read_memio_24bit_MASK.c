
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sisusb_usb_data {int dummy; } ;
struct sisusb_packet {int address; int header; int data; } ;


 int FUNC_0 (struct sisusb_usb_data*,int,struct sisusb_packet*) ;

__attribute__((used)) static int FUNC_1(struct sisusb_usb_data *VAR_0, int VAR_1,
  u32 VAR_2, u32 *VAR_3)
{
 struct sisusb_packet VAR_4;
 int VAR_5 = 0;

 VAR_4.address = VAR_2 & ~3;

 switch (VAR_2 & 3) {
 case 0:
  VAR_4.header = (VAR_1 << 6) | 0x0007;
  VAR_5 = FUNC_0(VAR_0, 6, &VAR_4);
  *VAR_3 = VAR_4.data & 0x00ffffff;
  break;
 case 1:
  VAR_4.header = (VAR_1 << 6) | 0x000e;
  VAR_5 = FUNC_0(VAR_0, 6, &VAR_4);
  *VAR_3 = VAR_4.data >> 8;
  break;
 case 2:
  VAR_4.header = (VAR_1 << 6) | 0x000c;
  VAR_5 = FUNC_0(VAR_0, 6, &VAR_4);
  *VAR_3 = VAR_4.data >> 16;
  VAR_4.header = (VAR_1 << 6) | 0x0001;
  VAR_4.address = (VAR_2 & ~3) + 4;
  VAR_5 |= FUNC_0(VAR_0, 6, &VAR_4);
  *VAR_3 |= ((VAR_4.data & 0xff) << 16);
  break;
 case 3:
  VAR_4.header = (VAR_1 << 6) | 0x0008;
  VAR_5 = FUNC_0(VAR_0, 6, &VAR_4);
  *VAR_3 = VAR_4.data >> 24;
  VAR_4.header = (VAR_1 << 6) | 0x0003;
  VAR_4.address = (VAR_2 & ~3) + 4;
  VAR_5 |= FUNC_0(VAR_0, 6, &VAR_4);
  *VAR_3 |= ((VAR_4.data & 0xffff) << 8);
 }

 return VAR_5;
}
