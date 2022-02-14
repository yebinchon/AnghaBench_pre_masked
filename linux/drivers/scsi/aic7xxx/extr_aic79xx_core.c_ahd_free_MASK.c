
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dmamap; } ;
struct ahd_tmode_tstate {int init_level; struct ahd_tmode_tstate* saved_stack; struct ahd_tmode_tstate* seep_config; struct ahd_tmode_tstate* name; struct ahd_tmode_tstate* black_hole; int path; struct ahd_tmode_tstate** enabled_luns; struct ahd_tmode_tstate** enabled_targets; int shared_data_dmat; TYPE_1__ shared_data_map; int qoutfifo; } ;
struct ahd_tmode_lstate {int init_level; struct ahd_tmode_lstate* saved_stack; struct ahd_tmode_lstate* seep_config; struct ahd_tmode_lstate* name; struct ahd_tmode_lstate* black_hole; int path; struct ahd_tmode_lstate** enabled_luns; struct ahd_tmode_lstate** enabled_targets; int shared_data_dmat; TYPE_1__ shared_data_map; int qoutfifo; } ;
struct ahd_softc {int init_level; struct ahd_softc* saved_stack; struct ahd_softc* seep_config; struct ahd_softc* name; struct ahd_softc* black_hole; int path; struct ahd_softc** enabled_luns; struct ahd_softc** enabled_targets; int shared_data_dmat; TYPE_1__ shared_data_map; int qoutfifo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ahd_tmode_tstate*,int ) ;
 int FUNC_1 (struct ahd_tmode_tstate*,int ,int ) ;
 int FUNC_2 (struct ahd_tmode_tstate*,int ,int ) ;
 int FUNC_3 (struct ahd_tmode_tstate*,int ,int ,int ) ;
 int FUNC_4 (struct ahd_tmode_tstate*) ;
 int FUNC_5 (struct ahd_tmode_tstate*) ;
 int FUNC_6 (struct ahd_tmode_tstate*) ;
 int FUNC_7 (struct ahd_tmode_tstate*) ;
 int FUNC_8 (int ) ;

void
FUNC_9(struct ahd_softc *VAR_2)
{
 int VAR_3;

 switch (VAR_2->init_level) {
 default:
 case 5:
  FUNC_6(VAR_2);

 case 4:
  FUNC_2(VAR_2, VAR_2->shared_data_dmat,
      VAR_2->shared_data_map.dmamap);

 case 3:
  FUNC_3(VAR_2, VAR_2->shared_data_dmat, VAR_2->qoutfifo,
    VAR_2->shared_data_map.dmamap);
  FUNC_1(VAR_2, VAR_2->shared_data_dmat,
       VAR_2->shared_data_map.dmamap);

 case 2:
  FUNC_0(VAR_2, VAR_2->shared_data_dmat);
 case 1:
  break;
 case 0:
  break;
 }

 FUNC_5(VAR_2);
 FUNC_4(VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  struct ahd_tmode_tstate *VAR_4;

  VAR_4 = VAR_2->enabled_targets[VAR_3];
  if (VAR_4 != ((void*)0)) {
   FUNC_7(VAR_4);
  }
 }






 if (VAR_2->name != ((void*)0))
  FUNC_7(VAR_2->name);
 if (VAR_2->seep_config != ((void*)0))
  FUNC_7(VAR_2->seep_config);
 if (VAR_2->saved_stack != ((void*)0))
  FUNC_7(VAR_2->saved_stack);

 FUNC_7(VAR_2);

 return;
}
