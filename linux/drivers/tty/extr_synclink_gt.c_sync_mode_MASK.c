
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; int encoding; int crc_type; int preamble; int preamble_length; int flags; int clock_speed; scalar_t__ loopback; } ;
struct slgt_info {int if_mode; TYPE_1__ params; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short VAR_8 ;
 unsigned short VAR_9 ;
 unsigned short VAR_10 ;
 unsigned short VAR_11 ;
 unsigned short VAR_12 ;
 unsigned short VAR_13 ;
 unsigned short VAR_14 ;
 unsigned short VAR_15 ;
 int VAR_16 ;


 int VAR_17 ;







 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;






 int VAR_26 ;


 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;




 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_0 (struct slgt_info*) ;
 int FUNC_1 (struct slgt_info*) ;
 unsigned short FUNC_2 (struct slgt_info*,int ) ;
 int FUNC_3 (struct slgt_info*) ;
 int FUNC_4 (struct slgt_info*,int) ;
 int FUNC_5 (struct slgt_info*,int) ;
 int FUNC_6 (struct slgt_info*) ;
 int FUNC_7 (struct slgt_info*) ;
 int FUNC_8 (struct slgt_info*,int ,unsigned short) ;
 int FUNC_9 (struct slgt_info*,int ,unsigned char) ;

__attribute__((used)) static void FUNC_10(struct slgt_info *VAR_34)
{
 unsigned short VAR_35;

 FUNC_5(VAR_34, VAR_27 | VAR_28);
 FUNC_7(VAR_34);
 FUNC_3(VAR_34);
 VAR_35 = VAR_8;

 switch(VAR_34->params.mode) {
 case 128:
  VAR_35 |= VAR_7 + VAR_5;
  break;
 case 130: VAR_35 |= VAR_6 + VAR_5; break;
 case 131: VAR_35 |= VAR_7; break;
 case 129: VAR_35 |= VAR_5; break;
 }
 if (VAR_34->if_mode & VAR_29)
  VAR_35 |= VAR_13;

 switch(VAR_34->params.encoding)
 {
 case 142: VAR_35 |= VAR_2; break;
 case 140: VAR_35 |= VAR_3; break;
 case 141: VAR_35 |= VAR_3 + VAR_2; break;
 case 145: VAR_35 |= VAR_4; break;
 case 144: VAR_35 |= VAR_4 + VAR_2; break;
 case 146: VAR_35 |= VAR_4 + VAR_3; break;
 case 143: VAR_35 |= VAR_4 + VAR_3 + VAR_2; break;
 }

 switch (VAR_34->params.crc_type & VAR_17)
 {
 case 148: VAR_35 |= VAR_15; break;
 case 147: VAR_35 |= VAR_15 + VAR_14; break;
 }

 if (VAR_34->params.preamble != VAR_26)
  VAR_35 |= VAR_12;

 switch (VAR_34->params.preamble_length)
 {
 case 139: VAR_35 |= VAR_11; break;
 case 138: VAR_35 |= VAR_10; break;
 case 137: VAR_35 |= VAR_11 + VAR_10; break;
 }

 if (VAR_34->params.flags & VAR_18)
  VAR_35 |= VAR_0;

 FUNC_8(VAR_34, VAR_32, VAR_35);



 switch (VAR_34->params.preamble)
 {
 case 134: VAR_35 = 0x7e; break;
 case 133: VAR_35 = 0xff; break;
 case 132: VAR_35 = 0x00; break;
 case 135: VAR_35 = 0x55; break;
 case 136: VAR_35 = 0xaa; break;
 default: VAR_35 = 0x7e; break;
 }
 FUNC_9(VAR_34, VAR_33, (unsigned char)VAR_35);
 VAR_35 = 0;

 switch(VAR_34->params.mode) {
 case 128:
  VAR_35 |= VAR_7 + VAR_5;
  break;
 case 130: VAR_35 |= VAR_6 + VAR_5; break;
 case 131: VAR_35 |= VAR_7; break;
 case 129: VAR_35 |= VAR_5; break;
 }

 switch(VAR_34->params.encoding)
 {
 case 142: VAR_35 |= VAR_2; break;
 case 140: VAR_35 |= VAR_3; break;
 case 141: VAR_35 |= VAR_3 + VAR_2; break;
 case 145: VAR_35 |= VAR_4; break;
 case 144: VAR_35 |= VAR_4 + VAR_2; break;
 case 146: VAR_35 |= VAR_4 + VAR_3; break;
 case 143: VAR_35 |= VAR_4 + VAR_3 + VAR_2; break;
 }

 switch (VAR_34->params.crc_type & VAR_17)
 {
 case 148: VAR_35 |= VAR_15; break;
 case 147: VAR_35 |= VAR_15 + VAR_14; break;
 }

 if (VAR_34->params.flags & VAR_19)
  VAR_35 |= VAR_0;

 FUNC_8(VAR_34, VAR_30, VAR_35);
 VAR_35 = 0;

 if (VAR_34->params.flags & VAR_23)
 {



  if (VAR_34->params.flags & VAR_21)
   VAR_35 |= VAR_12 + VAR_11;
  else
   VAR_35 |= VAR_12;
 }
 else if (VAR_34->params.flags & VAR_24)
  VAR_35 |= VAR_13;
 else if (VAR_34->params.flags & VAR_25)
  VAR_35 |= VAR_11;

 if (VAR_34->params.flags & VAR_20)
  VAR_35 |= VAR_9;
 else if (VAR_34->params.flags & VAR_21)
  VAR_35 |= VAR_10;
 else if (VAR_34->params.flags & VAR_22)
  VAR_35 |= VAR_8;

 if (VAR_34->params.clock_speed)
  VAR_35 |= VAR_1 + VAR_0;

 FUNC_9(VAR_34, VAR_16, (unsigned char)VAR_35);

 if (VAR_34->params.flags & (VAR_24 + VAR_21))
 {

  switch(VAR_34->params.encoding)
  {
  case 145:
  case 144:
   VAR_35 = VAR_13; break;
  case 146:
  case 143:
   VAR_35 = VAR_13 + VAR_12; break;
  default: VAR_35 = VAR_12;
  }
  FUNC_8(VAR_34, VAR_30, (unsigned short)(FUNC_2(VAR_34, VAR_30) | VAR_35));


  FUNC_4(VAR_34, VAR_34->params.clock_speed * 16);
 }
 else
  FUNC_4(VAR_34, VAR_34->params.clock_speed);

 FUNC_6(VAR_34);

 FUNC_1(VAR_34);
 FUNC_8(VAR_34, VAR_31, VAR_7 + VAR_6 + VAR_0);

 if (VAR_34->params.loopback)
  FUNC_0(VAR_34);
}
