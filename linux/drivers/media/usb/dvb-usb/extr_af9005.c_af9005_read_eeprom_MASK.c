
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct dvb_usb_device {int data_mutex; struct af9005_device_state* priv; } ;
struct af9005_device_state {int* data; int sequence; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_usb_device*,int*,int,int*,int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct dvb_usb_device *VAR_1, u8 VAR_2, u8 * VAR_3,
         int VAR_4)
{
 struct af9005_device_state *VAR_5 = VAR_1->priv;
 u8 VAR_6;
 int VAR_7, VAR_8;

 FUNC_3(&VAR_1->data_mutex);

 FUNC_2(VAR_5->data, 0, sizeof(VAR_5->data));

 VAR_5->data[0] = 14;
 VAR_5->data[1] = 0;

 VAR_5->data[2] = 0x2a;

 VAR_5->data[3] = 12;

 VAR_5->data[4] = VAR_6 = VAR_5->sequence++;

 VAR_5->data[5] = 0;

 VAR_5->data[6] = VAR_4;
 VAR_5->data[7] = VAR_2;
 VAR_7 = FUNC_0(VAR_1, VAR_5->data, 16, VAR_5->data, 14, 0);
 if (VAR_5->data[2] != 0x2b) {
  FUNC_1("Read eeprom, invalid reply code");
  VAR_7 = -VAR_0;
 } else if (VAR_5->data[3] != 10) {
  FUNC_1("Read eeprom, invalid reply length");
  VAR_7 = -VAR_0;
 } else if (VAR_5->data[4] != VAR_6) {
  FUNC_1("Read eeprom, wrong sequence in reply ");
  VAR_7 = -VAR_0;
 } else if (VAR_5->data[5] != 1) {
  FUNC_1("Read eeprom, wrong status in reply ");
  VAR_7 = -VAR_0;
 }

 if (!VAR_7) {
  for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
   VAR_3[VAR_8] = VAR_5->data[6 + VAR_8];
 }
 FUNC_4(&VAR_1->data_mutex);

 return VAR_7;
}
