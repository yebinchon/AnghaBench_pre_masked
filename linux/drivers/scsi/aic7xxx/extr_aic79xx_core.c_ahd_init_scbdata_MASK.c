
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scb_data {scalar_t__ maxhscbs; scalar_t__ numscbs; int init_level; int sense_dmat; int sg_dmat; int hscb_dmat; int sense_maps; int sg_maps; int hscb_maps; int any_dev_free_scb_list; int * free_scb_lists; int free_scbs; } ;
struct ahd_softc {int parent_dmat; struct scb_data scb_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ahd_softc*) ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (struct ahd_softc*,int ,int,scalar_t__,scalar_t__,int ,int *,int *,int ,int,int ,int ,int *) ;
 int FUNC_5 (struct ahd_softc*) ;
 int FUNC_6 (struct ahd_softc*) ;
 scalar_t__ FUNC_7 (struct ahd_softc*) ;
 int FUNC_8 (struct ahd_softc*) ;
 int FUNC_9 (char*,int ,...) ;

__attribute__((used)) static int
FUNC_10(struct ahd_softc *VAR_10)
{
 struct scb_data *VAR_11;
 int VAR_12;

 VAR_11 = &VAR_10->scb_data;
 FUNC_2(&VAR_11->free_scbs);
 for (VAR_12 = 0; VAR_12 < VAR_1 * VAR_0; VAR_12++)
  FUNC_0(&VAR_11->free_scb_lists[VAR_12]);
 FUNC_0(&VAR_11->any_dev_free_scb_list);
 FUNC_1(&VAR_11->hscb_maps);
 FUNC_1(&VAR_11->sg_maps);
 FUNC_1(&VAR_11->sense_maps);


 VAR_11->maxhscbs = FUNC_7(VAR_10);
 if (VAR_11->maxhscbs == 0) {
  FUNC_9("%s: No SCB space found\n", FUNC_6(VAR_10));
  return (VAR_7);
 }

 FUNC_5(VAR_10);
 if (FUNC_4(VAR_10, VAR_10->parent_dmat, 1,
                      VAR_4 + 1,
                     VAR_4,
                      VAR_3,
                    ((void*)0), ((void*)0),
          VAR_8, 1,
                      VAR_5,
                   0, &VAR_11->hscb_dmat) != 0) {
  goto error_exit;
 }

 VAR_11->init_level++;


 if (FUNC_4(VAR_10, VAR_10->parent_dmat, 8,
                      VAR_4 + 1,
                     VAR_4,
                      VAR_3,
                    ((void*)0), ((void*)0),
          FUNC_8(VAR_10), 1,
                      VAR_5,
                   0, &VAR_11->sg_dmat) != 0) {
  goto error_exit;
 }






 VAR_11->init_level++;


 if (FUNC_4(VAR_10, VAR_10->parent_dmat, 1,
                      VAR_4 + 1,
                     VAR_4,
                      VAR_3,
                    ((void*)0), ((void*)0),
          VAR_8, 1,
                      VAR_5,
                   0, &VAR_11->sense_dmat) != 0) {
  goto error_exit;
 }

 VAR_11->init_level++;


 FUNC_3(VAR_10);

 if (VAR_11->numscbs == 0) {
  FUNC_9("%s: ahd_init_scbdata - "
         "Unable to allocate initial scbs\n",
         FUNC_6(VAR_10));
  goto error_exit;
 }




 return (0);

error_exit:

 return (VAR_6);
}
