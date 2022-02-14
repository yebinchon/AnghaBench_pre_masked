
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct scsi_target {scalar_t__ channel; int id; TYPE_1__ dev; } ;
struct ahd_tmode_tstate {int dummy; } ;
struct ahd_softc {int features; } ;
struct TYPE_4__ {unsigned int ppr_options; unsigned int period; int offset; } ;
struct ahd_initiator_tinfo {TYPE_2__ goal; } ;
struct ahd_devinfo {int dummy; } ;
struct Scsi_Host {int this_id; scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ahd_devinfo*,int ,int ,int ,scalar_t__,int ) ;
 int VAR_9 ;
 struct ahd_initiator_tinfo* FUNC_1 (struct ahd_softc*,scalar_t__,int ,int ,struct ahd_tmode_tstate**) ;
 int FUNC_2 (struct ahd_softc*,unsigned int*,unsigned int*,int ) ;
 int FUNC_3 (struct ahd_softc*,unsigned long*) ;
 int FUNC_4 (struct ahd_softc*) ;
 int FUNC_5 (struct ahd_softc*,struct ahd_devinfo*,unsigned int,int ,unsigned int,int ,int ) ;
 int FUNC_6 (struct ahd_softc*,unsigned long*) ;
 struct Scsi_Host* FUNC_7 (int ) ;
 int FUNC_8 (char*,int ,...) ;
 scalar_t__ FUNC_9 (struct scsi_target*) ;

__attribute__((used)) static void FUNC_10(struct scsi_target *VAR_10, int VAR_11)
{
 struct Scsi_Host *VAR_12 = FUNC_7(VAR_10->dev.parent);
 struct ahd_softc *VAR_13 = *((struct ahd_softc **)VAR_12->hostdata);
 struct ahd_tmode_tstate *VAR_14;
 struct ahd_initiator_tinfo *VAR_15
  = FUNC_1(VAR_13,
          VAR_10->channel + 'A',
          VAR_12->this_id, VAR_10->id, &VAR_14);
 struct ahd_devinfo VAR_16;
 unsigned int VAR_17 = VAR_15->goal.ppr_options
  & ~VAR_7;
 unsigned int VAR_18 = VAR_15->goal.period;
 unsigned int VAR_19 = VAR_17 & VAR_6;
 unsigned long VAR_20;

 if ((VAR_13->features & VAR_0) == 0) {




  return;
 }







 if (VAR_11 && FUNC_9(VAR_10))
  VAR_17 |= VAR_7;

 FUNC_0(&VAR_16, VAR_12->this_id, VAR_10->id, 0,
       VAR_10->channel + 'A', VAR_8);
 FUNC_2(VAR_13, &VAR_18, &VAR_17,
     VAR_19 ? VAR_2 : VAR_3);

 FUNC_3(VAR_13, &VAR_20);
 FUNC_5(VAR_13, &VAR_16, VAR_18, VAR_15->goal.offset,
    VAR_17, VAR_4, VAR_5);
 FUNC_6(VAR_13, &VAR_20);
}
