
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;
struct scb {struct scsi_cmnd* io_ctx; } ;
struct ahc_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ahc_softc*,struct scb*,int ) ;
 int FUNC_1 (struct scsi_cmnd*) ;

__attribute__((used)) static void
FUNC_2(struct ahc_softc *VAR_1, struct scb *VAR_2)
{
 struct scsi_cmnd *VAR_3;

 VAR_3 = VAR_2->io_ctx;
 FUNC_0(VAR_1, VAR_2, VAR_0);

 FUNC_1(VAR_3);
}
