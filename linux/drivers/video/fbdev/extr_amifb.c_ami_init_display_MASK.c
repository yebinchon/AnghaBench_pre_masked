
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_short ;
struct amifb_par {int bplcon0; int beamcon0; int htotal; int fmode; scalar_t__ hsstop; int vsstop; int vsstrt; int vbstop; int vbstrt; int vtotal; int hcenter; int hsstrt; int hbstop; int hbstrt; int bplcon3; } ;
struct TYPE_4__ {int ** list; } ;
struct TYPE_3__ {int bplcon0; int bplcon2; int bplcon4; int beamcon0; int vposr; int vposw; int * cop2lc; int fmode; int vsstop; int vsstrt; int vbstop; int vbstrt; int vtotal; int hcenter; int hsstop; int hsstrt; int hbstop; int hbstrt; int htotal; int bplcon3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_9 ;
 TYPE_2__ VAR_10 ;
 size_t VAR_11 ;
 TYPE_1__ VAR_12 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_13 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(const struct amifb_par *VAR_14)
{
 int VAR_15;

 VAR_12.bplcon0 = VAR_14->bplcon0 & ~VAR_1;
 VAR_12.bplcon2 = (VAR_8 ? 0 : VAR_2) | VAR_4 | VAR_3;
 if (!VAR_8) {
  VAR_12.bplcon3 = VAR_14->bplcon3;
  if (VAR_7)
   VAR_12.bplcon4 = VAR_5 | VAR_6;
  if (VAR_14->beamcon0 & VAR_0) {
   VAR_12.htotal = FUNC_7(VAR_14->htotal);
   VAR_12.hbstrt = FUNC_3(VAR_14->hbstrt);
   VAR_12.hbstop = FUNC_2(VAR_14->hbstop);
   VAR_12.hsstrt = FUNC_6(VAR_14->hsstrt);
   VAR_12.hsstop = FUNC_5(VAR_14->hsstop);
   VAR_12.hcenter = FUNC_4(VAR_14->hcenter);
   VAR_12.vtotal = FUNC_12(VAR_14->vtotal);
   VAR_12.vbstrt = FUNC_9(VAR_14->vbstrt);
   VAR_12.vbstop = FUNC_8(VAR_14->vbstop);
   VAR_12.vsstrt = FUNC_11(VAR_14->vsstrt);
   VAR_12.vsstop = FUNC_10(VAR_14->vsstop);
  }
 }
 if (!VAR_8 || VAR_14->hsstop)
  VAR_12.beamcon0 = VAR_14->beamcon0;
 if (VAR_7)
  VAR_12.fmode = VAR_14->fmode;





 VAR_9 = FUNC_1(VAR_14->htotal);

 VAR_13 = VAR_14->bplcon0 & VAR_1 ? 1 : 0;

 if (VAR_13) {
  VAR_15 = VAR_12.vposr >> 15;
 } else {
  VAR_12.vposw = VAR_12.vposr | 0x8000;
  VAR_15 = 1;
 }




 VAR_12.cop2lc = (u_short *)FUNC_0(VAR_10.list[VAR_11][VAR_15]);
}
