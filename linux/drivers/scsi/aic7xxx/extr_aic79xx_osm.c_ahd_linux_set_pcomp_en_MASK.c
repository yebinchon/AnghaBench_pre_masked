
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int parent; } ;
struct scsi_target {scalar_t__ channel; int id; TYPE_1__ dev; } ;
struct ahd_tmode_tstate {int dummy; } ;
struct ahd_softc {size_t unit; } ;
struct ahd_linux_iocell_opts {int precomp; } ;
struct TYPE_4__ {unsigned int ppr_options; unsigned int period; int offset; } ;
struct ahd_initiator_tinfo {TYPE_2__ goal; } ;
struct ahd_devinfo {int dummy; } ;
struct Scsi_Host {int this_id; scalar_t__ hostdata; } ;


 int FUNC_0 (struct ahd_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_1 (struct ahd_linux_iocell_opts*) ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct ahd_devinfo*,int ,int ,int ,scalar_t__,int ) ;
 int VAR_9 ;
 struct ahd_initiator_tinfo* FUNC_3 (struct ahd_softc*,scalar_t__,int ,int ,struct ahd_tmode_tstate**) ;
 int FUNC_4 (struct ahd_softc*,unsigned int*,unsigned int*,int ) ;
 int FUNC_5 (struct ahd_softc*,unsigned long*) ;
 int FUNC_6 (struct ahd_softc*) ;
 int FUNC_7 (struct ahd_softc*,struct ahd_devinfo*,unsigned int,int ,unsigned int,int ,int ) ;
 int FUNC_8 (struct ahd_softc*,unsigned long*) ;
 struct ahd_linux_iocell_opts* VAR_10 ;
 struct Scsi_Host* FUNC_9 (int ) ;
 int FUNC_10 (char*,int ,char*) ;
 scalar_t__ FUNC_11 (struct scsi_target*) ;

__attribute__((used)) static void FUNC_12(struct scsi_target *VAR_11, int VAR_12)
{
 struct Scsi_Host *VAR_13 = FUNC_9(VAR_11->dev.parent);
 struct ahd_softc *VAR_14 = *((struct ahd_softc **)VAR_13->hostdata);
 struct ahd_tmode_tstate *VAR_15;
 struct ahd_initiator_tinfo *VAR_16
  = FUNC_3(VAR_14,
          VAR_11->channel + 'A',
          VAR_13->this_id, VAR_11->id, &VAR_15);
 struct ahd_devinfo VAR_17;
 unsigned int VAR_18 = VAR_16->goal.ppr_options
  & ~VAR_7;
 unsigned int VAR_19 = VAR_16->goal.period;
 unsigned int VAR_20 = VAR_18 & VAR_6;
 unsigned long VAR_21;







 if (VAR_12 && FUNC_11(VAR_11)) {
  uint8_t VAR_22;

  if (VAR_14->unit < FUNC_1(VAR_10)) {
   const struct ahd_linux_iocell_opts *VAR_23;

   VAR_23 = &VAR_10[VAR_14->unit];
   VAR_22 = VAR_23->precomp;
  } else {
   VAR_22 = VAR_4;
  }
  VAR_18 |= VAR_7;
  FUNC_0(VAR_14, VAR_22);
 } else {
  FUNC_0(VAR_14, 0);
 }

 FUNC_2(&VAR_17, VAR_13->this_id, VAR_11->id, 0,
       VAR_11->channel + 'A', VAR_8);
 FUNC_4(VAR_14, &VAR_19, &VAR_18,
     VAR_20 ? VAR_1 : VAR_2);

 FUNC_5(VAR_14, &VAR_21);
 FUNC_7(VAR_14, &VAR_17, VAR_19, VAR_16->goal.offset,
    VAR_18, VAR_3, VAR_5);
 FUNC_8(VAR_14, &VAR_21);
}
