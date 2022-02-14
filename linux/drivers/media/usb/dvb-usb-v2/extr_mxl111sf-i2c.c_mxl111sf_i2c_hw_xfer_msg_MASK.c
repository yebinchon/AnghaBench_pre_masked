
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mxl111sf_state {int dummy; } ;
struct i2c_msg {int addr; int flags; int len; int* buf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct mxl111sf_state*) ;
 int FUNC_1 (struct mxl111sf_state*,int ,int*,int*) ;
 int FUNC_2 (struct mxl111sf_state*,int,int*) ;
 int FUNC_3 (struct mxl111sf_state*,int ,int*) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int FUNC_5(struct mxl111sf_state *VAR_10,
        struct i2c_msg *VAR_11)
{
 int VAR_12, VAR_13, VAR_14 = 0;
 u16 VAR_15 = 0;
 u8 VAR_16[26];
 u8 VAR_17[24];
 u16 VAR_18;
 u16 VAR_19;
 u8 VAR_20[8];
 u8 VAR_21;
 u8 VAR_22[26];

 FUNC_4("addr: 0x%02x, read buff len: %d, write buff len: %d",
  VAR_11->addr, (VAR_11->flags & VAR_5) ? VAR_11->len : 0,
  (!(VAR_11->flags & VAR_5)) ? VAR_11->len : 0);

 for (VAR_15 = 0; VAR_15 < 26; VAR_15++)
  VAR_16[VAR_15] = VAR_7;


 VAR_16[0] = VAR_9;
 VAR_16[1] = 0x00;


 VAR_16[2] = VAR_4;
 VAR_16[3] = 0x80;
 VAR_16[4] = 0x00;


 VAR_16[5] = VAR_4;
 VAR_16[6] = 0x81;
 VAR_16[7] = 0x00;


 VAR_16[8] = 0x14;
 VAR_16[9] = 0xff;
 VAR_16[10] = 0x00;






 VAR_16[11] = 0x24;
 VAR_16[12] = 0xF7;
 VAR_16[13] = 0x00;

 VAR_14 = FUNC_3(VAR_10, 0, VAR_16);


 if (!(VAR_11->flags & VAR_5) && (VAR_11->len > 0)) {
  FUNC_4("%d\t%02x", VAR_11->len, VAR_11->buf[0]);


  VAR_16[2] = VAR_2;
  VAR_16[3] = 0x5E;
  VAR_16[4] = (VAR_1) ? 0x03 : 0x0D;


  VAR_16[5] = VAR_6;
  VAR_16[6] = (VAR_11->addr);
  VAR_16[7] = 0x00;
  VAR_16[8] = VAR_7;
  VAR_14 = FUNC_3(VAR_10, 0, VAR_16);


  if (FUNC_0(VAR_10) == 1) {
   FUNC_4("NACK writing slave address %02x",
    VAR_11->addr);

   VAR_16[2] = VAR_2;
   VAR_16[3] = 0x4E;
   VAR_16[4] = (VAR_1) ? 0x03 : 0x0D;
   VAR_14 = -VAR_0;
   goto exit;
  }




  VAR_18 = (VAR_11->len / 8);
  VAR_19 = (VAR_11->len % 8);

  FUNC_4("block_len %d, left_over_len %d",
   VAR_18, VAR_19);

  for (VAR_15 = 0; VAR_15 < VAR_18; VAR_15++) {
   for (VAR_12 = 0; VAR_12 < 8; VAR_12++) {

    VAR_16[2+(VAR_12*3)] = VAR_3;
    VAR_16[3+(VAR_12*3)] = VAR_11->buf[(VAR_15*8)+VAR_12];
    VAR_16[4+(VAR_12*3)] = 0x00;
   }

   VAR_14 = FUNC_3(VAR_10, 0, VAR_16);


   if (FUNC_0(VAR_10) == 1) {
    FUNC_4("NACK writing slave address %02x",
     VAR_11->addr);


    VAR_16[2] = VAR_2;
    VAR_16[3] = 0x4E;
    VAR_16[4] = (VAR_1) ? 0x03 : 0x0D;
    VAR_14 = -VAR_0;
    goto exit;
   }

  }

  if (VAR_19) {
   for (VAR_13 = 0; VAR_13 < 26; VAR_13++)
    VAR_16[VAR_13] = VAR_7;

   VAR_16[0] = 0x99;
   VAR_16[1] = 0x00;

   for (VAR_12 = 0; VAR_12 < VAR_19; VAR_12++) {
    VAR_16[2+(VAR_12*3)] = VAR_3;
    VAR_16[3+(VAR_12*3)] = VAR_11->buf[(VAR_15*8)+VAR_12];
    FUNC_4("index = %d %d data %d",
     VAR_15, VAR_12, VAR_11->buf[(VAR_15*8)+VAR_12]);
    VAR_16[4+(VAR_12*3)] = 0x00;
   }
   VAR_14 = FUNC_3(VAR_10, 0, VAR_16);


   if (FUNC_0(VAR_10) == 1) {
    FUNC_4("NACK writing slave address %02x",
     VAR_11->addr);


    VAR_16[2] = VAR_2;
    VAR_16[3] = 0x4E;
    VAR_16[4] = (VAR_1) ? 0x03 : 0x0D;
    VAR_14 = -VAR_0;
    goto exit;
   }

  }


  VAR_16[2] = VAR_2;
  VAR_16[3] = 0x4E;
  VAR_16[4] = (VAR_1) ? 0x03 : 0x0D;

 }


