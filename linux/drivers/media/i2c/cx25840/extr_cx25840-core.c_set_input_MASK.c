
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct i2c_client {int dummy; } ;
struct cx25840_state {int vbi_regs_offset; int vid_input; int aud_input; } ;
typedef enum cx25840_video_input { ____Placeholder_cx25840_video_input } cx25840_video_input ;
typedef enum cx25840_audio_input { ____Placeholder_cx25840_audio_input } cx25840_audio_input ;


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
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct i2c_client*,int,int,int) ;
 int FUNC_1 (struct i2c_client*) ;
 int VAR_14 ;
 int FUNC_2 (struct i2c_client*,int) ;
 int FUNC_3 (struct i2c_client*,int,int) ;
 int FUNC_4 (struct i2c_client*,int,int) ;
 int FUNC_5 (struct i2c_client*) ;
 int FUNC_6 (struct i2c_client*) ;
 scalar_t__ FUNC_7 (struct cx25840_state*) ;
 scalar_t__ FUNC_8 (struct cx25840_state*) ;
 scalar_t__ FUNC_9 (struct cx25840_state*) ;
 struct cx25840_state* FUNC_10 (int ) ;
 int FUNC_11 (int,int ,struct i2c_client*,char*,int,...) ;
 int FUNC_12 (struct i2c_client*,char*,int) ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_15,
       enum cx25840_video_input VAR_16,
       enum cx25840_audio_input VAR_17)
{
 struct cx25840_state *VAR_18 = FUNC_10(FUNC_5(VAR_15));
 u8 VAR_19 = (VAR_16 >= VAR_2 &&
      VAR_16 <= VAR_3);
 u8 VAR_20 = (VAR_16 & VAR_1) ==
   VAR_1;
 u8 VAR_21 = (VAR_16 & VAR_4) ==
   VAR_4;
 u8 VAR_22 = (VAR_16 & VAR_10) ==
   VAR_10;
 int VAR_23 = VAR_16 & 0xf0;
 int VAR_24 = VAR_16 & 0xf00;
 u8 VAR_25;
 u32 VAR_26;

 FUNC_11(1, VAR_14, VAR_15,
  "decoder set video input %d, audio input %d\n",
  VAR_16, VAR_17);

 if (VAR_16 >= VAR_11) {
  FUNC_11(1, VAR_14, VAR_15, "vid_input 0x%x\n",
   VAR_16);
  VAR_25 = VAR_16 & 0xff;
  VAR_19 = !VAR_20 &&
          ((VAR_16 & VAR_10) != VAR_10);

  FUNC_11(1, VAR_14, VAR_15, "mux cfg 0x%x comp=%d\n",
   VAR_25, VAR_19);
 } else if (VAR_19) {
  VAR_25 = 0xf0 + (VAR_16 - VAR_2);
 } else {
  if ((VAR_16 & ~0xff0) ||
      VAR_23 < VAR_8 ||
      VAR_23 > VAR_9 ||
      VAR_24 < VAR_5 ||
      VAR_24 > VAR_7) {
   FUNC_12(VAR_15, "0x%04x is not a valid video input!\n",
    VAR_16);
   return -VAR_12;
  }
  VAR_25 = 0xf0 + ((VAR_23 - VAR_8) >> 4);
  if (VAR_24 >= VAR_6) {
   VAR_25 &= 0x3f;
   VAR_25 |= (VAR_24 - VAR_6) >> 2;
  } else {
   VAR_25 &= 0xcf;
   VAR_25 |= (VAR_24 - VAR_5) >> 4;
  }
 }





 if (!FUNC_9(VAR_18) && !FUNC_7(VAR_18)) {
  switch (VAR_17) {
  case 128:

   break;
  case 133:
   VAR_25 &= ~0x30;
   break;
  case 132:
   VAR_25 &= ~0x30;
   VAR_25 |= 0x10;
   break;
  case 131:
   VAR_25 &= ~0x30;
   VAR_25 |= 0x20;
   break;
  case 130:
   VAR_25 &= ~0xc0;
   break;
  case 129:
   VAR_25 &= ~0xc0;
   VAR_25 |= 0x40;
   break;
  default:
   FUNC_12(VAR_15, "0x%04x is not a valid audio input!\n",
    VAR_17);
   return -VAR_12;
  }
 }

 FUNC_3(VAR_15, 0x103, VAR_25);


 if (VAR_20)
  FUNC_0(VAR_15, 0x401, ~0x6, 0x6);
 else
  FUNC_0(VAR_15, 0x401, ~0x6, VAR_19 ? 0 : 0x02);

