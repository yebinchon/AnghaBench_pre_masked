
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct qcafrm_handle {int state; int init; int offset; } ;
typedef size_t s32 ;
typedef enum qcafrm_state { ____Placeholder_qcafrm_state } qcafrm_state ;


 size_t VAR_0 ;




 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
s32
FUNC_0(struct qcafrm_handle *VAR_5, u8 *VAR_6, u16 VAR_7, u8 VAR_8)
{
 s32 VAR_9 = VAR_0;
 u16 VAR_10;

 switch (VAR_5->state) {
 case 141:
 case 140:

  VAR_5->state--;

  if (VAR_8 != 0x00) {

   VAR_5->state = VAR_5->init;
  }
  break;
 case 139:
 case 138:
  VAR_5->state--;
  break;

 case 135:
 case 134:
 case 133:
 case 132:
  if (VAR_8 != 0xAA) {
   VAR_9 = VAR_3;
   VAR_5->state = VAR_5->init;
  } else {
   VAR_5->state--;
  }
  break;


 case 131:
  VAR_5->offset = VAR_8;
  VAR_5->state = 130;
  break;
 case 130:
  VAR_5->offset = VAR_5->offset | (VAR_8 << 8);
  VAR_5->state = 129;
  break;
 case 129:
  VAR_5->state = 128;
  break;
 case 128:
  VAR_10 = VAR_5->offset;
  if (VAR_10 > VAR_7 || VAR_10 < VAR_2) {
   VAR_9 = VAR_1;
   VAR_5->state = VAR_5->init;
  } else {
   VAR_5->state = (enum qcafrm_state)(VAR_10 + 1);

   VAR_5->offset = 0;
  }
  break;
 default:

  VAR_6[VAR_5->offset] = VAR_8;
  VAR_5->offset++;
  VAR_5->state--;
  break;
 case 137:
  if (VAR_8 != 0x55) {
   VAR_9 = VAR_4;
   VAR_5->state = VAR_5->init;
  } else {
   VAR_5->state = 136;
  }
  break;
 case 136:
  if (VAR_8 != 0x55) {
   VAR_9 = VAR_4;
   VAR_5->state = VAR_5->init;
  } else {
   VAR_9 = VAR_5->offset;

   VAR_5->state = VAR_5->init;
  }
  break;
 }

 return VAR_9;
}
