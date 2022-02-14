
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct usb_ftdi {int* response; int received; int* bulk_in_buffer; int bulk_in_left; int bulk_in_last; int expected; struct u132_target* target; TYPE_1__* udev; scalar_t__ ed_found; struct u132_respond* respond; int respond_head; int bulk_in_size; int bulk_in_endpointAddr; } ;
struct u132_target {int halted; int skipped; int toggle_bits; int error_count; int condition_code; } ;
struct u132_respond {int* value; int wait_completion; scalar_t__* result; } ;
typedef int diag ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 (struct usb_ftdi*,struct u132_target*,int*,int) ;
 int* FUNC_3 (struct usb_ftdi*,struct u132_target*,int,int,int,int*) ;
 int* FUNC_4 (struct usb_ftdi*,struct u132_target*,int,int,int,int*) ;
 int FUNC_5 (char*,char*,...) ;
 int FUNC_6 (TYPE_1__*,int ,int*,int ,int*,int) ;
 int FUNC_7 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_8(struct usb_ftdi *VAR_4)
{
 u8 *VAR_5 = VAR_4->response + VAR_4->received;
 int VAR_6 = 0;
 int VAR_7 = 1;
 int VAR_8 = 3;
read:{
  int VAR_9 = 0;
  int VAR_10 = FUNC_6(VAR_4->udev,
       FUNC_7(VAR_4->udev, VAR_4->bulk_in_endpointAddr),
       VAR_4->bulk_in_buffer, VAR_4->bulk_in_size,
       &VAR_9, 500);
  char VAR_11[30 *3 + 4];
  char *VAR_12 = VAR_11;
  int VAR_13 = VAR_9;
  u8 *VAR_14 = VAR_4->bulk_in_buffer;
  int VAR_15 = (sizeof(VAR_11) - 1) / 3;
  VAR_11[0] = 0;
  while (VAR_15-- > 0 && VAR_13-- > 0) {
   if (VAR_15 > 0 || VAR_13 == 0) {
    VAR_12 += FUNC_5(VAR_12, " %02X", *VAR_14++);
   } else
    VAR_12 += FUNC_5(VAR_12, " ..");
  }
  if (VAR_9 > 2) {
   VAR_4->bulk_in_left = VAR_9 - 2;
   VAR_4->bulk_in_last = 1;
   goto have;
  } else if (VAR_10 == -VAR_2) {
   if (VAR_8-- > 0) {
    FUNC_1(&VAR_4->udev->dev, "TIMED OUT with packet_bytes = %d with total %d bytes%s\n",
     VAR_9, VAR_6, VAR_11);
    goto more;
   } else if (VAR_6 > 0) {
    FUNC_1(&VAR_4->udev->dev, "ONLY %d bytes%s\n",
     VAR_6, VAR_11);
    return -VAR_1;
   } else {
    FUNC_1(&VAR_4->udev->dev, "TIMED OUT with packet_bytes = %d with total %d bytes%s\n",
     VAR_9, VAR_6, VAR_11);
    return -VAR_1;
   }
  } else if (VAR_10 == -VAR_0) {
   FUNC_1(&VAR_4->udev->dev, "error = %d with packet_bytes = %d with total %d bytes%s\n",
    VAR_10, VAR_9, VAR_6, VAR_11);
   return VAR_10;
  } else if (VAR_10) {
   FUNC_1(&VAR_4->udev->dev, "error = %d with packet_bytes = %d with total %d bytes%s\n",
    VAR_10, VAR_9, VAR_6, VAR_11);
   return VAR_10;
  } else {
   if (VAR_7-- > 0) {
    goto more;
   } else
    return 0;
  }
 }
more:{
  goto read;
 }
have:if (VAR_4->bulk_in_left > 0) {
  u8 VAR_16 = VAR_4->bulk_in_buffer[++VAR_4->bulk_in_last];
  VAR_6 += 1;
  VAR_4->bulk_in_left -= 1;
  if (VAR_4->received == 0 && VAR_16 == 0xFF) {
   goto have;
  } else
   *VAR_5++ = VAR_16;
  if (++VAR_4->received < VAR_4->expected) {
   goto have;
  } else if (VAR_4->ed_found) {
   int VAR_17 = (VAR_4->response[0] >> 5) & 0x03;
   u16 VAR_18 = (VAR_4->response[2] << 8) |
    VAR_4->response[1];
   struct u132_target *VAR_19 = &VAR_4->target[VAR_17];
   int VAR_20 = (VAR_18 >> 0) & 0x07FF;
   char VAR_21[30 *3 + 4];
   char *VAR_22 = VAR_21;
   int VAR_23 = VAR_20;
   u8 *VAR_24 = 4 + VAR_4->response;
   int VAR_25 = (sizeof(VAR_21) - 1) / 3;
   VAR_21[0] = 0;
   while (VAR_25-- > 0 && VAR_23-- > 0) {
    if (VAR_25 > 0 || VAR_23 == 0) {
     VAR_22 += FUNC_5(VAR_22, " %02X", *VAR_24++);
    } else
     VAR_22 += FUNC_5(VAR_22, " ..");
   }
   FUNC_2(VAR_4, VAR_19, 4 + VAR_4->response,
           VAR_20);
   VAR_4->received = 0;
   VAR_4->expected = 4;
   VAR_4->ed_found = 0;
   VAR_5 = VAR_4->response;
   goto have;
  } else if (VAR_4->expected == 8) {
   u8 VAR_26;
   int VAR_27 = VAR_4->respond_head++;
   struct u132_respond *VAR_28 = &VAR_4->respond[
    VAR_3 & VAR_27];
   u32 VAR_29 = VAR_4->response[7];
   VAR_29 <<= 8;
   VAR_29 |= VAR_4->response[6];
   VAR_29 <<= 8;
   VAR_29 |= VAR_4->response[5];
   VAR_29 <<= 8;
   VAR_29 |= VAR_4->response[4];
   *VAR_28->value = VAR_29;
   *VAR_28->result = 0;
   FUNC_0(&VAR_28->wait_completion);
   VAR_4->received = 0;
   VAR_4->expected = 4;
   VAR_4->ed_found = 0;
   VAR_5 = VAR_4->response;
   VAR_26 = (VAR_4->response[0] >> 0) & 0x0F;
   if (VAR_26 == 0x00) {
   } else if (VAR_26 == 0x02) {
   } else if (VAR_26 == 0x06) {
   } else if (VAR_26 == 0x0A) {
   } else
    FUNC_1(&VAR_4->udev->dev, "Uxxx unknown(%0X) value = %08X\n",
     VAR_26, VAR_29);
   goto have;
  } else {
   if ((VAR_4->response[0] & 0x80) == 0x00) {
    VAR_4->expected = 8;
    goto have;
   } else {
    int VAR_30 = (VAR_4->response[0] >> 5) & 0x03;
    int VAR_31 = (VAR_4->response[0] >> 0) & 0x03;
    u16 VAR_32 = (VAR_4->response[2] << 8) |
     VAR_4->response[1];
    struct u132_target *VAR_33 = &VAR_4->target[
     VAR_30];
    VAR_33->halted = (VAR_4->response[0] >> 3) &
     0x01;
    VAR_33->skipped = (VAR_4->response[0] >> 2) &
     0x01;
    VAR_33->toggle_bits = (VAR_4->response[3] >> 6)
     & 0x03;
    VAR_33->error_count = (VAR_4->response[3] >> 4)
     & 0x03;
    VAR_33->condition_code = (VAR_4->response[
          3] >> 0) & 0x0F;
    if ((VAR_4->response[0] & 0x10) == 0x00) {
     VAR_5 = FUNC_4(VAR_4, VAR_33,
         VAR_32, VAR_30, VAR_31,
         VAR_5);
     goto have;
    } else {
     VAR_5 = FUNC_3(VAR_4, VAR_33,
         VAR_32, VAR_30, VAR_31,
         VAR_5);
     goto have;
    }
   }
  }
 } else
  goto more;
}
