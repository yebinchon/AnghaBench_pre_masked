
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct owl_padinfo {TYPE_1__* st; TYPE_2__* pullctl; } ;
struct TYPE_4__ {int width; int shift; int reg; } ;
struct TYPE_3__ {int width; int shift; int reg; } ;


 int VAR_0 ;
 int VAR_1 ;






__attribute__((used)) static int FUNC_0(const struct owl_padinfo *VAR_2,
    unsigned int VAR_3,
    u32 *VAR_4,
    u32 *VAR_5,
    u32 *VAR_6)
{
 switch (VAR_3) {
 case 132:
 case 131:
 case 130:
 case 129:
  if (!VAR_2->pullctl)
   return -VAR_0;
  *VAR_4 = VAR_2->pullctl->reg;
  *VAR_5 = VAR_2->pullctl->shift;
  *VAR_6 = VAR_2->pullctl->width;
  break;
 case 128:
  if (!VAR_2->st)
   return -VAR_0;
  *VAR_4 = VAR_2->st->reg;
  *VAR_5 = VAR_2->st->shift;
  *VAR_6 = VAR_2->st->width;
  break;
 default:
  return -VAR_1;
 }

 return 0;
}
