
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imon_context {int display_type; int product; int usb_tx_buf; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,unsigned char*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct imon_context*) ;

__attribute__((used)) static int FUNC_3(struct imon_context *VAR_2,
          unsigned int VAR_3, unsigned int VAR_4,
          unsigned int VAR_5, unsigned int VAR_6,
          unsigned int VAR_7, unsigned int VAR_8,
          unsigned int VAR_9)
{
 unsigned char VAR_10[VAR_1][8];
 int VAR_11 = 0;
 int VAR_12;

 if (!VAR_2) {
  FUNC_1("no context for device\n");
  return -VAR_0;
 }

 switch (VAR_2->display_type) {
 case 129:
  VAR_10[0][0] = 0x80;
  VAR_10[0][1] = VAR_3;
  VAR_10[0][2] = VAR_4-1;
  VAR_10[0][3] = VAR_5;
  VAR_10[0][4] = VAR_7;
  VAR_10[0][5] = VAR_8;
  VAR_10[0][6] = VAR_9;

  VAR_10[1][0] = 0x80;
  VAR_10[1][1] = 0;
  VAR_10[1][2] = 0;
  VAR_10[1][3] = 0;
  VAR_10[1][4] = 0;
  VAR_10[1][5] = 0;
  VAR_10[1][6] = 0;

  if (VAR_2->product == 0xffdc) {
   VAR_10[0][7] = 0x50;
   VAR_10[1][7] = 0x51;
  } else {
   VAR_10[0][7] = 0x88;
   VAR_10[1][7] = 0x8a;
  }

  break;

 case 128:
  VAR_10[0][0] = VAR_3;
  VAR_10[0][1] = VAR_4-1;
  VAR_10[0][2] = VAR_5;
  VAR_10[0][3] = VAR_6;
  VAR_10[0][4] = VAR_7;
  VAR_10[0][5] = VAR_8;
  VAR_10[0][6] = VAR_9;
  VAR_10[0][7] = 0x40;

  VAR_10[1][0] = 0;
  VAR_10[1][1] = 0;
  VAR_10[1][2] = 1;
  VAR_10[1][3] = 0;
  VAR_10[1][4] = 0;
  VAR_10[1][5] = 0;
  VAR_10[1][6] = 0;
  VAR_10[1][7] = 0x42;

  break;

 default:
  return -VAR_0;
 }

 for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
  FUNC_0(VAR_2->usb_tx_buf, VAR_10[VAR_12], 8);
  VAR_11 = FUNC_2(VAR_2);
  if (VAR_11) {
   FUNC_1("send_packet failed for packet %d\n", VAR_12);
   break;
  }
 }

 return VAR_11;
}
