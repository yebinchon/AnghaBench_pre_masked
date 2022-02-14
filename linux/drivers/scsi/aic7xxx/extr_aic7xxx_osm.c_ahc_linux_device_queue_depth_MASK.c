
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct scsi_device {scalar_t__ tagged_supported; TYPE_2__* sdev_target; int lun; TYPE_1__* host; } ;
struct ahc_softc {int our_id_b; int our_id; } ;
struct ahc_devinfo {int lun; int target; int channel; } ;
struct TYPE_4__ {scalar_t__ channel; int id; } ;
struct TYPE_3__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ahc_devinfo*,int ,int ,int ,char,int ) ;
 scalar_t__ FUNC_1 (struct ahc_softc*,struct ahc_devinfo*) ;
 int FUNC_2 (struct ahc_softc*,struct scsi_device*,struct ahc_devinfo*,int ) ;
 int FUNC_3 (struct ahc_softc*,struct ahc_devinfo*) ;
 int FUNC_4 (struct ahc_softc*,int ,int ,int ,int ) ;
 int FUNC_5 (char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(struct scsi_device *VAR_4)
{
 struct ahc_devinfo VAR_5;
 u_int VAR_6;
 struct ahc_softc *VAR_7 = *((struct ahc_softc **)VAR_4->host->hostdata);

 FUNC_0(&VAR_5,
       VAR_4->sdev_target->channel == 0
     ? VAR_7->our_id : VAR_7->our_id_b,
       VAR_4->sdev_target->id, VAR_4->lun,
       VAR_4->sdev_target->channel == 0 ? 'A' : 'B',
       VAR_3);
 VAR_6 = FUNC_1(VAR_7, &VAR_5);
 if (VAR_6 != 0 && VAR_4->tagged_supported != 0) {

  FUNC_2(VAR_7, VAR_4, &VAR_5, VAR_2);
  FUNC_4(VAR_7, VAR_5.channel, VAR_5.target,
          VAR_5.lun, VAR_0);
  FUNC_3(VAR_7, &VAR_5);
  FUNC_5("Tagged Queuing enabled.  Depth %d\n", VAR_6);
 } else {
  FUNC_2(VAR_7, VAR_4, &VAR_5, VAR_1);
  FUNC_4(VAR_7, VAR_5.channel, VAR_5.target,
          VAR_5.lun, VAR_0);
 }
}
