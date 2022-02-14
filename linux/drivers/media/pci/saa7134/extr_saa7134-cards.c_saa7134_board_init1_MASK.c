
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7134_dev {int board; void* has_remote; int name; int gpio_value; } ;
struct TYPE_2__ {int name; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_0 (struct saa7134_dev*) ;
 TYPE_1__ FUNC_1 (struct saa7134_dev*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*,int ,int ,int ,...) ;
 int FUNC_5 (struct saa7134_dev*,int,int) ;
 int FUNC_6 (int,int,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int,int ) ;

int FUNC_10(struct saa7134_dev *VAR_10)
{

 FUNC_9(VAR_0 >> 2, 0);
 VAR_10->gpio_value = FUNC_7(VAR_3 >> 2);
 FUNC_3("%s: board init: gpio is %x\n", VAR_10->name, VAR_10->gpio_value);

 switch (VAR_10->board) {
 case 168:
 case 167:
 case 166:
  VAR_10->has_remote = VAR_8;
  FUNC_0(VAR_10);
  break;
 case 169:
 case 170:
 case 186:
 case 184:
 case 183:
 case 182:
 case 181:
 case 180:
 case 150:
 case 157:
 case 156:
 case 221:
 case 241:
 case 219:
 case 239:
 case 220:
 case 240:
 case 218:
 case 228:
 case 238:
 case 223:

 case 128:
 case 133:
 case 129:
 case 132:
 case 134:
 case 136:
 case 135:
 case 152:
 case 151:
 case 209:
 case 242:
 case 164:
 case 158:
 case 139:
 case 171:
 case 243:
 case 245:
 case 244:
 case 246:
 case 174:
 case 143:
 case 236:
 case 179:
 case 178:
 case 176:
 case 177:
 case 248:
 case 217:
 case 216:
 case 215:
 case 214:
 case 213:
 case 212:
 case 211:
 case 210:
 case 208:
 case 206:
 case 207:
 case 203:
 case 205:
 case 204:
 case 165:
 case 142:
 case 159:
 case 227:
 case 141:
 case 155:
 case 154:
  VAR_10->has_remote = VAR_8;
  break;
 case 175:
  FUNC_8(VAR_2, 0x80);
  FUNC_8(VAR_5, 0x40);
  VAR_10->has_remote = VAR_8;
  break;
 case 149:
  FUNC_4("%s: seems there are two different versions of the MD5044\n"
   "%s: (with the same ID) out there.  If sound doesn't work for\n"
   "%s: you try the audio_clock_override=0x200000 insmod option.\n",
   VAR_10->name, VAR_10->name, VAR_10->name);
  break;
 case 185:

  FUNC_6(VAR_0 >> 2, 0x00040000, 0x00040000);
  FUNC_6(VAR_3 >> 2, 0x00040000, 0x00000000);
  break;
 case 146:

  FUNC_8(VAR_1, 0x80);
  FUNC_8(VAR_4, 0x80);
  break;
 case 148:

  FUNC_6(VAR_0 >> 2, 0x00040000, 0x00040000);
  FUNC_6(VAR_3 >> 2, 0x00040000, 0x00000004);
  break;
 case 173:

  FUNC_8(VAR_2, 0x08);
  FUNC_8(VAR_6, 0x06);
  break;
 case 247:
 case 172:
  FUNC_6(VAR_0 >> 2, 0x08000000, 0x08000000);
  FUNC_6(VAR_3 >> 2, 0x08000000, 0x00000000);
  break;
 case 231:
 case 224:

  FUNC_6(VAR_0 >> 2, 0xffffffff, 0);
  FUNC_6(VAR_3 >> 2, 0xffffffff, 0);
  FUNC_2(10);

  FUNC_6(VAR_0 >> 2, 0xffffffff, 0xffffffff);
  FUNC_6(VAR_3 >> 2, 0xffffffff, 0xffffffff);
  FUNC_2(10);
  break;
 case 230:

  FUNC_6(VAR_0 >> 2, 0x08400000, 0x08400000);
  FUNC_6(VAR_3 >> 2, 0x08400000, 0);
  FUNC_2(10);
  FUNC_6(VAR_0 >> 2, 0x08400000, 0x08400000);
  FUNC_6(VAR_3 >> 2, 0x08400000, 0x08400000);
  FUNC_2(10);
  VAR_10->has_remote = VAR_9;
  break;
 case 229:
  FUNC_5(VAR_10, 23, 0);
  FUNC_2(10);
  FUNC_5(VAR_10, 23, 1);
  VAR_10->has_remote = VAR_9;
  break;
 case 225:
  FUNC_5(VAR_10, 23, 0);
  FUNC_2(10);
  FUNC_5(VAR_10, 23, 1);
  break;
 case 235:
  FUNC_5(VAR_10, 21, 0);
  FUNC_2(10);
  FUNC_5(VAR_10, 21, 1);
  FUNC_2(1);
  VAR_10->has_remote = VAR_8;
  break;
 case 193:

  FUNC_6(VAR_0 >> 2, 0x000A8004, 0x000A8004);
  FUNC_6(VAR_3 >> 2, 0x000A8004, 0);
  FUNC_2(10);

  FUNC_6(VAR_0 >> 2, 0x000A8004, 0x000A8004);
  FUNC_6(VAR_3 >> 2, 0x000A8004, 0x000A8004);
  FUNC_2(10);

  VAR_10->has_remote = VAR_8;
  break;
 case 140:
  FUNC_8 (VAR_7, 0x00);
  break;
 case 161:
 case 162:
  VAR_10->has_remote = VAR_8;

  FUNC_5(VAR_10, 26, 0);
  FUNC_2(1);

  FUNC_5(VAR_10, 22, 0);
  FUNC_2(10);
  FUNC_5(VAR_10, 22, 1);
  break;

 case 145:
 case 144:
 case 137:
 case 147:
 case 163:
 case 202:
 case 201:
 case 198:
 case 197:
 case 200:
 case 199:
 case 196:
 case 195:
 case 190:
 case 189:
 case 188:
 case 192:
 case 187:
 case 191:
 case 194:
 case 160:
 case 138:
  VAR_10->has_remote = VAR_9;
  break;
 case 237:
  FUNC_4("%s: %s: dual saa713x broadcast decoders\n"
   "%s: Sorry, none of the inputs to this chip are supported yet.\n"
   "%s: Dual decoder functionality is disabled for now, use the other chip.\n",
   VAR_10->name, FUNC_1(VAR_10).name, VAR_10->name, VAR_10->name);
  break;
 case 226:

        VAR_10->has_remote = VAR_8;
  FUNC_6(VAR_0 >> 2, 0x8c040007, 0x8c040007);
  FUNC_6(VAR_3 >> 2, 0x0c0007cd, 0x0c0007cd);
  break;
 case 234:
 case 233:

  FUNC_6(VAR_0 >> 2, 0x80040100, 0x80040100);
  FUNC_6(VAR_3 >> 2, 0x80040100, 0x00040100);
  break;
 case 232:

  FUNC_5(VAR_10, 12, 3);
  FUNC_5(VAR_10, 13, 3);
  VAR_10->has_remote = VAR_9;




  FUNC_5(VAR_10, 23, 1);
  break;
 case 131:
  VAR_10->has_remote = VAR_8;
  FUNC_6(VAR_0 >> 2, 0x0000C000, 0x0000C000);
  FUNC_6(VAR_3 >> 2, 0x0000C000, 0x0000C000);
  break;
 case 222:
  FUNC_5(VAR_10, 1, 1);
  FUNC_2(10);
  FUNC_5(VAR_10, 1, 0);
  FUNC_2(10);
  FUNC_5(VAR_10, 1, 1);
  VAR_10->has_remote = VAR_8;
  break;
 case 153:

  FUNC_6(VAR_0 >> 2, 0x0e050000, 0x0c050000);
  FUNC_6(VAR_3 >> 2, 0x0e050000, 0x0c050000);
  break;
 case 130:

  FUNC_6(VAR_0 >> 2, 0x00008000, 0x00008000);
  FUNC_6(VAR_3 >> 2, 0x00008000, 0x00008000);
  break;
 }
 return 0;
}
