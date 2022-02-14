
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_host_template {int max_sectors; int sg_tablesize; } ;
struct TYPE_4__ {int io_max_sge; } ;
struct bfad_s {TYPE_2__ cfg_data; } ;
struct bfad_im_port_s {TYPE_1__* port; } ;
struct bfad_im_port_pointer {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_3__ {scalar_t__ pvb_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct scsi_host_template VAR_2 ;
 struct scsi_host_template VAR_3 ;
 int VAR_4 ;
 struct Scsi_Host* FUNC_0 (struct scsi_host_template*,int) ;

struct Scsi_Host *
FUNC_1(struct bfad_im_port_s *VAR_5, struct bfad_s *VAR_6)
{
 struct scsi_host_template *VAR_7;

 if (VAR_5->port->pvb_type == VAR_1)
  VAR_7 = &VAR_2;
 else
  VAR_7 = &VAR_3;

 if (VAR_4 != VAR_0 >> 1)
  VAR_7->max_sectors = VAR_4 << 1;

 VAR_7->sg_tablesize = VAR_6->cfg_data.io_max_sge;

 return FUNC_0(VAR_7, sizeof(struct bfad_im_port_pointer));
}
