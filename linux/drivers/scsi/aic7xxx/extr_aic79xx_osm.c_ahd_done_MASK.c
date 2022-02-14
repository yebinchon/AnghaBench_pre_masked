
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef size_t u_int ;
struct scsi_cmnd {int result; scalar_t__ underflow; size_t cmd_len; int device; int * cmnd; scalar_t__* sense_buffer; } ;
struct scb {int flags; struct scsi_cmnd* io_ctx; TYPE_1__* platform_data; } ;
struct ahd_softc {TYPE_2__* platform_data; } ;
struct ahd_linux_device {scalar_t__ active; int openings; scalar_t__ tag_success_count; scalar_t__ maxtags; scalar_t__ commands_since_idle_or_otag; int qfrozen; } ;
struct TYPE_4__ {scalar_t__ eh_done; } ;
struct TYPE_3__ {struct ahd_linux_device* dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct scb*,int ) ;
 int VAR_11 ;
 int FUNC_1 (struct scb*) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (struct ahd_softc*) ;
 int FUNC_3 (struct ahd_softc*,struct scb*) ;
 scalar_t__ FUNC_4 (struct scb*) ;
 scalar_t__ FUNC_5 (struct scb*) ;
 scalar_t__ FUNC_6 (struct scb*) ;
 scalar_t__ FUNC_7 (struct scb*) ;
 int FUNC_8 (struct ahd_softc*,int ,struct scb*) ;
 int FUNC_9 (struct ahd_softc*,struct scsi_cmnd*) ;
 int FUNC_10 (struct ahd_softc*,struct scb*) ;
 int FUNC_11 (struct ahd_softc*,struct scb*) ;
 int FUNC_12 (struct scb*,scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (char*) ;
 int VAR_16 ;
 int FUNC_15 (char*,...) ;

void
FUNC_16(struct ahd_softc *VAR_17, struct scb *VAR_18)
{
 struct scsi_cmnd *VAR_19;
 struct ahd_linux_device *VAR_20;

 if ((VAR_18->flags & VAR_11) == 0) {
  FUNC_15("SCB %d done'd twice\n", FUNC_1(VAR_18));
  FUNC_2(VAR_17);
  FUNC_14("Stopping for safety");
 }
 FUNC_0(VAR_18, VAR_16);
 VAR_19 = VAR_18->io_ctx;
 VAR_20 = VAR_18->platform_data->dev;
 VAR_20->active--;
 VAR_20->openings++;
 if ((VAR_19->result & (VAR_5 << 16)) != 0) {
  VAR_19->result &= ~(VAR_5 << 16);
  VAR_20->qfrozen--;
 }
 FUNC_10(VAR_17, VAR_18);







 VAR_19->sense_buffer[0] = 0;
 if (FUNC_6(VAR_18) == VAR_8) {
  uint32_t VAR_21;

  VAR_21 =
      FUNC_7(VAR_18) - FUNC_4(VAR_18);
  if ((VAR_18->flags & VAR_13) != 0) {






   FUNC_12(VAR_18, VAR_10);
  } else {
   FUNC_12(VAR_18, VAR_7);
  }
 } else if (FUNC_6(VAR_18) == VAR_9) {
  FUNC_8(VAR_17, VAR_19->device, VAR_18);
 }

 if (VAR_20->openings == 1
  && FUNC_6(VAR_18) == VAR_7
  && FUNC_5(VAR_18) != VAR_14)
  VAR_20->tag_success_count++;






 if ((VAR_20->openings + VAR_20->active) < VAR_20->maxtags
  && VAR_20->tag_success_count > VAR_1) {
  VAR_20->tag_success_count = 0;
  VAR_20->openings++;
 }

 if (VAR_20->active == 0)
  VAR_20->commands_since_idle_or_otag = 0;

 if ((VAR_18->flags & VAR_12) != 0) {
  FUNC_15("Recovery SCB completes\n");
  if (FUNC_6(VAR_18) == VAR_2
   || FUNC_6(VAR_18) == VAR_6)
   FUNC_12(VAR_18, VAR_3);

  if (VAR_17->platform_data->eh_done)
   FUNC_13(VAR_17->platform_data->eh_done);
 }

 FUNC_3(VAR_17, VAR_18);
 FUNC_9(VAR_17, VAR_19);
}
