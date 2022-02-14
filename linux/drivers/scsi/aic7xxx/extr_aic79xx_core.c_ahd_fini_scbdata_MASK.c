
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scb_data {int init_level; int hscb_dmat; int hscb_maps; int sg_dmat; int sg_maps; int sense_dmat; int sense_maps; } ;
struct map_node {int dmamap; int vaddr; } ;
struct ahd_softc {struct scb_data scb_data; } ;


 struct map_node* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct ahd_softc*,int ) ;
 int FUNC_3 (struct ahd_softc*,int ,int ) ;
 int FUNC_4 (struct ahd_softc*,int ,int ,int ) ;
 int FUNC_5 (struct map_node*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_6(struct ahd_softc *VAR_1)
{
 struct scb_data *VAR_2;

 VAR_2 = &VAR_1->scb_data;
 if (VAR_2 == ((void*)0))
  return;

 switch (VAR_2->init_level) {
 default:
 case 7:
 {
  struct map_node *VAR_3;

  while ((VAR_3 = FUNC_0(&VAR_2->sense_maps)) != ((void*)0)) {
   FUNC_1(&VAR_2->sense_maps, VAR_0);
   FUNC_3(VAR_1, VAR_2->sense_dmat,
       VAR_3->dmamap);
   FUNC_4(VAR_1, VAR_2->sense_dmat,
     VAR_3->vaddr, VAR_3->dmamap);
   FUNC_5(VAR_3);
  }
  FUNC_2(VAR_1, VAR_2->sense_dmat);
 }

 case 6:
 {
  struct map_node *VAR_4;

  while ((VAR_4 = FUNC_0(&VAR_2->sg_maps)) != ((void*)0)) {
   FUNC_1(&VAR_2->sg_maps, VAR_0);
   FUNC_3(VAR_1, VAR_2->sg_dmat,
       VAR_4->dmamap);
   FUNC_4(VAR_1, VAR_2->sg_dmat,
     VAR_4->vaddr, VAR_4->dmamap);
   FUNC_5(VAR_4);
  }
  FUNC_2(VAR_1, VAR_2->sg_dmat);
 }

 case 5:
 {
  struct map_node *VAR_5;

  while ((VAR_5 = FUNC_0(&VAR_2->hscb_maps)) != ((void*)0)) {
   FUNC_1(&VAR_2->hscb_maps, VAR_0);
   FUNC_3(VAR_1, VAR_2->hscb_dmat,
       VAR_5->dmamap);
   FUNC_4(VAR_1, VAR_2->hscb_dmat,
     VAR_5->vaddr, VAR_5->dmamap);
   FUNC_5(VAR_5);
  }
  FUNC_2(VAR_1, VAR_2->hscb_dmat);

 }
 case 4:
 case 3:
 case 2:
 case 1:
 case 0:
  break;
 }
}
