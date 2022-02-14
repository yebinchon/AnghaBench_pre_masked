
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct ahc_softc {int dummy; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ahc_softc*,unsigned long*) ;
 int FUNC_1 (struct ahc_softc*) ;
 int FUNC_2 (struct ahc_softc*,scalar_t__,int ) ;
 int FUNC_3 (struct ahc_softc*,unsigned long*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (char*,int ,int) ;
 scalar_t__ FUNC_5 (struct scsi_cmnd*) ;

__attribute__((used)) static int
FUNC_6(struct scsi_cmnd *VAR_3)
{
 struct ahc_softc *VAR_4;
 int VAR_5;
 unsigned long VAR_6;

 VAR_4 = *(struct ahc_softc **)VAR_3->device->host->hostdata;

 FUNC_0(VAR_4, &VAR_6);
 VAR_5 = FUNC_2(VAR_4, FUNC_5(VAR_3) + 'A',
                        VAR_1);
 FUNC_3(VAR_4, &VAR_6);

 if (VAR_2)
  FUNC_4("%s: SCSI bus reset delivered. "
         "%d SCBs aborted.\n", FUNC_1(VAR_4), VAR_5);

 return VAR_0;
}
