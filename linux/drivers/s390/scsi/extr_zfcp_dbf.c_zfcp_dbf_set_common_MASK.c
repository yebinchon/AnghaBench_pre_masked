
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_port {int d_id; int wwpn; int status; } ;
struct zfcp_dbf_rec {int lun; void* lun_status; int d_id; int wwpn; void* port_status; void* adapter_status; } ;
struct zfcp_adapter {int status; } ;
struct scsi_device {int dummy; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 void* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (struct scsi_device*) ;

__attribute__((used)) static void FUNC_3(struct zfcp_dbf_rec *VAR_1,
    struct zfcp_adapter *VAR_2,
    struct zfcp_port *VAR_3,
    struct scsi_device *VAR_4)
{
 VAR_1->adapter_status = FUNC_0(&VAR_2->status);
 if (VAR_3) {
  VAR_1->port_status = FUNC_0(&VAR_3->status);
  VAR_1->wwpn = VAR_3->wwpn;
  VAR_1->d_id = VAR_3->d_id;
 }
 if (VAR_4) {
  VAR_1->lun_status = FUNC_0(&FUNC_1(VAR_4)->status);
  VAR_1->lun = FUNC_2(VAR_4);
 } else
  VAR_1->lun = VAR_0;
}
