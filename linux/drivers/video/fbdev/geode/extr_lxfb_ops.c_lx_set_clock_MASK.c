
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pixclock; } ;
struct fb_info {TYPE_1__ var; } ;
struct TYPE_5__ {int pllval; scalar_t__ freq; } ;


 unsigned int FUNC_0 (TYPE_2__*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_1)
{
 unsigned int VAR_2, VAR_3, VAR_4 = 0;
 unsigned int VAR_5, VAR_6;

 VAR_5 = (unsigned int) (1000000000 / VAR_1->var.pixclock);

 VAR_3 = FUNC_1(VAR_0[0].freq - VAR_5);

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
  VAR_2 = FUNC_1(VAR_0[VAR_6].freq - VAR_5);
  if (VAR_2 < VAR_3) {
   VAR_3 = VAR_2;
   VAR_4 = VAR_6;
  }
 }

 FUNC_2(VAR_0[VAR_4].pllval & 0x00017FFF);
}
