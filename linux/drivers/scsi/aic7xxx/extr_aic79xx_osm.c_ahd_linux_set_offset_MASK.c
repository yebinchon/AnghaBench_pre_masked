
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct scsi_target {scalar_t__ channel; int id; TYPE_1__ dev; } ;
struct ahd_tmode_tstate {int dummy; } ;
struct ahd_softc {int dummy; } ;
struct TYPE_4__ {unsigned int period; unsigned int ppr_options; } ;
struct ahd_initiator_tinfo {TYPE_2__ goal; } ;
struct ahd_devinfo {int dummy; } ;
struct Scsi_Host {int this_id; scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ahd_devinfo*,int ,int ,int ,scalar_t__,int ) ;
 int VAR_7 ;
 struct ahd_initiator_tinfo* FUNC_1 (struct ahd_softc*,scalar_t__,int ,int ,struct ahd_tmode_tstate**) ;
 int FUNC_2 (struct ahd_softc*,unsigned int*,unsigned int*,int ) ;
 int FUNC_3 (struct ahd_softc*,unsigned long*) ;
 int FUNC_4 (struct ahd_softc*) ;
 int FUNC_5 (struct ahd_softc*,struct ahd_devinfo*,unsigned int,int,unsigned int,int ,int ) ;
 int FUNC_6 (struct ahd_softc*,unsigned long*) ;
 struct Scsi_Host* FUNC_7 (int ) ;
 int FUNC_8 (char*,int ,int) ;

__attribute__((used)) static void FUNC_9(struct scsi_target *VAR_8, int VAR_9)
{
 struct Scsi_Host *VAR_10 = FUNC_7(VAR_8->dev.parent);
 struct ahd_softc *VAR_11 = *((struct ahd_softc **)VAR_10->hostdata);
 struct ahd_tmode_tstate *VAR_12;
 struct ahd_initiator_tinfo *VAR_13
  = FUNC_1(VAR_11,
          VAR_8->channel + 'A',
          VAR_10->this_id, VAR_8->id, &VAR_12);
 struct ahd_devinfo VAR_14;
 unsigned int VAR_15 = 0;
 unsigned int VAR_16 = 0;
 unsigned int VAR_17 = VAR_15 & VAR_5;
 unsigned long VAR_18;






 FUNC_0(&VAR_14, VAR_10->this_id, VAR_8->id, 0,
       VAR_8->channel + 'A', VAR_6);
 if (VAR_9 != 0) {
  VAR_16 = VAR_13->goal.period;
  VAR_15 = VAR_13->goal.ppr_options;
  FUNC_2(VAR_11, &VAR_16, &VAR_15,
      VAR_17 ? VAR_1 : VAR_2);
 }

 FUNC_3(VAR_11, &VAR_18);
 FUNC_5(VAR_11, &VAR_14, VAR_16, VAR_9, VAR_15,
    VAR_3, VAR_4);
 FUNC_6(VAR_11, &VAR_18);
}
