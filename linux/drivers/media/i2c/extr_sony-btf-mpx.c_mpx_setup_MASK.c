
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sony_btf_mpx {int mpxmode; int audmode; int sd; } ;
struct i2c_msg {int len; int* buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;
struct TYPE_2__ {scalar_t__ audio_mode; int source; int modus; int acb; int fm_prescale; int nicam_prescale; int scart_prescale; int system; int volume; } ;



 scalar_t__ VAR_0 ;


 scalar_t__ VAR_1 ;




 int FUNC_0 (int ,struct i2c_msg*,int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct i2c_client*,int,int,int) ;
 struct i2c_client* FUNC_2 (int *) ;
 int FUNC_3 (struct i2c_client*,char*,int,int,...) ;

__attribute__((used)) static int FUNC_4(struct sony_btf_mpx *VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_2(&VAR_3->sd);
 u16 VAR_5 = 0;
 u8 VAR_6[3];
 struct i2c_msg VAR_7;
 int VAR_8 = VAR_3->mpxmode;


 VAR_6[0] = 0x00;
 VAR_6[1] = 0x80;
 VAR_6[2] = 0x00;
 VAR_7.addr = VAR_4->addr;
 VAR_7.flags = 0;
 VAR_7.len = 3;
 VAR_7.buf = VAR_6;
 FUNC_0(VAR_4->adapter, &VAR_7, 1);
 VAR_6[1] = 0x00;
 FUNC_0(VAR_4->adapter, &VAR_7, 1);

 if (VAR_3->audmode != 129)
  VAR_8++;

 if (VAR_2[VAR_8].audio_mode != VAR_0) {
  switch (VAR_3->audmode) {
  case 129:
   switch (VAR_2[VAR_8].audio_mode) {
   case 134:
    VAR_5 = VAR_2[VAR_8].source;
    break;
   case 133:
    VAR_5 = 0x0000;
    break;
   case 132:
    VAR_5 = 0x0200;
    break;
   default:
    break;
   }
   break;
  case 128:
   VAR_5 = VAR_2[VAR_8].source;
   break;
  case 131:
   VAR_5 = 0x0300;
   break;
  case 130:
   VAR_5 = 0x0400;
   break;
  }
  VAR_5 |= VAR_2[VAR_8].source & 0x00ff;
 } else
  VAR_5 = VAR_2[VAR_8].source;

 FUNC_1(VAR_4, 0x10, 0x0030, VAR_2[VAR_8].modus);
 FUNC_1(VAR_4, 0x12, 0x0008, VAR_5);
 FUNC_1(VAR_4, 0x12, 0x0013, VAR_2[VAR_8].acb);
 FUNC_1(VAR_4, 0x12, 0x000e,
   VAR_2[VAR_8].fm_prescale);
 FUNC_1(VAR_4, 0x12, 0x0010,
   VAR_2[VAR_8].nicam_prescale);
 FUNC_1(VAR_4, 0x12, 0x000d,
   VAR_2[VAR_8].scart_prescale);
 FUNC_1(VAR_4, 0x10, 0x0020, VAR_2[VAR_8].system);
 FUNC_1(VAR_4, 0x12, 0x0000, VAR_2[VAR_8].volume);
 if (VAR_2[VAR_8].audio_mode == 134)
  FUNC_1(VAR_4, 0x10, 0x0022,
   VAR_3->audmode == 129 ? 0x07f0 : 0x0190);
 return 0;
}
