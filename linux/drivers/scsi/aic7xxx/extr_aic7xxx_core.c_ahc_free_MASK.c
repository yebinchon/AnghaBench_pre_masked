
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahc_tmode_tstate {int init_level; struct ahc_tmode_tstate* seep_config; struct ahc_tmode_tstate* name; struct ahc_tmode_tstate* black_hole; int path; struct ahc_tmode_tstate** enabled_luns; struct ahc_tmode_tstate** enabled_targets; int shared_data_dmat; int shared_data_dmamap; int qoutfifo; } ;
struct ahc_tmode_lstate {int init_level; struct ahc_tmode_lstate* seep_config; struct ahc_tmode_lstate* name; struct ahc_tmode_lstate* black_hole; int path; struct ahc_tmode_lstate** enabled_luns; struct ahc_tmode_lstate** enabled_targets; int shared_data_dmat; int shared_data_dmamap; int qoutfifo; } ;
struct ahc_softc {int init_level; struct ahc_softc* seep_config; struct ahc_softc* name; struct ahc_softc* black_hole; int path; struct ahc_softc** enabled_luns; struct ahc_softc** enabled_targets; int shared_data_dmat; int shared_data_dmamap; int qoutfifo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ahc_tmode_tstate*,int ) ;
 int FUNC_1 (struct ahc_tmode_tstate*,int ,int ) ;
 int FUNC_2 (struct ahc_tmode_tstate*,int ,int ) ;
 int FUNC_3 (struct ahc_tmode_tstate*,int ,int ,int ) ;
 int FUNC_4 (struct ahc_tmode_tstate*) ;
 int FUNC_5 (struct ahc_tmode_tstate*) ;
 int FUNC_6 (struct ahc_tmode_tstate*) ;
 int FUNC_7 (struct ahc_tmode_tstate*) ;
 int FUNC_8 (int ) ;

void
FUNC_9(struct ahc_softc *VAR_2)
{
 int VAR_3;

 switch (VAR_2->init_level) {
 default:
 case 5:
  FUNC_6(VAR_2);

 case 4:
  FUNC_2(VAR_2, VAR_2->shared_data_dmat,
      VAR_2->shared_data_dmamap);

 case 3:
  FUNC_3(VAR_2, VAR_2->shared_data_dmat, VAR_2->qoutfifo,
    VAR_2->shared_data_dmamap);
  FUNC_1(VAR_2, VAR_2->shared_data_dmat,
       VAR_2->shared_data_dmamap);

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
  struct ahc_tmode_tstate *VAR_4;

  VAR_4 = VAR_2->enabled_targets[VAR_3];
  if (VAR_4 != ((void*)0)) {
   FUNC_7(VAR_4);
  }
 }






 if (VAR_2->name != ((void*)0))
  FUNC_7(VAR_2->name);
 if (VAR_2->seep_config != ((void*)0))
  FUNC_7(VAR_2->seep_config);

 FUNC_7(VAR_2);

 return;
}
