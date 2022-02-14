
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dvb_usb_device {int data_mutex; struct af9005_device_state* priv; } ;
struct af9005_device_state {int* data; int sequence; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct dvb_usb_device*,int*,int,int*,int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_device *VAR_12, u16 VAR_13,
         int VAR_14, int VAR_15, u8 * VAR_16, int VAR_17)
{
 struct af9005_device_state *VAR_18 = VAR_12->priv;
 u8 VAR_19, VAR_20;
 int VAR_21, VAR_22;

 if (VAR_17 < 1) {
  FUNC_1("generic read/write, less than 1 byte. Makes no sense.");
  return -VAR_10;
 }
 if (VAR_17 > 8) {
  FUNC_1("generic read/write, more than 8 bytes. Not supported.");
  return -VAR_10;
 }

 FUNC_2(&VAR_12->data_mutex);
 VAR_18->data[0] = 14;
 VAR_18->data[1] = 0;

 VAR_18->data[2] = VAR_7;
 VAR_18->data[3] = 12;

 VAR_18->data[4] = VAR_20 = VAR_18->sequence++;

 VAR_18->data[5] = (u8) (VAR_13 >> 8);
 VAR_18->data[6] = (u8) (VAR_13 & 0xff);

 if (VAR_15 == VAR_6) {
  VAR_19 = VAR_2;
 } else {
  VAR_19 = VAR_4;
 }

 if (VAR_17 > 1)
  VAR_19 |=
      VAR_1 | VAR_0 | (VAR_17 - 1) << 3;
 VAR_19 |= VAR_14;
 if (VAR_14 == VAR_5)
  for (VAR_21 = 0; VAR_21 < VAR_17; VAR_21++)
   VAR_18->data[8 + VAR_21] = VAR_16[VAR_21];
 else if (VAR_15 == VAR_9)

  VAR_18->data[8] = VAR_16[0];
 VAR_18->data[7] = VAR_19;

 VAR_22 = FUNC_0(VAR_12, VAR_18->data, 16, VAR_18->data, 17, 0);
 if (VAR_22)
  goto ret;


 if (VAR_18->data[2] != VAR_8) {
  FUNC_1("generic read/write, wrong reply code.");
  VAR_22 = -VAR_11;
  goto ret;
 }
 if (VAR_18->data[3] != 0x0d) {
  FUNC_1("generic read/write, wrong length in reply.");
  VAR_22 = -VAR_11;
  goto ret;
 }
 if (VAR_18->data[4] != VAR_20) {
  FUNC_1("generic read/write, wrong sequence in reply.");
  VAR_22 = -VAR_11;
  goto ret;
 }







 if (VAR_18->data[16] != 0x01) {
  FUNC_1("generic read/write wrong status code in reply.");
  VAR_22 = -VAR_11;
  goto ret;
 }

 if (VAR_14 == VAR_3)
  for (VAR_21 = 0; VAR_21 < VAR_17; VAR_21++)
   VAR_16[VAR_21] = VAR_18->data[8 + VAR_21];

ret:
 FUNC_3(&VAR_12->data_mutex);
 return VAR_22;

}
