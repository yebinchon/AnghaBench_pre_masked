
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
 int VAR_3, VAR_4;
 struct bttv *VAR_5;
 static unsigned char VAR_6[4] = {3, 0, 2, 1};

 VAR_5 = VAR_0[VAR_1->c.nr];
 if (VAR_5 == ((void*)0)) {
  return;
 }
 VAR_4 = (VAR_1->c.nr - VAR_5->c.nr + 1) & 3;
 VAR_4 = VAR_6[VAR_4];
 VAR_3 = VAR_2 & 0xf;

 if (VAR_5->sw_status[VAR_4] != VAR_3)
 {

  FUNC_0(VAR_5, VAR_5->sw_status[VAR_4], VAR_4, 0);
  VAR_5->sw_status[VAR_4] = VAR_3;
  FUNC_0(VAR_5, VAR_3, VAR_4, 1);
 }
}
