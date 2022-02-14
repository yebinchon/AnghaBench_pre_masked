
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct fc_lport {int port_id; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {struct Scsi_Host* host; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct fc_lport*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct fc_lport*) ;
 int FUNC_2 (struct fc_lport*) ;
 unsigned long VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,struct Scsi_Host*,char*,int ) ;
 struct fc_lport* FUNC_5 (struct Scsi_Host*) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

int FUNC_7(struct scsi_cmnd *VAR_5)
{
 struct Scsi_Host *VAR_6 = VAR_5->device->host;
 struct fc_lport *VAR_7 = FUNC_5(VAR_6);
 unsigned long VAR_8;

 FUNC_0(VAR_7, "Resetting host\n");

 FUNC_2(VAR_7);
 VAR_8 = VAR_4 + VAR_1;
 while (!FUNC_1(VAR_7) && FUNC_6(VAR_4,
              VAR_8))
  FUNC_3(1000);

 if (FUNC_1(VAR_7)) {
  FUNC_4(VAR_2, VAR_6, "libfc: Host reset succeeded "
        "on port (%6.6x)\n", VAR_7->port_id);
  return VAR_3;
 } else {
  FUNC_4(VAR_2, VAR_6, "libfc: Host reset failed, "
        "port (%6.6x) is not ready.\n",
        VAR_7->port_id);
  return VAR_0;
 }
}
