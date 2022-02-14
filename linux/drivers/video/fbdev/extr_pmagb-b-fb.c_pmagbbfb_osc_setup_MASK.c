
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tc_bus {int dummy; } ;
struct pmagbbfb_par {int osc0; int osc1; } ;
struct TYPE_3__ {int pixclock; } ;
struct fb_info {TYPE_1__ var; int device; struct pmagbbfb_par* par; } ;
struct TYPE_4__ {struct tc_bus* bus; } ;


 int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pmagbbfb_par*,int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct pmagbbfb_par*,int ) ;
 int FUNC_4 (struct pmagbbfb_par*,int ,int ) ;
 int FUNC_5 (struct tc_bus*) ;
 TYPE_2__* FUNC_6 (int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct fb_info *VAR_2)
{
 static unsigned int VAR_3[] = {
  130808, 119843, 104000, 92980, 74370, 72800,
  69197, 66000, 65000, 50350, 36000, 32000, 25175
 };
 struct pmagbbfb_par *VAR_4 = VAR_2->par;
 struct tc_bus *VAR_5 = FUNC_6(VAR_2->device)->bus;
 u32 VAR_6 = 8, VAR_7 = 8, VAR_8 = 16 * 256 + 8;
 u32 VAR_9, VAR_10, VAR_11 = FUNC_5(VAR_5) / 250;
 int VAR_12, VAR_13;

 FUNC_1(VAR_4, 0);
 for (VAR_13 = 0; VAR_13 < 16; VAR_13++) {
  FUNC_2();
  FUNC_4(VAR_4, VAR_0, 0);
  FUNC_2();
  for (VAR_12 = 0; VAR_12 < 100; VAR_12++) {
   if (FUNC_3(VAR_4, VAR_0) == 0)
    break;
   FUNC_7(1);
  }
  VAR_6 += FUNC_3(VAR_4, VAR_1);
 }

 FUNC_1(VAR_4, 1);
 for (VAR_13 = 0; VAR_13 < 16; VAR_13++) {
  FUNC_2();
  FUNC_4(VAR_4, VAR_0, 0);

  for (VAR_12 = 0; VAR_12 < 100; VAR_12++) {
   if (FUNC_3(VAR_4, VAR_0) == 0)
    break;
   FUNC_7(1);
  }
  VAR_7 += FUNC_3(VAR_4, VAR_1);
 }

 VAR_9 = (VAR_11 * VAR_6 + VAR_8 / 2) / VAR_8;
 VAR_4->osc0 = VAR_9;
 if (VAR_9 >= VAR_3[0] - (VAR_3[0] + 32) / 64 &&
     VAR_9 <= VAR_3[0] + (VAR_3[0] + 32) / 64)
  VAR_4->osc0 = VAR_3[0];

 VAR_10 = (VAR_4->osc0 * VAR_7 + VAR_6 / 2) / VAR_6;
 VAR_4->osc1 = VAR_10;
 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_3); VAR_12++)
  if (VAR_10 >= VAR_3[VAR_12] -
        (VAR_3[VAR_12] + 128) / 256 &&
      VAR_10 <= VAR_3[VAR_12] +
        (VAR_3[VAR_12] + 128) / 256) {
   VAR_4->osc1 = VAR_3[VAR_12];
   break;
  }

 if (VAR_4->osc0 - VAR_4->osc1 <= (VAR_4->osc0 + VAR_4->osc1 + 256) / 512 ||
     VAR_4->osc1 - VAR_4->osc0 <= (VAR_4->osc0 + VAR_4->osc1 + 256) / 512)
  VAR_4->osc1 = 0;

 FUNC_1(VAR_4, VAR_4->osc1 != 0);

 VAR_2->var.pixclock = VAR_4->osc1 ?
        (1000000000 + VAR_4->osc1 / 2) / VAR_4->osc1 :
        (1000000000 + VAR_4->osc0 / 2) / VAR_4->osc0;
}
