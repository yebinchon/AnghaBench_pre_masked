
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int controller; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct spi_device {int dev; int irq; int bits_per_word; int max_speed_hz; } ;
struct max3421_hcd {int rev; int hien; int* iopins; int todo; int curr_urb; scalar_t__ urb_done; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int ) ;
 struct max3421_hcd* FUNC_6 (struct usb_hcd*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct usb_hcd*) ;
 scalar_t__ FUNC_9 (struct usb_hcd*) ;
 int FUNC_10 (struct usb_hcd*) ;
 int FUNC_11 (struct usb_hcd*) ;
 int FUNC_12 (struct usb_hcd*) ;
 int FUNC_13 (int) ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;
 void* FUNC_16 (struct usb_hcd*,scalar_t__) ;
 int FUNC_17 (struct usb_hcd*,scalar_t__,int) ;
 scalar_t__ FUNC_18 (int ,int *) ;
 struct spi_device* FUNC_19 (int ) ;

__attribute__((used)) static int
FUNC_20(void *VAR_15)
{
 struct usb_hcd *VAR_16 = VAR_15;
 struct spi_device *VAR_17 = FUNC_19(VAR_16->self.controller);
 struct max3421_hcd *VAR_18 = FUNC_6(VAR_16);
 int VAR_19, VAR_20 = 1;


 FUNC_17(VAR_16, VAR_9,
  (FUNC_1(VAR_4) |
   FUNC_1(VAR_5)));

 while (!FUNC_7()) {
  VAR_18->rev = FUNC_16(VAR_16, VAR_10);
  if (VAR_18->rev == 0x12 || VAR_18->rev == 0x13)
   break;
  FUNC_3(&VAR_17->dev, "bad rev 0x%02x", VAR_18->rev);
  FUNC_13(10000);
 }
 FUNC_4(&VAR_17->dev, "rev 0x%x, SPI clk %dHz, bpw %u, irq %d\n",
   VAR_18->rev, VAR_17->max_speed_hz, VAR_17->bits_per_word,
   VAR_17->irq);

 while (!FUNC_7()) {
  if (!VAR_20) {





   FUNC_17(VAR_16, VAR_7, VAR_18->hien);

   FUNC_15(VAR_13);
   if (FUNC_18(VAR_1, &VAR_18->todo))
    FUNC_5(VAR_17->irq);
   FUNC_14();
   FUNC_2(VAR_14);
  }

  VAR_20 = 0;

  if (VAR_18->urb_done)
   VAR_20 |= FUNC_12(VAR_16);
  else if (FUNC_9(VAR_16))
   VAR_20 = 1;
  else if (!VAR_18->curr_urb)
   VAR_20 |= FUNC_11(VAR_16);

  if (FUNC_18(VAR_11, &VAR_18->todo))

   VAR_20 |= FUNC_10(VAR_16);
  if (FUNC_18(VAR_12, &VAR_18->todo)) {

   FUNC_17(VAR_16, VAR_6,
    FUNC_1(VAR_3));
   VAR_20 = 1;
  }
  if (FUNC_18(VAR_0, &VAR_18->todo))
   VAR_20 |= FUNC_8(VAR_16);
  if (FUNC_18(VAR_2, &VAR_18->todo)) {




   for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_18->iopins); ++VAR_19) {
    u8 VAR_21 = FUNC_16(VAR_16, VAR_8);

    VAR_21 = ((VAR_21 & 0xf0) |
           (VAR_18->iopins[VAR_19] & 0x0f));
    FUNC_17(VAR_16, VAR_8 + VAR_19, VAR_21);
    VAR_18->iopins[VAR_19] = VAR_21;
   }
   VAR_20 = 1;
  }
 }
 FUNC_15(VAR_14);
 FUNC_4(&VAR_17->dev, "SPI thread exiting");
 return 0;
}
