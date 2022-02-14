
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pll_ofreq; int pll_current; scalar_t__ pll_ifreq; int pll_crystal; } ;
struct TYPE_3__ {int nr; } ;
struct bttv {TYPE_2__ pll; TYPE_1__ c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct bttv*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct bttv *VAR_5)
{
 int VAR_6;

 if (!VAR_5->pll.pll_crystal)
  return;

 if (VAR_5->pll.pll_ofreq == VAR_5->pll.pll_current) {
  FUNC_2("%d: PLL: no change required\n", VAR_5->c.nr);
  return;
 }

 if (VAR_5->pll.pll_ifreq == VAR_5->pll.pll_ofreq) {

  if (VAR_5->pll.pll_current == 0)
   return;
  if (VAR_4)
   FUNC_4("%d: PLL can sleep, using XTAL (%d)\n",
    VAR_5->c.nr, VAR_5->pll.pll_ifreq);
  FUNC_1(0x00,VAR_3);
  FUNC_1(0x00,VAR_2);
  VAR_5->pll.pll_current = 0;
  return;
 }

 if (VAR_4)
  FUNC_4("%d: Setting PLL: %d => %d (needs up to 100ms)\n",
   VAR_5->c.nr,
   VAR_5->pll.pll_ifreq, VAR_5->pll.pll_ofreq);
 FUNC_5(VAR_5, VAR_5->pll.pll_ifreq, VAR_5->pll.pll_ofreq);

 for (VAR_6=0; VAR_6<10; VAR_6++) {

  FUNC_3(10);

  if (FUNC_0(VAR_0) & VAR_1) {
   FUNC_1(0,VAR_0);
  } else {
   FUNC_1(0x08,VAR_3);
   VAR_5->pll.pll_current = VAR_5->pll.pll_ofreq;
   if (VAR_4)
    FUNC_4("PLL set ok\n");
   return;
  }
 }
 VAR_5->pll.pll_current = -1;
 if (VAR_4)
  FUNC_4("Setting PLL failed\n");
 return;
}
