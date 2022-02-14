
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct firmware {int size; scalar_t__ data; } ;
struct dvb_usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int,char*,int,int,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int,int ) ;
 int FUNC_5 (struct dvb_usb_device*,int*,int,int*,int) ;
 int FUNC_6 (int*,int*,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct dvb_usb_device *VAR_3,
     const struct firmware *VAR_4)
{
 int VAR_5 = 0;
 u8 *VAR_6;
 u16 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 u8 VAR_12, VAR_13, VAR_14;
 u8 *VAR_15;

 VAR_12 = 0x31;
 VAR_9 = 1;

 VAR_6 = FUNC_4(128, VAR_1);
 if (!VAR_6) {
  FUNC_2("FRM Could not start Firmware Download" "(Buffer allocation failed)");

  return -VAR_0;
 }

 FUNC_2("FRM Starting Firmware Download");

 for (VAR_14 = 1; VAR_14 < 3; VAR_14++) {
  VAR_10 = (VAR_14 == 1) ? 0 : 512;
  VAR_11 = (VAR_14 == 1) ? 512 : VAR_4->size;
  for (VAR_7 = VAR_10; VAR_7 < VAR_11; VAR_7 += (VAR_12+1)) {
   VAR_15 = (u8 *)(VAR_4->data + VAR_7);
   if ((VAR_11 - VAR_7) > VAR_12) {
    VAR_6[0] = VAR_14;
    VAR_13 = VAR_12;
   } else {
    VAR_6[0] = VAR_14 | 0x80;
    VAR_13 = (u8)(VAR_11 - VAR_7)-1;
   }
   VAR_6[1] = VAR_13;
   FUNC_6(&VAR_6[2], VAR_15, VAR_13+1);
   VAR_8 = (u8) VAR_13 + 4;
   VAR_6[VAR_8-1] = FUNC_0(VAR_15, VAR_13+1);
   FUNC_1(1, "Data S=%02x:E=%02x CS= %02x", VAR_6[3],
    VAR_6[VAR_13+2], VAR_6[VAR_13+3]);
   FUNC_5(VAR_3, VAR_6, VAR_8, VAR_6, VAR_9);
   VAR_5 |= (VAR_6[0] == 0x88) ? 0 : -1;
  }
 }

 VAR_6[0] = 0x8a;
 VAR_9 = 1;
 FUNC_7(2000);
 FUNC_5(VAR_3, VAR_6, VAR_9, VAR_6, VAR_9);
 FUNC_7(400);

 if (VAR_5 < 0)
  FUNC_2("FRM Firmware Download Failed (%04x)" , VAR_5);
 else
  FUNC_2("FRM Firmware Download Completed - Resetting Device");

 FUNC_3(VAR_6);
 return VAR_2;
}
