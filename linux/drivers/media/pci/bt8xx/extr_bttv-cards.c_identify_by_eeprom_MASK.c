
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int nr; } ;
struct bttv {TYPE_1__ c; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (char*,int ,int ,size_t) ;
 scalar_t__ FUNC_1 (unsigned char*,char*,int) ;

__attribute__((used)) static void FUNC_2(struct bttv *VAR_4, unsigned char VAR_5[256])
{
 int VAR_6 = -1;

 if (0 == FUNC_1(VAR_5,"GET MM20xPCTV",13))
  VAR_6 = VAR_2;
 else if (0 == FUNC_1(VAR_5+20,"Picolo",7))
  VAR_6 = VAR_0;
 else if (VAR_5[0] == 0x84 && VAR_5[2]== 0)
  VAR_6 = VAR_1;

 if (-1 != VAR_6) {
  VAR_4->c.type = VAR_6;
  FUNC_0("%d: detected by eeprom: %s [card=%d]\n",
   VAR_4->c.nr, VAR_3[VAR_4->c.type].name, VAR_4->c.type);
 }
}
