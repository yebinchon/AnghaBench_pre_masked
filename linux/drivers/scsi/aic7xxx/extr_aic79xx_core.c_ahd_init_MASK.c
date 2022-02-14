
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int u_int ;
struct target_cmd {int dummy; } ;
struct hardware_scb {int hscb_busaddr; } ;
struct TYPE_2__ {scalar_t__ physaddr; scalar_t__ vaddr; int dmamap; } ;
struct ahd_softc {int flags; int unit; int features; int bugs; int* overrun_buf; int stat_timer; int init_level; struct hardware_scb* next_queued_hscb; TYPE_1__ shared_data_map; TYPE_1__* next_queued_hscb_map; struct target_cmd* targetcmds; struct ahd_completion* qoutfifo; int shared_data_dmat; int parent_dmat; int * saved_stack; int stack_size; } ;
struct ahd_completion {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 (struct ahd_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

 int VAR_23 ;


 int VAR_24 ;

 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int FUNC_1 (struct ahd_softc*) ;
 int VAR_28 ;
 scalar_t__ FUNC_2 (struct ahd_softc*,int ,int,scalar_t__,scalar_t__,int ,int *,int *,size_t,int,int ,int ,int *) ;
 int VAR_29 ;
 int FUNC_3 (struct ahd_softc*,int ,int ,scalar_t__,size_t,int ,scalar_t__*,int ) ;
 scalar_t__ FUNC_4 (struct ahd_softc*,int ,void**,int ,int *) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (struct ahd_softc*) ;
 int FUNC_7 (struct ahd_softc*) ;
 int FUNC_8 (struct ahd_softc*) ;
 int FUNC_9 (struct ahd_softc*) ;
 int FUNC_10 (struct ahd_softc*,int ,int*) ;
 int FUNC_11 (struct ahd_softc*) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (struct ahd_softc*,int ,int ) ;
 int VAR_30 ;
 int * VAR_31 ;
 int * FUNC_14 (int ,int,int ) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*,int,...) ;
 int * VAR_32 ;

int
FUNC_17(struct ahd_softc *VAR_33)
{
 uint8_t *VAR_34;
 dma_addr_t VAR_35;
 size_t VAR_36;
 int VAR_37;
 int VAR_38;
 u_int VAR_39;
 uint8_t VAR_40;
 uint8_t VAR_41;

 FUNC_0(VAR_33, VAR_3, VAR_3);

 VAR_33->stack_size = FUNC_9(VAR_33);
 VAR_33->saved_stack = FUNC_14(VAR_33->stack_size, sizeof(uint16_t),
      VAR_26);
 if (VAR_33->saved_stack == ((void*)0))
  return (VAR_19);





 if (sizeof(struct hardware_scb) != 64)
  FUNC_15("Hardware SCB size is incorrect");
 VAR_33->flags |= VAR_2;




 if ((VAR_13 & (0x1 << VAR_33->unit)) == 0)
  VAR_33->features &= ~VAR_11;

 VAR_33->init_level++;
 VAR_36 = VAR_7 * sizeof(*VAR_33->qoutfifo)
    + sizeof(struct hardware_scb);
 if ((VAR_33->features & VAR_11) != 0)
  VAR_36 += VAR_12 * sizeof(struct target_cmd);
 if ((VAR_33->bugs & VAR_4) != 0)
  VAR_36 += VAR_27;
 if (FUNC_2(VAR_33, VAR_33->parent_dmat, 1,
                      VAR_16 + 1,
                     VAR_16,
                      VAR_15,
                    ((void*)0), ((void*)0),
          VAR_36,
                       1,
                      VAR_17,
                   0, &VAR_33->shared_data_dmat) != 0) {
  return (VAR_19);
 }

 VAR_33->init_level++;


 if (FUNC_4(VAR_33, VAR_33->shared_data_dmat,
        (void **)&VAR_33->shared_data_map.vaddr,
        VAR_14,
        &VAR_33->shared_data_map.dmamap) != 0) {
  return (VAR_19);
 }

 VAR_33->init_level++;


 FUNC_3(VAR_33, VAR_33->shared_data_dmat, VAR_33->shared_data_map.dmamap,
   VAR_33->shared_data_map.vaddr, VAR_36,
   VAR_29, &VAR_33->shared_data_map.physaddr,
            0);
 VAR_33->qoutfifo = (struct ahd_completion *)VAR_33->shared_data_map.vaddr;
 VAR_34 = (uint8_t *)&VAR_33->qoutfifo[VAR_5];
 VAR_35 = VAR_33->shared_data_map.physaddr
     + VAR_5*sizeof(struct ahd_completion);
 if ((VAR_33->features & VAR_11) != 0) {
  VAR_33->targetcmds = (struct target_cmd *)VAR_34;
  VAR_34 += VAR_12 * sizeof(struct target_cmd);
  VAR_35 += VAR_12 * sizeof(struct target_cmd);
 }

 if ((VAR_33->bugs & VAR_4) != 0) {
  VAR_33->overrun_buf = VAR_34;
  VAR_34 += VAR_27;
  VAR_35 += VAR_27;
 }
 VAR_33->next_queued_hscb = (struct hardware_scb *)VAR_34;
 VAR_33->next_queued_hscb_map = &VAR_33->shared_data_map;
 VAR_33->next_queued_hscb->hscb_busaddr = FUNC_5(VAR_35);

 VAR_33->init_level++;


 if (FUNC_6(VAR_33) != 0)
  return (VAR_19);

 if ((VAR_33->flags & VAR_2) == 0)
  VAR_33->flags &= ~VAR_6;





 FUNC_8(VAR_33);


 FUNC_1(VAR_33);

 FUNC_0(VAR_33, VAR_3, VAR_3);

 if ((VAR_33->flags & VAR_0) == 0)
  goto init_done;





 VAR_38 = FUNC_13(VAR_33, VAR_22,
       VAR_18);
 if (VAR_38 != 0) {
  FUNC_16("%s: current sensing timeout 1\n", FUNC_7(VAR_33));
  goto init_done;
 }
 for (VAR_37 = 20, VAR_41 = VAR_25;
      (VAR_41 & VAR_25) != 0 && VAR_37; VAR_37--) {
  VAR_38 = FUNC_10(VAR_33, VAR_21, &VAR_41);
  if (VAR_38 != 0) {
   FUNC_16("%s: current sensing timeout 2\n",
          FUNC_7(VAR_33));
   goto init_done;
  }
 }
 if (VAR_37 == 0) {
  FUNC_16("%s: Timedout during current-sensing test\n",
         FUNC_7(VAR_33));
  goto init_done;
 }


 VAR_38 = FUNC_10(VAR_33, VAR_20, &VAR_40);
 if (VAR_38 != 0) {
  FUNC_16("%s: current sensing timeout 3\n", FUNC_7(VAR_33));
  goto init_done;
 }


 FUNC_13(VAR_33, VAR_22, 0);







 VAR_39 = 0;
 for (VAR_37 = 0; VAR_37 < 4; VAR_37++, VAR_40 >>= VAR_24) {
  u_int VAR_42;

  VAR_42 = (VAR_40 & VAR_23);
  switch (VAR_42) {
  case 129:
  case 128:
   VAR_39++;

  case 131:
  case 130:
   if (VAR_39 == 0 && VAR_30 == 0)
    break;
   FUNC_16("%s: %s Channel %s\n", FUNC_7(VAR_33),
          VAR_31[VAR_37], VAR_32[VAR_42]);
   break;
  }
 }
 if (VAR_39) {
  FUNC_16("%s: WARNING. Termination is not configured correctly.\n"
         "%s: WARNING. SCSI bus operations may FAIL.\n",
         FUNC_7(VAR_33), FUNC_7(VAR_33));
 }
init_done:
 FUNC_11(VAR_33);
 FUNC_12(&VAR_33->stat_timer, VAR_10);
 return (0);
}
