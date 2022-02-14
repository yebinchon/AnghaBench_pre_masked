
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct ddb_output {TYPE_2__* port; } ;
struct ddb {TYPE_4__* link; } ;
struct TYPE_7__ {int regmapid; } ;
struct TYPE_8__ {TYPE_3__ ids; TYPE_1__* info; } ;
struct TYPE_6__ {int obr; int gap; int nr; struct ddb* dev; } ;
struct TYPE_5__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ddb_output *VAR_1, u32 *VAR_2, u32 *VAR_3, u32 VAR_4)
{
 struct ddb *VAR_5 = VAR_1->port->dev;
 u32 VAR_6 = VAR_1->port->obr, VAR_7 = 72000;
 u32 VAR_8 = 4, VAR_9 = 0;

 *VAR_2 = 0x1c;
 if (VAR_1->port->gap != 0xffffffff) {
  VAR_4 |= 1;
  VAR_8 = VAR_1->port->gap;
  VAR_7 = 0;
 }
 if (VAR_5->link[0].info->type == VAR_0 && VAR_1->port->nr > 1) {
  *VAR_2 = 0x10c;
  if (VAR_5->link[0].ids.regmapid >= 0x10003 && !(VAR_4 & 1)) {
   if (!(VAR_4 & 2)) {

    VAR_7 = 0;
    VAR_8 = 0;
    if (VAR_6 != 72000) {
     if (VAR_6 >= 96000) {
      *VAR_2 |= 0x800;
     } else {
      *VAR_2 |= 0x1000;
      VAR_9 = (VAR_6 * 8192 + 71999)
       / 72000;
     }
    }
   } else {

    *VAR_2 |= 0x1810;
    if (VAR_6 <= 64000) {
     VAR_7 = 64000;
     VAR_9 = 8;
    } else if (VAR_6 <= 72000) {
     VAR_7 = 72000;
     VAR_9 = 7;
    } else {
     VAR_7 = 96000;
     VAR_9 = 5;
    }
   }
  } else {
   if (VAR_6 > 72000) {
    *VAR_2 |= 0x810;
    VAR_7 = 96000;
   }
   *VAR_2 |= 0x10;
  }
 }
 if (VAR_7 > 0) {
  if (VAR_6 > VAR_7)
   VAR_6 = VAR_7;
  if (VAR_6 < 31000)
   VAR_6 = 31000;
  VAR_8 = ((VAR_7 - VAR_6) * 94) / VAR_6;
  if (VAR_8 < 2)
   *VAR_2 &= ~0x10;
  else
   VAR_8 -= 2;
  if (VAR_8 > 127)
   VAR_8 = 127;
 }

 *VAR_3 = (VAR_9 << 16) | VAR_8;
}
