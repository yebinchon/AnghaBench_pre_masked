
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_7__ {int TupleDataLen; scalar_t__ TupleData; } ;
typedef TYPE_2__ tuple_t ;
struct TYPE_8__ {scalar_t__ ndev; TYPE_1__* dev; } ;
typedef TYPE_3__ cistpl_device_t ;
struct TYPE_6__ {int type; int wp; int speed; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(tuple_t *VAR_2, cistpl_device_t *VAR_3)
{
 int VAR_4;
 u_char VAR_5;
 u_char *VAR_6, *VAR_7;

 VAR_6 = (u_char *)VAR_2->TupleData;
 VAR_7 = VAR_6 + VAR_2->TupleDataLen;

 VAR_3->ndev = 0;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {

  if (*VAR_6 == 0xff)
   break;
  VAR_3->dev[VAR_4].type = (*VAR_6 >> 4);
  VAR_3->dev[VAR_4].wp = (*VAR_6 & 0x08) ? 1 : 0;
  switch (*VAR_6 & 0x07) {
  case 0:
   VAR_3->dev[VAR_4].speed = 0;
   break;
  case 1:
   VAR_3->dev[VAR_4].speed = 250;
   break;
  case 2:
   VAR_3->dev[VAR_4].speed = 200;
   break;
  case 3:
   VAR_3->dev[VAR_4].speed = 150;
   break;
  case 4:
   VAR_3->dev[VAR_4].speed = 100;
   break;
  case 7:
   if (++VAR_6 == VAR_7)
    return -VAR_1;
   VAR_3->dev[VAR_4].speed = FUNC_0(*VAR_6);
   while (*VAR_6 & 0x80)
    if (++VAR_6 == VAR_7)
     return -VAR_1;
   break;
  default:
   return -VAR_1;
  }

  if (++VAR_6 == VAR_7)
   return -VAR_1;
  if (*VAR_6 == 0xff)
   break;
  VAR_5 = *VAR_6 & 7;
  if (VAR_5 == 7)
   return -VAR_1;
  VAR_3->dev[VAR_4].size = ((*VAR_6 >> 3) + 1) * (512 << (VAR_5*2));
  VAR_3->ndev++;
  if (++VAR_6 == VAR_7)
   break;
 }

 return 0;
}
