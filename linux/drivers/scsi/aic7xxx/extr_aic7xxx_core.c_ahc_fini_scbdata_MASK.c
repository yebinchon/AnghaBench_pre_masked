
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_map_node {int sg_dmamap; int sg_vaddr; } ;
struct scb_data {int init_level; struct sg_map_node* scbarray; int hscb_dmat; int hscb_dmamap; int hscbs; int sense_dmat; int sense_dmamap; int sense; int sg_dmat; int sg_maps; } ;
struct ahc_softc {struct scb_data* scb_data; } ;


 struct sg_map_node* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct ahc_softc*,int ) ;
 int FUNC_3 (struct ahc_softc*,int ,int ) ;
 int FUNC_4 (struct ahc_softc*,int ,int ) ;
 int FUNC_5 (struct ahc_softc*,int ,int ,int ) ;
 int FUNC_6 (struct sg_map_node*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_7(struct ahc_softc *VAR_1)
{
 struct scb_data *VAR_2;

 VAR_2 = VAR_1->scb_data;
 if (VAR_2 == ((void*)0))
  return;

 switch (VAR_2->init_level) {
 default:
 case 7:
 {
  struct sg_map_node *VAR_3;

  while ((VAR_3 = FUNC_0(&VAR_2->sg_maps))!= ((void*)0)) {
   FUNC_1(&VAR_2->sg_maps, VAR_0);
   FUNC_4(VAR_1, VAR_2->sg_dmat,
       VAR_3->sg_dmamap);
   FUNC_5(VAR_1, VAR_2->sg_dmat,
     VAR_3->sg_vaddr,
     VAR_3->sg_dmamap);
   FUNC_6(VAR_3);
  }
  FUNC_2(VAR_1, VAR_2->sg_dmat);
 }

 case 6:
  FUNC_4(VAR_1, VAR_2->sense_dmat,
      VAR_2->sense_dmamap);

 case 5:
  FUNC_5(VAR_1, VAR_2->sense_dmat, VAR_2->sense,
    VAR_2->sense_dmamap);
  FUNC_3(VAR_1, VAR_2->sense_dmat,
       VAR_2->sense_dmamap);

 case 4:
  FUNC_2(VAR_1, VAR_2->sense_dmat);

 case 3:
  FUNC_4(VAR_1, VAR_2->hscb_dmat,
      VAR_2->hscb_dmamap);

 case 2:
  FUNC_5(VAR_1, VAR_2->hscb_dmat, VAR_2->hscbs,
    VAR_2->hscb_dmamap);
  FUNC_3(VAR_1, VAR_2->hscb_dmat,
       VAR_2->hscb_dmamap);

 case 1:
  FUNC_2(VAR_1, VAR_2->hscb_dmat);
  break;
 case 0:
  break;
 }
 if (VAR_2->scbarray != ((void*)0))
  FUNC_6(VAR_2->scbarray);
}
