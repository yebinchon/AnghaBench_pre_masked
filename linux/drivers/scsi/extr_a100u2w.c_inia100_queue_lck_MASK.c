
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {void (* scsi_done ) (struct scsi_cmnd*) ;TYPE_2__* device; } ;
struct orc_scb {int dummy; } ;
struct orc_host {int dummy; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct orc_host*,struct orc_scb*,struct scsi_cmnd*) ;
 struct orc_scb* FUNC_1 (struct orc_host*) ;
 int FUNC_2 (struct orc_host*,struct orc_scb*) ;
 int FUNC_3 (struct orc_host*,struct orc_scb*) ;

__attribute__((used)) static int FUNC_4(struct scsi_cmnd * VAR_1, void (*VAR_2) (struct scsi_cmnd *))
{
 struct orc_scb *VAR_3;
 struct orc_host *VAR_4;

 VAR_4 = (struct orc_host *) VAR_1->device->host->hostdata;
 VAR_1->scsi_done = VAR_2;

 if ((VAR_3 = FUNC_1(VAR_4)) == ((void*)0))
  return VAR_0;

 if (FUNC_0(VAR_4, VAR_3, VAR_1)) {
  FUNC_3(VAR_4, VAR_3);
  return VAR_0;
 }
 FUNC_2(VAR_4, VAR_3);
 return 0;
}