 if (FUNC_9(VAR_18)) {

  if (VAR_21) {
   FUNC_0(VAR_15, 0x102, ~0x80, 0x80);


   FUNC_4(VAR_15, 0x31c, 0xc2262600);
   FUNC_4(VAR_15, 0x320, 0xc2262600);





   FUNC_4(VAR_15, 0x318, 0xda262600);
   FUNC_4(VAR_15, 0x33c, 0x2a24c800);
   FUNC_4(VAR_15, 0x104, 0x0704dd00);
  } else {
   FUNC_4(VAR_15, 0x300, 0x015c28f5);

   FUNC_0(VAR_15, 0x102, ~0x80, 0);
   FUNC_4(VAR_15, 0x340, 0xdf7df83);
   FUNC_4(VAR_15, 0x104, 0x0704dd80);
   FUNC_4(VAR_15, 0x314, 0x22400600);
   FUNC_4(VAR_15, 0x318, 0x40002600);
   FUNC_4(VAR_15, 0x324, 0x40002600);
   FUNC_4(VAR_15, 0x32c, 0x0250e620);
   FUNC_4(VAR_15, 0x39c, 0x01FF0B00);

   FUNC_4(VAR_15, 0x410, 0xffff0dbf);
   FUNC_4(VAR_15, 0x414, 0x00137d03);

   FUNC_4(VAR_15, VAR_18->vbi_regs_offset + 0x42c,
           0x42600000);
   FUNC_4(VAR_15, VAR_18->vbi_regs_offset + 0x430,
           0x0000039b);
   FUNC_4(VAR_15, VAR_18->vbi_regs_offset + 0x438,
           0x00000000);

   FUNC_4(VAR_15, VAR_18->vbi_regs_offset + 0x440,
           0xF8E3E824);
   FUNC_4(VAR_15, VAR_18->vbi_regs_offset + 0x444,
           0x401040dc);
   FUNC_4(VAR_15, VAR_18->vbi_regs_offset + 0x448,
           0xcd3f02a0);
   FUNC_4(VAR_15, VAR_18->vbi_regs_offset + 0x44c,
           0x161f1000);
   FUNC_4(VAR_15, VAR_18->vbi_regs_offset + 0x450,
           0x00000802);

   FUNC_4(VAR_15, 0x91c, 0x01000000);
   FUNC_4(VAR_15, 0x8e0, 0x03063870);
   FUNC_4(VAR_15, 0x8d4, 0x7FFF0024);
   FUNC_4(VAR_15, 0x8d0, 0x00063073);

   FUNC_4(VAR_15, 0x8c8, 0x00010000);
   FUNC_4(VAR_15, 0x8cc, 0x00080023);


   FUNC_4(VAR_15, 0x33c, 0x2a04c800);
  }


  FUNC_4(VAR_15, 0x398, 0);
 }

 if (!FUNC_9(VAR_18) && !FUNC_7(VAR_18)) {

  FUNC_0(VAR_15, 0x102, ~0x2, (VAR_25 & 0x80) == 0 ? 2 : 0);

  if ((VAR_25 & 0xc0) != 0xc0 && (VAR_25 & 0x30) != 0x30)
   FUNC_0(VAR_15, 0x102, ~0x4, 4);
  else
   FUNC_0(VAR_15, 0x102, ~0x4, 0);
 } else {

  FUNC_0(VAR_15, 0x102, ~0x4, VAR_20 ? 0x4 : 0x0);
  if (VAR_19) {

   FUNC_0(VAR_15, 0x102, ~0x2, 0);
  } else if (!VAR_20) {

   if (VAR_24 >= VAR_6) {

    FUNC_0(VAR_15, 0x102, ~0x2, 2);
   } else {

    FUNC_0(VAR_15, 0x102, ~0x2, 0);
   }
  }


  if (FUNC_9(VAR_18) && VAR_22) {


   FUNC_0(VAR_15, 0x102, ~0x2, 0x2);

   VAR_26 = FUNC_2(VAR_15, (0x400));
   VAR_26 &= 0xFFFFF9FF;


   VAR_26 |= 0x00000200;
   VAR_26 &= ~0x2000;
   FUNC_4(VAR_15, (0x400), VAR_26);

   VAR_26 = FUNC_2(VAR_15, (0x104));


   VAR_26 |= 0x00001000;
   VAR_26 &= 0xfffffe7f;




   FUNC_4(VAR_15, (0x104), VAR_26);
  } else {
   FUNC_0(VAR_15, 0x102, ~0x2, 0);
  }
 }

 VAR_18->vid_input = VAR_16;
 VAR_18->aud_input = VAR_17;
 FUNC_1(VAR_15);
 FUNC_6(VAR_15);

 if (FUNC_9(VAR_18)) {

  FUNC_3(VAR_15, 0x124, 0x03);


  FUNC_3(VAR_15, 0x144, 0x05);


  FUNC_3(VAR_15, 0x914, 0xa0);





  FUNC_3(VAR_15, 0x918, 0xa0);
  FUNC_3(VAR_15, 0x919, 0x01);
 } else if (FUNC_7(VAR_18)) {

  FUNC_3(VAR_15, 0x124, 0x03);


  FUNC_3(VAR_15, 0x914, 0xa0);





  FUNC_3(VAR_15, 0x918, 0xa0);
  FUNC_3(VAR_15, 0x919, 0x01);
 }

 if (FUNC_9(VAR_18) &&
     ((VAR_17 == 130) || (VAR_17 == 131))) {

  FUNC_4(VAR_15, 0x910, 0);
  FUNC_4(VAR_15, 0x8d0, 0x63073);
 } else if (FUNC_9(VAR_18) && (VAR_17 == 129)) {

  FUNC_4(VAR_15, 0x910, 0x12b000c9);
  FUNC_4(VAR_15, 0x8d0, 0x1f063870);
 }

 if (FUNC_8(VAR_18)) {
  FUNC_4(VAR_15, 0x124, 0x100);

  if (!VAR_21) {




   FUNC_0(VAR_15, 0x803, ~0x10, 0x00);
  }
 }

 return 0;
}