 if ((VAR_11->flags & VAR_5) && (VAR_11->len > 0)) {
  FUNC_4("read buf len %d", VAR_11->len);



  VAR_16[2] = VAR_2;
  VAR_16[3] = 0xDF;
  VAR_16[4] = (VAR_1) ? 0x03 : 0x0D;


  VAR_16[5] = 0x14;
  VAR_16[6] = (VAR_11->len & 0xFF);
  VAR_16[7] = 0;


  VAR_16[8] = VAR_6;
  VAR_16[9] = VAR_11->addr;
  VAR_16[10] = 0x00;
  VAR_16[11] = VAR_7;
  VAR_14 = FUNC_3(VAR_10, 0, VAR_16);


  if (FUNC_0(VAR_10) == 1) {
   FUNC_4("NACK reading slave address %02x",
    VAR_11->addr);


   VAR_16[2] = VAR_2;
   VAR_16[3] = 0xC7;
   VAR_16[4] = (VAR_1) ? 0x03 : 0x0D;
   VAR_14 = -VAR_0;
   goto exit;
  }




  VAR_18 = ((VAR_11->len) / 8);
  VAR_19 = ((VAR_11->len) % 8);
  VAR_15 = 0;

  FUNC_4("block_len %d, left_over_len %d",
   VAR_18, VAR_19);


  VAR_16[0] = VAR_8;
  VAR_16[1] = 0x00;

  for (VAR_15 = 0; VAR_15 < VAR_18; VAR_15++) {

   for (VAR_12 = 0; VAR_12 < 8; VAR_12++) {
    VAR_16[2+(VAR_12*3)] = VAR_3;
    VAR_16[3+(VAR_12*3)] = 0x00;
    VAR_16[4+(VAR_12*3)] = 0x00;
   }

   VAR_14 = FUNC_1(VAR_10, 0, VAR_16, VAR_17);


   if (FUNC_0(VAR_10) == 1) {
    FUNC_4("NACK reading slave address %02x",
     VAR_11->addr);


    VAR_16[2] = VAR_2;
    VAR_16[3] = 0xC7;
    VAR_16[4] = (VAR_1) ? 0x03 : 0x0D;
    VAR_14 = -VAR_0;
    goto exit;
   }


   for (VAR_12 = 0; VAR_12 < 8; VAR_12++) {
    VAR_20[VAR_12] = VAR_17[(VAR_12*3)+2];

    if (VAR_20[VAR_12] == 0x04) {
     if (VAR_12 < 7) {
      FUNC_4("i2c fifo empty! @ %d",
       VAR_12);
      VAR_11->buf[(VAR_15*8)+VAR_12] =
       VAR_17[(VAR_12*3)+1];

      VAR_21 =
       FUNC_2(
        VAR_10, 8-(VAR_12+1),
        VAR_22);
      if (VAR_21 == 1) {
       for (VAR_13 = 0;
            VAR_13 < 8-(VAR_12+1);
            VAR_13++) {

     VAR_11->buf[(VAR_15*8)+(VAR_13+VAR_12+1)] =
      VAR_22[VAR_13];
     FUNC_4("read data: %02x\t %02x",
      VAR_11->buf[(VAR_15*8)+(VAR_13+VAR_12)],
      (VAR_15*8)+(VAR_13+VAR_12));
     FUNC_4("read data: %02x\t %02x",
      VAR_11->buf[(VAR_15*8)+(VAR_13+VAR_12+1)],
      VAR_22[VAR_13]);

       }
       goto stop_copy;
      } else {
       FUNC_4("readagain ERROR!");
      }
     } else {
      VAR_11->buf[(VAR_15*8)+VAR_12] =
       VAR_17[(VAR_12*3)+1];
     }
    } else {
     VAR_11->buf[(VAR_15*8)+VAR_12] =
      VAR_17[(VAR_12*3)+1];
    }
   }
stop_copy:
   ;

  }

  if (VAR_19) {
   for (VAR_13 = 0; VAR_13 < 26; VAR_13++)
    VAR_16[VAR_13] = VAR_7;

   VAR_16[0] = 0xDD;
   VAR_16[1] = 0x00;

   for (VAR_12 = 0; VAR_12 < VAR_19; VAR_12++) {
    VAR_16[2+(VAR_12*3)] = VAR_3;
    VAR_16[3+(VAR_12*3)] = 0x00;
    VAR_16[4+(VAR_12*3)] = 0x00;
   }
   VAR_14 = FUNC_1(VAR_10, 0, VAR_16,
          VAR_17);


   if (FUNC_0(VAR_10) == 1) {
    FUNC_4("NACK reading slave address %02x",
     VAR_11->addr);


    VAR_16[2] = VAR_2;
    VAR_16[3] = 0xC7;
    VAR_16[4] = (VAR_1) ? 0x03 : 0x0D;
    VAR_14 = -VAR_0;
    goto exit;
   }

   for (VAR_12 = 0; VAR_12 < VAR_19; VAR_12++) {
    VAR_11->buf[(VAR_18*8)+VAR_12] =
     VAR_17[(VAR_12*3)+1];
    FUNC_4("read data: %02x\t %02x",
     VAR_17[(VAR_12*3)+1],
     VAR_17[(VAR_12*3)+2]);
   }
  }



  VAR_16[0] = VAR_9;
  VAR_16[1] = 0x00;


  VAR_16[2] = VAR_2;
  VAR_16[3] = 0x17;
  VAR_16[4] = (VAR_1) ? 0x03 : 0x0D;

  VAR_16[5] = VAR_7;
  VAR_14 = FUNC_3(VAR_10, 0, VAR_16);


  VAR_16[2] = VAR_2;
  VAR_16[3] = 0xC7;
  VAR_16[4] = (VAR_1) ? 0x03 : 0x0D;

 }
exit:

 VAR_16[0] = VAR_9;
 VAR_16[1] = 0x00;


 VAR_16[5] = VAR_7;
 FUNC_3(VAR_10, 0, VAR_16);


 VAR_16[2] = VAR_2;
 VAR_16[3] = 0xDF;
 VAR_16[4] = 0x03;


 VAR_16[5] = VAR_4;
 VAR_16[6] = 0x00;
 VAR_16[7] = 0x00;


 VAR_16[8] = VAR_7;
 FUNC_3(VAR_10, 0, VAR_16);


 VAR_16[2] = VAR_4;
 VAR_16[3] = 0x81;
 VAR_16[4] = 0x00;


 VAR_16[5] = VAR_4;
 VAR_16[6] = 0x00;
 VAR_16[7] = 0x00;


 VAR_16[8] = VAR_4;
 VAR_16[9] = 0x00;
 VAR_16[10] = 0x00;

 VAR_16[11] = VAR_7;
 FUNC_3(VAR_10, 0, VAR_16);

 return VAR_14;
}
