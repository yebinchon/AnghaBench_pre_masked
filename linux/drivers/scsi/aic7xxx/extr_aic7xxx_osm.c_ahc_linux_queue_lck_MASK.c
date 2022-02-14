
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_cmnd {void (* scsi_done ) (struct scsi_cmnd*) ;int result; TYPE_3__* device; } ;
struct ahc_softc {TYPE_1__* platform_data; } ;
struct ahc_linux_device {int dummy; } ;
struct TYPE_6__ {TYPE_2__* host; } ;
struct TYPE_5__ {scalar_t__ hostdata; } ;
struct TYPE_4__ {scalar_t__ qfrozen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ahc_softc*,struct ahc_linux_device*,struct scsi_cmnd*) ;
 int FUNC_1 (struct ahc_softc*,unsigned long*) ;
 int FUNC_2 (struct ahc_softc*,unsigned long*) ;
 struct ahc_linux_device* FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_4(struct scsi_cmnd * VAR_2, void (*VAR_3) (struct scsi_cmnd *))
{
 struct ahc_softc *VAR_4;
 struct ahc_linux_device *VAR_5 = FUNC_3(VAR_2->device);
 int VAR_6 = VAR_1;
 unsigned long VAR_7;

 VAR_4 = *(struct ahc_softc **)VAR_2->device->host->hostdata;

 FUNC_1(VAR_4, &VAR_7);
 if (VAR_4->platform_data->qfrozen == 0) {
  VAR_2->scsi_done = VAR_3;
  VAR_2->result = VAR_0 << 16;
  VAR_6 = FUNC_0(VAR_4, VAR_5, VAR_2);
 }
 FUNC_2(VAR_4, &VAR_7);

 return VAR_6;
}
