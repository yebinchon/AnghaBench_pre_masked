
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_int ;
struct scb_platform_data {int dummy; } ;
struct scb_data {int numscbs; int scbs_left; int sgs_left; int sense_left; int sense_dmat; int sense_maps; int sg_dmat; int sg_maps; int hscb_dmat; int hscb_maps; } ;
struct scb {TYPE_1__* col_scb; struct hardware_scb* hscb; int flags; struct ahd_softc* ahd_softc; void* sg_list_busaddr; void* sense_busaddr; int * sense_data; int * sg_list; struct scb* sense_map; struct scb* sg_map; struct scb* hscb_map; struct scb_platform_data* platform_data; void* physaddr; int * vaddr; int dmamap; } ;
struct map_node {TYPE_1__* col_scb; struct hardware_scb* hscb; int flags; struct ahd_softc* ahd_softc; void* sg_list_busaddr; void* sense_busaddr; int * sense_data; int * sg_list; struct map_node* sense_map; struct map_node* sg_map; struct map_node* hscb_map; struct scb_platform_data* platform_data; void* physaddr; int * vaddr; int dmamap; } ;
struct hardware_scb {int tag; int hscb_busaddr; } ;
struct ahd_softc {int flags; struct scb_data scb_data; } ;
struct ahd_dma_seg {int dummy; } ;
struct ahd_dma64_seg {int dummy; } ;
typedef void* dma_addr_t ;
struct TYPE_2__ {struct scb* col_scb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct scb* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct scb*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct ahd_softc*,int ,int ,int *,int,int ,void**,int ) ;
 scalar_t__ FUNC_3 (struct ahd_softc*,int ,void**,int ,int *) ;
 TYPE_1__* FUNC_4 (struct ahd_softc*,int) ;
 int FUNC_5 (struct ahd_softc*,struct scb*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (struct ahd_softc*) ;
 int FUNC_9 (struct ahd_softc*) ;
 int FUNC_10 (struct scb*) ;
 void* FUNC_11 (int,int ) ;
 int VAR_10 ;
 int FUNC_12 (struct hardware_scb*,int ,int) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static void
FUNC_15(struct ahd_softc *VAR_11)
{
 struct scb_data *VAR_12;
 struct scb *VAR_13;
 struct hardware_scb *VAR_14;
 struct map_node *VAR_15;
 struct map_node *VAR_16;
 struct map_node *VAR_17;
 uint8_t *VAR_18;
 uint8_t *VAR_19;
 dma_addr_t VAR_20;
 dma_addr_t VAR_21;
 dma_addr_t VAR_22;
 int VAR_23;
 int VAR_24;

 VAR_12 = &VAR_11->scb_data;
 if (VAR_12->numscbs >= VAR_1)

  return;

 if (VAR_12->scbs_left != 0) {
  int VAR_25;

  VAR_25 = (VAR_6 / sizeof(*VAR_14)) - VAR_12->scbs_left;
  VAR_15 = FUNC_0(&VAR_12->hscb_maps);
  VAR_14 = &((struct hardware_scb *)VAR_15->vaddr)[VAR_25];
  VAR_20 = VAR_15->physaddr + (VAR_25 * sizeof(*VAR_14));
 } else {
  VAR_15 = FUNC_11(sizeof(*VAR_15), VAR_5);

  if (VAR_15 == ((void*)0))
   return;


  if (FUNC_3(VAR_11, VAR_12->hscb_dmat,
         (void **)&VAR_15->vaddr,
         VAR_4, &VAR_15->dmamap) != 0) {
   FUNC_10(VAR_15);
   return;
  }

  FUNC_1(&VAR_12->hscb_maps, VAR_15, VAR_10);

  FUNC_2(VAR_11, VAR_12->hscb_dmat, VAR_15->dmamap,
    VAR_15->vaddr, VAR_6, VAR_9,
    &VAR_15->physaddr, 0);

  VAR_14 = (struct hardware_scb *)VAR_15->vaddr;
  VAR_20 = VAR_15->physaddr;
  VAR_12->scbs_left = VAR_6 / sizeof(*VAR_14);
 }

 if (VAR_12->sgs_left != 0) {
  int VAR_26;

  VAR_26 = ((FUNC_8(VAR_11) / FUNC_9(VAR_11))
         - VAR_12->sgs_left) * FUNC_9(VAR_11);
  VAR_16 = FUNC_0(&VAR_12->sg_maps);
  VAR_18 = VAR_16->vaddr + VAR_26;
  VAR_21 = VAR_16->physaddr + VAR_26;
 } else {
  VAR_16 = FUNC_11(sizeof(*VAR_16), VAR_5);

  if (VAR_16 == ((void*)0))
   return;


  if (FUNC_3(VAR_11, VAR_12->sg_dmat,
         (void **)&VAR_16->vaddr,
         VAR_4, &VAR_16->dmamap) != 0) {
   FUNC_10(VAR_16);
   return;
  }

  FUNC_1(&VAR_12->sg_maps, VAR_16, VAR_10);

  FUNC_2(VAR_11, VAR_12->sg_dmat, VAR_16->dmamap,
    VAR_16->vaddr, FUNC_8(VAR_11),
    VAR_9, &VAR_16->physaddr, 0);

  VAR_18 = VAR_16->vaddr;
  VAR_21 = VAR_16->physaddr;
  VAR_12->sgs_left =
      FUNC_8(VAR_11) / FUNC_9(VAR_11);




 }

 if (VAR_12->sense_left != 0) {
  int VAR_27;

  VAR_27 = VAR_6 - (VAR_2 * VAR_12->sense_left);
  VAR_17 = FUNC_0(&VAR_12->sense_maps);
  VAR_19 = VAR_17->vaddr + VAR_27;
  VAR_22 = VAR_17->physaddr + VAR_27;
 } else {
  VAR_17 = FUNC_11(sizeof(*VAR_17), VAR_5);

  if (VAR_17 == ((void*)0))
   return;


  if (FUNC_3(VAR_11, VAR_12->sense_dmat,
         (void **)&VAR_17->vaddr,
         VAR_4, &VAR_17->dmamap) != 0) {
   FUNC_10(VAR_17);
   return;
  }

  FUNC_1(&VAR_12->sense_maps, VAR_17, VAR_10);

  FUNC_2(VAR_11, VAR_12->sense_dmat, VAR_17->dmamap,
    VAR_17->vaddr, VAR_6, VAR_9,
    &VAR_17->physaddr, 0);

  VAR_19 = VAR_17->vaddr;
  VAR_22 = VAR_17->physaddr;
  VAR_12->sense_left = VAR_6 / VAR_2;




 }

 VAR_23 = FUNC_13(VAR_12->sense_left, VAR_12->scbs_left);
 VAR_23 = FUNC_13(VAR_23, VAR_12->sgs_left);
 VAR_23 = FUNC_13(VAR_23, (VAR_1 - VAR_12->numscbs));
 for (VAR_24 = 0; VAR_24 < VAR_23; VAR_24++) {
  struct scb_platform_data *VAR_28;
  u_int VAR_29;

  VAR_13 = FUNC_11(sizeof(*VAR_13), VAR_5);
  if (VAR_13 == ((void*)0))
   break;

  VAR_28 = FUNC_11(sizeof(*VAR_28), VAR_5);
  if (VAR_28 == ((void*)0)) {
   FUNC_10(VAR_13);
   break;
  }
  VAR_13->platform_data = VAR_28;
  VAR_13->hscb_map = VAR_15;
  VAR_13->sg_map = VAR_16;
  VAR_13->sense_map = VAR_17;
  VAR_13->sg_list = VAR_18;
  VAR_13->sense_data = VAR_19;
  VAR_13->sense_busaddr = VAR_22;
  FUNC_12(VAR_14, 0, sizeof(*VAR_14));
  VAR_13->hscb = VAR_14;
  VAR_14->hscb_busaddr = FUNC_7(VAR_20);





  VAR_13->sg_list_busaddr = VAR_21;
  if ((VAR_11->flags & VAR_0) != 0)
   VAR_13->sg_list_busaddr
       += sizeof(struct ahd_dma64_seg);
  else
   VAR_13->sg_list_busaddr += sizeof(struct ahd_dma_seg);
  VAR_13->ahd_softc = VAR_11;
  VAR_13->flags = VAR_7;
  VAR_13->hscb->tag = FUNC_6(VAR_12->numscbs);
  VAR_29 = VAR_12->numscbs ^ 0x100;
  VAR_13->col_scb = FUNC_4(VAR_11, VAR_29);
  if (VAR_13->col_scb != ((void*)0))
   VAR_13->col_scb->col_scb = VAR_13;
  FUNC_5(VAR_11, VAR_13);
  VAR_14++;
  VAR_20 += sizeof(*VAR_14);
  VAR_18 += FUNC_9(VAR_11);
  VAR_21 += FUNC_9(VAR_11);
  VAR_19 += VAR_2;
  VAR_22 += VAR_2;
  VAR_12->numscbs++;
  VAR_12->sense_left--;
  VAR_12->scbs_left--;
  VAR_12->sgs_left--;
 }
}
