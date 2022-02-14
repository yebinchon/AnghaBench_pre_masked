
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct ahc_tmode_tstate {TYPE_1__* transinfo; scalar_t__ ultraenb; struct ahc_tmode_tstate* enabled_luns; } ;
struct ahc_softc {size_t our_id; int our_id_b; struct ahc_tmode_tstate** enabled_targets; } ;
struct TYPE_2__ {struct ahc_tmode_tstate goal; struct ahc_tmode_tstate curr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ahc_softc*) ;
 struct ahc_tmode_tstate* FUNC_1 (int,int ) ;
 int FUNC_2 (struct ahc_tmode_tstate*,struct ahc_tmode_tstate*,int) ;
 int FUNC_3 (struct ahc_tmode_tstate*,int ,int) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static struct ahc_tmode_tstate *
FUNC_5(struct ahc_softc *VAR_2, u_int VAR_3, char VAR_4)
{
 struct ahc_tmode_tstate *VAR_5;
 struct ahc_tmode_tstate *VAR_6;
 int VAR_7;

 VAR_5 = VAR_2->enabled_targets[VAR_2->our_id];
 if (VAR_4 == 'B') {
  VAR_3 += 8;
  VAR_5 = VAR_2->enabled_targets[VAR_2->our_id_b + 8];
 }
 if (VAR_2->enabled_targets[VAR_3] != ((void*)0)
  && VAR_2->enabled_targets[VAR_3] != VAR_5)
  FUNC_4("%s: ahc_alloc_tstate - Target already allocated",
        FUNC_0(VAR_2));
 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
 if (VAR_6 == ((void*)0))
  return (((void*)0));







 if (VAR_5 != ((void*)0)) {
  FUNC_2(VAR_6, VAR_5, sizeof(*VAR_6));
  FUNC_3(VAR_6->enabled_luns, 0, sizeof(VAR_6->enabled_luns));
  VAR_6->ultraenb = 0;
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
   FUNC_3(&VAR_6->transinfo[VAR_7].curr, 0,
         sizeof(VAR_6->transinfo[VAR_7].curr));
   FUNC_3(&VAR_6->transinfo[VAR_7].goal, 0,
         sizeof(VAR_6->transinfo[VAR_7].goal));
  }
 } else
  FUNC_3(VAR_6, 0, sizeof(*VAR_6));
 VAR_2->enabled_targets[VAR_3] = VAR_6;
 return (VAR_6);
}
