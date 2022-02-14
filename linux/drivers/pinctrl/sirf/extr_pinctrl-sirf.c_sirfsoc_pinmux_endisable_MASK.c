
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sirfsoc_pmx {scalar_t__ rsc_virtbase; scalar_t__ gpio_virtbase; } ;
struct sirfsoc_padmux {int muxmask_counts; int funcmask; int funcval; scalar_t__ ctrlreg; struct sirfsoc_muxmask* muxmask; } ;
struct sirfsoc_muxmask {int mask; int group; } ;
struct TYPE_2__ {struct sirfsoc_padmux* padmux; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct sirfsoc_pmx *VAR_1,
     unsigned VAR_2, bool VAR_3)
{
 int VAR_4;
 const struct sirfsoc_padmux *VAR_5 =
  VAR_0[VAR_2].padmux;
 const struct sirfsoc_muxmask *VAR_6 = VAR_5->muxmask;

 for (VAR_4 = 0; VAR_4 < VAR_5->muxmask_counts; VAR_4++) {
  u32 VAR_7;
  VAR_7 = FUNC_1(VAR_1->gpio_virtbase +
   FUNC_0(VAR_6[VAR_4].group));
  if (VAR_3)
   VAR_7 = VAR_7 & ~VAR_6[VAR_4].mask;
  else
   VAR_7 = VAR_7 | VAR_6[VAR_4].mask;
  FUNC_2(VAR_7, VAR_1->gpio_virtbase +
   FUNC_0(VAR_6[VAR_4].group));
 }

 if (VAR_5->funcmask && VAR_3) {
  u32 VAR_8;

  VAR_8 =
   FUNC_1(VAR_1->rsc_virtbase + VAR_5->ctrlreg);
  VAR_8 =
   (VAR_8 & ~VAR_5->funcmask) | (VAR_5->funcval);
  FUNC_2(VAR_8, VAR_1->rsc_virtbase + VAR_5->ctrlreg);
 }
}
