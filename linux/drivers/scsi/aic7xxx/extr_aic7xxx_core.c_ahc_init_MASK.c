
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int u_int ;
struct target_cmd {scalar_t__ cmd_valid; } ;
struct scb {int dummy; } ;
struct hardware_scb {int dummy; } ;
struct ahc_tmode_tstate {scalar_t__ ultraenb; } ;
struct ahc_softc {int flags; int features; int our_id; int our_id_b; int unit; int user_discenable; int user_tagenable; int (* bus_chip_init ) (struct ahc_softc*) ;TYPE_1__* scb_data; int init_level; int * qoutfifo; int * qinfifo; struct target_cmd* targetcmds; scalar_t__ shared_data_busaddr; scalar_t__ dma_bug_buf; int shared_data_dmamap; int shared_data_dmat; int parent_dmat; } ;
struct TYPE_9__ {int protocol_version; int transport_version; } ;
struct TYPE_8__ {int protocol_version; int transport_version; } ;
struct TYPE_7__ {scalar_t__ period; int protocol_version; int transport_version; void* width; void* offset; int ppr_options; } ;
struct ahc_initiator_tinfo {TYPE_4__ curr; TYPE_3__ goal; TYPE_2__ user; } ;
struct ahc_dma_seg {int dummy; } ;
struct TYPE_10__ {scalar_t__ period; } ;
struct TYPE_6__ {scalar_t__ maxhscbs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
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
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 void* VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 void* VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int * FUNC_0 (struct ahc_softc*,int,char) ;
 int VAR_50 ;
 scalar_t__ FUNC_1 (struct ahc_softc*,int ,int,scalar_t__,scalar_t__,int ,int *,int *,size_t,int,int ,int ,int *) ;
 int VAR_51 ;
 int FUNC_2 (struct ahc_softc*,int ,int ,int *,size_t,int ,scalar_t__*,int ) ;
 scalar_t__ FUNC_3 (struct ahc_softc*,int ,void**,int ,int *) ;
 struct ahc_initiator_tinfo* FUNC_4 (struct ahc_softc*,char,int,int,struct ahc_tmode_tstate**) ;
 void* FUNC_5 (struct ahc_softc*,int,int) ;
 int FUNC_6 (struct ahc_softc*,int) ;
 scalar_t__ FUNC_7 (struct ahc_softc*) ;
 int FUNC_8 (struct ahc_softc*) ;
 int FUNC_9 (struct ahc_softc*,int ,int ) ;
 int FUNC_10 (struct ahc_softc*,int ) ;
 TYPE_5__* VAR_52 ;
 int FUNC_11 (struct ahc_initiator_tinfo*,int ,int) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (struct ahc_softc*) ;

int
FUNC_14(struct ahc_softc *VAR_53)
{
 int VAR_54;
 u_int VAR_55;
 u_int VAR_56;
 u_int VAR_57;
 u_int VAR_58;
 u_int VAR_59;
 size_t VAR_60;
 VAR_54 = 15;




 if ((VAR_53->flags & VAR_24) != 0)
  VAR_53->our_id = VAR_53->our_id_b = 7;




 VAR_53->flags |= VAR_4;




 if ((VAR_20 & (0x1 << VAR_53->unit)) == 0)
  VAR_53->features &= ~VAR_16;

 VAR_53->init_level++;
 VAR_60 = 2 * 256 * sizeof(uint8_t);
 if ((VAR_53->features & VAR_16) != 0)
  VAR_60 += VAR_19 * sizeof(struct target_cmd)
     + 1;
 if (FUNC_1(VAR_53, VAR_53->parent_dmat, 1,
                      VAR_30 + 1,
                     VAR_30,
                      VAR_29,
                    ((void*)0), ((void*)0),
          VAR_60,
                       1,
                      VAR_31,
                   0, &VAR_53->shared_data_dmat) != 0) {
  return (VAR_36);
 }

 VAR_53->init_level++;


 if (FUNC_3(VAR_53, VAR_53->shared_data_dmat,
        (void **)&VAR_53->qoutfifo,
        VAR_28, &VAR_53->shared_data_dmamap) != 0) {
  return (VAR_36);
 }

 VAR_53->init_level++;


 FUNC_2(VAR_53, VAR_53->shared_data_dmat, VAR_53->shared_data_dmamap,
   VAR_53->qoutfifo, VAR_60, VAR_51,
   &VAR_53->shared_data_busaddr, 0);

 if ((VAR_53->features & VAR_16) != 0) {
  VAR_53->targetcmds = (struct target_cmd *)VAR_53->qoutfifo;
  VAR_53->qoutfifo = (uint8_t *)&VAR_53->targetcmds[VAR_19];
  VAR_53->dma_bug_buf = VAR_53->shared_data_busaddr
     + VAR_60 - 1;

  for (VAR_55 = 0; VAR_55 < VAR_19; VAR_55++)
   VAR_53->targetcmds[VAR_55].cmd_valid = 0;
  FUNC_10(VAR_53, VAR_27);
  VAR_53->qoutfifo = (uint8_t *)&VAR_53->targetcmds[256];
 }
 VAR_53->qinfifo = &VAR_53->qoutfifo[256];

 VAR_53->init_level++;


 if (VAR_53->scb_data->maxhscbs == 0)
  if (FUNC_7(VAR_53) != 0)
   return (VAR_36);






 if (FUNC_0(VAR_53, VAR_53->our_id, 'A') == ((void*)0)) {
  FUNC_12("%s: unable to allocate ahc_tmode_tstate.  "
         "Failing attach\n", FUNC_8(VAR_53));
  return (VAR_36);
 }

 if ((VAR_53->features & VAR_21) != 0) {
  if (FUNC_0(VAR_53, VAR_53->our_id_b, 'B') == ((void*)0)) {
   FUNC_12("%s: unable to allocate ahc_tmode_tstate.  "
          "Failing attach\n", FUNC_8(VAR_53));
   return (VAR_36);
  }
 }

 if (VAR_53->scb_data->maxhscbs < VAR_9) {
  VAR_53->flags |= VAR_6;
 } else {
  VAR_53->flags &= ~VAR_6;
 }
 if (VAR_53->features & VAR_21) {
  VAR_56 = FUNC_6(VAR_53, VAR_42 + 1);
  if ((VAR_56 & VAR_41) != 0
   && (VAR_53->flags & VAR_4) != 0)
   VAR_53->flags |= VAR_8;
 }

 VAR_56 = FUNC_6(VAR_53, VAR_42);
 if ((VAR_56 & VAR_41) != 0
  && (VAR_53->flags & VAR_4) != 0)
  VAR_53->flags |= VAR_7;

 VAR_57 = 0;
 VAR_59 = VAR_26;


 if ((VAR_53->flags & VAR_24) != 0) {
  FUNC_12("%s: Host Adapter Bios disabled.  Using default SCSI "
   "device parameters\n", FUNC_8(VAR_53));
  VAR_53->flags |= VAR_2|VAR_3|
         VAR_17|VAR_18;
  VAR_58 = VAR_26;
  if ((VAR_53->features & VAR_22) != 0)
   VAR_57 = VAR_26;
 } else {
  VAR_58 = ~((FUNC_6(VAR_53, VAR_35 + 1) << 8)
      | FUNC_6(VAR_53, VAR_35));
  if ((VAR_53->features & (VAR_22|VAR_23)) != 0)
   VAR_57 = (FUNC_6(VAR_53, VAR_48 + 1) << 8)
          | FUNC_6(VAR_53, VAR_48);
 }

 if ((VAR_53->features & (VAR_25|VAR_21)) == 0)
  VAR_54 = 7;

 for (VAR_55 = 0; VAR_55 <= VAR_54; VAR_55++) {
  struct ahc_initiator_tinfo *VAR_61;
  struct ahc_tmode_tstate *VAR_62;
  u_int VAR_63;
  u_int VAR_64;
  char VAR_65;

  VAR_65 = 'A';
  VAR_63 = VAR_53->our_id;
  VAR_64 = VAR_55;
  if (VAR_55 > 7 && (VAR_53->features & VAR_21) != 0) {
   VAR_65 = 'B';
   VAR_63 = VAR_53->our_id_b;
   VAR_64 = VAR_55 % 8;
  }
  VAR_61 = FUNC_4(VAR_53, VAR_65, VAR_63,
         VAR_64, &VAR_62);

  FUNC_11(VAR_61, 0, sizeof(*VAR_61));
  if (VAR_53->flags & VAR_24) {
   if ((VAR_53->features & VAR_25) != 0)
    VAR_61->user.width = VAR_40;





   VAR_61->user.period = VAR_52->period;
   VAR_61->user.offset = VAR_37;
  } else {
   u_int VAR_66;
   uint16_t VAR_67;


   VAR_66 = FUNC_6(VAR_53, VAR_47 + VAR_55);
   VAR_67 = (0x01 << VAR_55);
   if ((VAR_53->features & VAR_23) != 0) {
    u_int VAR_68;
    u_int VAR_69;

    if ((VAR_66 & VAR_43) == 0x0F) {




     VAR_66 = (VAR_66 & VAR_44) >> 4
       | (VAR_57 & VAR_67)
        ? 0x08 : 0x0
       | (VAR_66 & VAR_49);
     VAR_68 = VAR_38;
    } else
     VAR_68 = FUNC_6(VAR_53, VAR_46 + VAR_55);
    if ((VAR_66 & ~VAR_49) == 0 && VAR_68 != 0)

     VAR_66 |= 0x1c;
    VAR_69 = VAR_15;
    if ((VAR_53->features & VAR_1) != 0)
     VAR_69 = VAR_12;
    VAR_61->user.period =
        FUNC_5(VAR_53, VAR_66, VAR_69);
    if (VAR_68 == 0)
     VAR_61->user.period = 0;
    else
     VAR_61->user.offset = VAR_37;
    if ((VAR_66 & VAR_45) <= 8
     && (VAR_53->features & VAR_1) != 0)
     VAR_61->user.ppr_options =
         VAR_39;
   } else if ((VAR_66 & VAR_43) != 0) {
    if ((VAR_66 & VAR_44) == 0x40
     && (VAR_57 & VAR_67) != 0) {

     VAR_66 &= ~VAR_44;
      VAR_57 &= ~VAR_67;
    }
    VAR_61->user.period =
        FUNC_5(VAR_53, VAR_66,
          (VAR_57 & VAR_67)
         ? VAR_14
         : VAR_13);
    if (VAR_61->user.period != 0)
     VAR_61->user.offset = VAR_37;
   }
   if (VAR_61->user.period == 0)
    VAR_61->user.offset = 0;
   if ((VAR_66 & VAR_49) != 0
    && (VAR_53->features & VAR_25) != 0)
    VAR_61->user.width = VAR_40;
   VAR_61->user.protocol_version = 4;
   if ((VAR_53->features & VAR_1) != 0)
    VAR_61->user.transport_version = 3;
   else
    VAR_61->user.transport_version = 2;
   VAR_61->goal.protocol_version = 2;
   VAR_61->goal.transport_version = 2;
   VAR_61->curr.protocol_version = 2;
   VAR_61->curr.transport_version = 2;
  }
  VAR_62->ultraenb = 0;
 }
 VAR_53->user_discenable = VAR_58;
 VAR_53->user_tagenable = VAR_59;

 return (VAR_53->bus_chip_init(VAR_53));
}
