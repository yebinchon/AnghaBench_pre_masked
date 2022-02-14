
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct dvb_usb_device {struct dibusb_device_state* priv; } ;
struct dibusb_device_state {int old_toggle; int last_repeat_count; } ;
struct TYPE_5__ {int keycode; } ;


 int FUNC_0 (TYPE_1__*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int,int,...) ;
 int FUNC_2 (struct dvb_usb_device*,int*,int,int*,int,int ) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int FUNC_7(struct dvb_usb_device *VAR_6, u32 *VAR_7, int *VAR_8)
{
 u8 *VAR_9, VAR_10, VAR_11, VAR_12;
 u16 VAR_13;
 int VAR_14, VAR_15;
 struct dibusb_device_state *VAR_16 = VAR_6->priv;

 VAR_9 = FUNC_4(5, VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9[0] = VAR_0;
 VAR_9[1] = 0x35;
 VAR_15 = FUNC_2(VAR_6, VAR_9, 2, VAR_9, 5, 0);
 if (VAR_15 < 0)
  goto ret;

 *VAR_8 = VAR_4;
 switch (VAR_9[0]) {
  case 128:
   VAR_13 = ((VAR_9[1] << 8) | VAR_9[2]) >> 3;
   VAR_11 = !!(VAR_13 & 0x800);
   VAR_10 = VAR_13 & 0x3f;
   VAR_12 = (VAR_13 >> 6) & 0x1f;

   FUNC_1("raw key code 0x%02x, 0x%02x, 0x%02x to c: %02x d: %02x toggle: %d\n",
          VAR_9[1], VAR_9[2], VAR_9[3], VAR_12, VAR_10, VAR_11);

   for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_5); VAR_14++) {
    if (FUNC_6(&VAR_5[VAR_14]) == VAR_10 &&
     FUNC_5(&VAR_5[VAR_14]) == VAR_12) {

     FUNC_1("c: %x, d: %x\n", FUNC_6(&VAR_5[VAR_14]),
         FUNC_5(&VAR_5[VAR_14]));

     *VAR_7 = VAR_5[VAR_14].keycode;
     *VAR_8 = VAR_3;
     if (VAR_16->old_toggle == VAR_11) {
      if (VAR_16->last_repeat_count++ < 2)
       *VAR_8 = VAR_4;
     } else {
      VAR_16->last_repeat_count = 0;
      VAR_16->old_toggle = VAR_11;
     }
     break;
    }
   }

   break;
  case 129:
  default:
   break;
 }

ret:
 FUNC_3(VAR_9);
 return VAR_15;
}
