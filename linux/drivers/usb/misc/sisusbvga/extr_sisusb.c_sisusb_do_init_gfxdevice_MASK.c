
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sisusb_usb_data {int dummy; } ;
struct sisusb_packet {int header; int address; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sisusb_usb_data*,int,int*) ;
 int FUNC_1 (struct sisusb_usb_data*,int,struct sisusb_packet*,int ) ;
 int FUNC_2 (struct sisusb_usb_data*,int,int) ;

__attribute__((used)) static int FUNC_3(struct sisusb_usb_data *VAR_3)
{
 struct sisusb_packet VAR_4;
 int VAR_5;
 u32 VAR_6;


 VAR_4.header = 0x001f;
 VAR_4.address = 0x00000324;
 VAR_4.data = 0x00000004;
 VAR_5 = FUNC_1(VAR_3, 10, &VAR_4, 0);

 VAR_4.header = 0x001f;
 VAR_4.address = 0x00000364;
 VAR_4.data = 0x00000004;
 VAR_5 |= FUNC_1(VAR_3, 10, &VAR_4, 0);

 VAR_4.header = 0x001f;
 VAR_4.address = 0x00000384;
 VAR_4.data = 0x00000004;
 VAR_5 |= FUNC_1(VAR_3, 10, &VAR_4, 0);

 VAR_4.header = 0x001f;
 VAR_4.address = 0x00000100;
 VAR_4.data = 0x00000700;
 VAR_5 |= FUNC_1(VAR_3, 10, &VAR_4, 0);

 VAR_4.header = 0x000f;
 VAR_4.address = 0x00000004;
 VAR_5 |= FUNC_1(VAR_3, 6, &VAR_4, 0);
 VAR_4.data |= 0x17;
 VAR_5 |= FUNC_1(VAR_3, 10, &VAR_4, 0);


 VAR_5 |= FUNC_0(VAR_3, 0x10, &VAR_6);
 VAR_5 |= FUNC_2(VAR_3, 0x10, 0xfffffff0);
 VAR_5 |= FUNC_0(VAR_3, 0x10, &VAR_6);
 VAR_6 &= 0x0f;
 VAR_6 |= VAR_1;
 VAR_5 |= FUNC_2(VAR_3, 0x10, VAR_6);


 VAR_5 |= FUNC_0(VAR_3, 0x14, &VAR_6);
 VAR_5 |= FUNC_2(VAR_3, 0x14, 0xfffffff0);
 VAR_5 |= FUNC_0(VAR_3, 0x14, &VAR_6);
 VAR_6 &= 0x0f;
 VAR_6 |= VAR_2;
 VAR_5 |= FUNC_2(VAR_3, 0x14, VAR_6);


 VAR_5 |= FUNC_0(VAR_3, 0x18, &VAR_6);
 VAR_5 |= FUNC_2(VAR_3, 0x18, 0xfffffff0);
 VAR_5 |= FUNC_0(VAR_3, 0x18, &VAR_6);
 VAR_6 &= 0x0f;
 VAR_6 |= VAR_0;
 VAR_5 |= FUNC_2(VAR_3, 0x18, VAR_6);


 VAR_5 |= FUNC_0(VAR_3, 0x04, &VAR_6);
 VAR_6 |= 0x3;
 VAR_5 |= FUNC_2(VAR_3, 0x04, VAR_6);

 if (VAR_5 == 0) {

  VAR_4.header = 0x001f;
  VAR_4.address = 0x00000050;
  VAR_4.data = 0x000000ff;
  VAR_5 |= FUNC_1(VAR_3, 10, &VAR_4, 0);
 }

 return VAR_5;
}
