
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr; } ;
struct bttv {TYPE_1__ c; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,unsigned int,unsigned int,unsigned int,char*) ;

void FUNC_2(struct bttv *VAR_2, char *VAR_3)
{
 unsigned int VAR_4, VAR_5;
 VAR_4 = FUNC_0(VAR_1);
 VAR_5 = FUNC_0(VAR_0);
 FUNC_1("%d: gpio: en=%08x, out=%08x in=%08x [%s]\n",
   VAR_2->c.nr, VAR_4, VAR_5 & VAR_4, VAR_5 & ~VAR_4, VAR_3);
}
