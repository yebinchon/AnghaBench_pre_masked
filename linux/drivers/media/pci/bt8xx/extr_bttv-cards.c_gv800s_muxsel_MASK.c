
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t nr; } ;
struct bttv {int* sw_status; TYPE_1__ c; } ;


 int FUNC_0 (struct bttv*,int,int,int) ;
 struct bttv** VAR_0 ;

__attribute__((used)) static void FUNC_1(struct bttv *VAR_1, unsigned int VAR_2)
{
 struct bttv *VAR_3;
 int VAR_4, VAR_5;
 static unsigned int VAR_6[4][4] = { { 0x0, 0x4, 0xa, 0x6 },
       { 0x1, 0x5, 0xb, 0x7 },
       { 0x2, 0x8, 0xc, 0xe },
       { 0x3, 0x9, 0xd, 0xf } };
 VAR_2 = VAR_2%4;
 VAR_3 = VAR_0[VAR_1->c.nr];
 if (VAR_3 == ((void*)0)) {

  return;
 }
 VAR_5 = (VAR_1->c.nr - VAR_3->c.nr) & 3;
 VAR_4 = VAR_6[VAR_5][VAR_2] & 0xf;


 if (VAR_3->sw_status[VAR_5] != VAR_4) {

  FUNC_0(VAR_3, VAR_3->sw_status[VAR_5], VAR_5, 0);
  VAR_3->sw_status[VAR_5] = VAR_4;
  FUNC_0(VAR_3, VAR_4, VAR_5, 1);
 }
}
