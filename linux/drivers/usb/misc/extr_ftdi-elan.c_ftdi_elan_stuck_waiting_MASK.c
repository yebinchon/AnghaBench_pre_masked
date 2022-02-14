
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct usb_ftdi {char* bulk_in_buffer; TYPE_1__* udev; int bulk_in_size; int bulk_in_endpointAddr; } ;
typedef int diag ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (TYPE_1__*,int ,char*,int ,int*,int) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_5(struct usb_ftdi *VAR_3)
{
 int VAR_4 = 10;
 int VAR_5 = 5;
 int VAR_6 = 50;
more:{
  int VAR_7 = 0;
  int VAR_8 = FUNC_3(VAR_3->udev,
       FUNC_4(VAR_3->udev, VAR_3->bulk_in_endpointAddr),
       VAR_3->bulk_in_buffer, VAR_3->bulk_in_size,
       &VAR_7, 1000);
  if (VAR_7 > 2) {
   char VAR_9[30 *3 + 4];
   char *VAR_10 = VAR_9;
   int VAR_11 = (sizeof(VAR_9) - 1) / 3 - 1;
   char *VAR_12 = VAR_3->bulk_in_buffer;
   int VAR_13 = 0;
   VAR_9[0] = 0;
   while (VAR_7-- > 0) {
    char VAR_14 = *VAR_12++;
    if (VAR_13 < VAR_11) {
     VAR_10 += FUNC_2(VAR_10, " %02X",
           0x000000FF & VAR_14);
    } else if (VAR_13 > VAR_11) {
    } else
     VAR_10 += FUNC_2(VAR_10, " ..");
    VAR_13 += 1;
    continue;
   }
   goto more;
  } else if (VAR_7 > 1) {
   char VAR_15 = VAR_3->bulk_in_buffer[0];
   char VAR_16 = VAR_3->bulk_in_buffer[1];
   if (VAR_15 == 0x31 && VAR_16 == 0x60) {
    return 0;
   } else if (VAR_6-- > 0) {
    FUNC_1(5);
    goto more;
   } else
    return -VAR_0;
  } else if (VAR_7 > 0) {
   char VAR_17 = VAR_3->bulk_in_buffer[0];
   FUNC_0(&VAR_3->udev->dev, "only one byte flushed from FTDI = %02X\n", VAR_17);
   if (VAR_6-- > 0) {
    FUNC_1(5);
    goto more;
   } else {
    FUNC_0(&VAR_3->udev->dev, "STATUS ERROR retry limit reached\n");
    return -VAR_0;
   }
  } else if (VAR_8 == -VAR_2) {
   if (VAR_5-- > 0) {
    goto more;
   } else {
    FUNC_0(&VAR_3->udev->dev, "TIMED OUT retry limit reached\n");
    return -VAR_1;
   }
  } else if (VAR_8 == 0) {
   if (VAR_4-- > 0) {
    goto more;
   } else {
    FUNC_0(&VAR_3->udev->dev, "empty packet retry limit reached\n");
    return -VAR_1;
   }
  } else {
   FUNC_0(&VAR_3->udev->dev, "error = %d\n", VAR_8);
   return -VAR_1;
  }
 }
 return -1;
}
