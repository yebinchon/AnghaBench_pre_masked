
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct dvb_usb_device {scalar_t__ last_event; } ;
struct TYPE_4__ {int keycode; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;

int FUNC_4(struct dvb_usb_device *VAR_5, u8 * VAR_6, int VAR_7, u32 * VAR_8,
       int *VAR_9)
{
 u16 VAR_10, VAR_11;
 u32 VAR_12;
 u8 VAR_13, VAR_14, VAR_15;
 int VAR_16;

 if (VAR_7 >= 6) {
  VAR_10 = (u16) (VAR_6[0] << 8) + VAR_6[1];
  VAR_11 = (u16) (VAR_6[2] << 8) + VAR_6[3];
  if (VAR_11 * 3 < VAR_10) {
   for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_4); VAR_16++) {
    if (VAR_5->last_event == VAR_4[VAR_16]) {
     *VAR_9 = VAR_1;
     *VAR_8 = VAR_5->last_event;
     FUNC_1("repeat key, event %x\n",
         *VAR_8);
     return 0;
    }
   }
   FUNC_1("repeated key ignored (non repeatable)\n");
   return 0;
  } else if (VAR_7 >= 33 * 4) {
   VAR_12 = 0;
   for (VAR_16 = 4; VAR_16 < 4 + 32 * 4; VAR_16 += 4) {
    VAR_12 <<= 1;
    VAR_10 = (u16) (VAR_6[VAR_16] << 8) + VAR_6[VAR_16 + 1];
    VAR_10 >>= 1;
    VAR_11 = (u16) (VAR_6[VAR_16 + 2] << 8) + VAR_6[VAR_16 + 3];
    VAR_11 >>= 1;
    if (VAR_10 * 2 > VAR_11)
     VAR_12 += 1;
   }
   FUNC_1("key pressed, raw value %x\n", VAR_12);
   if ((VAR_12 & 0xff000000) != 0xfe000000) {
    FUNC_1
        ("doesn't start with 0xfe, ignored\n");
    return 0;
   }
   VAR_13 = (VAR_12 >> 16) & 0xff;
   VAR_14 = (VAR_12 >> 8) & 0xff;
   VAR_15 = (~VAR_12) & 0xff;
   if (VAR_14 != VAR_15) {
    FUNC_1("code != inverted code\n");
    return 0;
   }
   for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++) {
    if (FUNC_2(&VAR_2[VAR_16]) == VAR_13
        && FUNC_3(&VAR_2[VAR_16]) == VAR_14) {
     *VAR_8 = VAR_2[VAR_16].keycode;
     *VAR_9 = VAR_0;
     FUNC_1
         ("key pressed, event %x\n", *VAR_8);
     return 0;
    }
   }
   FUNC_1("not found in table\n");
  }
 }
 return 0;
}
