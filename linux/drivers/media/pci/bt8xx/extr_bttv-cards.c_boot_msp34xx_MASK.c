
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr; } ;
struct bttv {TYPE_1__ c; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bttv*,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct bttv *VAR_2, int VAR_3)
{
 int VAR_4 = (1 << VAR_3);

 FUNC_2(VAR_4,VAR_4);
 FUNC_1(VAR_4,0);
 FUNC_3(2);
 FUNC_5(500);
 FUNC_1(VAR_4,VAR_4);

 if (VAR_0)
  FUNC_0(VAR_2,"msp34xx");
 if (VAR_1)
  FUNC_4("%d: Hauppauge/Voodoo msp34xx: reset line init [%d]\n",
   VAR_2->c.nr, VAR_3);
}
