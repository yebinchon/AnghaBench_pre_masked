
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pic_len; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_0 (char VAR_1)
{
 switch ((unsigned char) VAR_1)
 {
  case 0x2a:
  case 0x49:
  case 0x51:
  case 0x0d:
  case 0x20:
  case 0x07:
  case 0x01:
  case 0x25:
  case 0x00:
   return 8;

  case 0x05:
  case 0x3e:
   return VAR_0->pic_len;

  case 0x09:
   return 4096;

  default:
   return 0;
 }
}
