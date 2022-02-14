
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr; } ;
struct bttv {int* sw_status; TYPE_1__ c; } ;


 int VAR_0 ;
 int FUNC_0 (struct bttv*,int,int,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct bttv*,int,int,int) ;
 struct bttv** VAR_1 ;

__attribute__((used)) static void FUNC_4(struct bttv *VAR_2)
{
 int VAR_3;

 FUNC_1(0xf107f, 0xf107f);
 FUNC_2(1<<19);
 FUNC_2(0);


 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  VAR_2->sw_status[VAR_3] = VAR_3;
  FUNC_3(VAR_2, VAR_3, VAR_3, 1);
 }


 FUNC_0(VAR_2, 0x18, 0x5, 0x90, 1);

 if (VAR_2->c.nr > VAR_0-4)
  return;




 VAR_1[VAR_2->c.nr] = VAR_2;
 VAR_1[VAR_2->c.nr+1] = VAR_2;
 VAR_1[VAR_2->c.nr+2] = VAR_2;
 VAR_1[VAR_2->c.nr+3] = VAR_2;
}
