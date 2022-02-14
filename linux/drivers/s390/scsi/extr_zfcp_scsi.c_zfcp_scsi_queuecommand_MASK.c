
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_scsi_dev {TYPE_1__* port; int status; } ;
struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;int * host_scribble; int device; } ;
struct fc_rport {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct fc_rport*) ;
 int FUNC_2 (int ) ;
 struct zfcp_scsi_dev* FUNC_3 (int ) ;
 struct fc_rport* FUNC_4 (int ) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct scsi_cmnd*) ;
 int FUNC_8 (struct scsi_cmnd*) ;
 int FUNC_9 (struct scsi_cmnd*,int ) ;

__attribute__((used)) static
int FUNC_10(struct Scsi_Host *VAR_7, struct scsi_cmnd *VAR_8)
{
 struct zfcp_scsi_dev *VAR_9 = FUNC_3(VAR_8->device);
 struct fc_rport *VAR_10 = FUNC_4(FUNC_2(VAR_8->device));
 int VAR_11, VAR_12, VAR_13;


 VAR_8->result = 0;
 VAR_8->host_scribble = ((void*)0);

 VAR_12 = FUNC_1(VAR_10);
 if (FUNC_6(VAR_12)) {
  VAR_8->result = VAR_12;
  FUNC_7(VAR_8);
  VAR_8->scsi_done(VAR_8);
  return 0;
 }

 VAR_11 = FUNC_0(&VAR_9->status);
 if (FUNC_6(VAR_11 & VAR_5) &&
       !(FUNC_0(&VAR_9->port->status) &
         VAR_5)) {


  FUNC_9(VAR_8, VAR_0);
  return 0;
 }

 if (FUNC_6(!(VAR_11 & VAR_6))) {




  FUNC_9(VAR_8, VAR_1);
  return 0;
 }

 VAR_13 = FUNC_8(VAR_8);
 if (FUNC_6(VAR_13 == -VAR_2))
  return VAR_3;
 else if (FUNC_6(VAR_13 < 0))
  return VAR_4;

 return VAR_13;
}
