
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_adapter {int adapter_features; TYPE_1__* qdio; int status; struct Scsi_Host* scsi_host; } ;
struct Scsi_Host {int sg_prot_tablesize; int sg_tablesize; int max_sectors; } ;
struct TYPE_2__ {int max_sbale_per_req; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_0 (int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct Scsi_Host*,int ) ;
 int FUNC_2 (struct Scsi_Host*,unsigned int) ;
 scalar_t__ VAR_7 ;

void FUNC_3(struct zfcp_adapter *VAR_8)
{
 unsigned int VAR_9 = 0;
 unsigned int VAR_10;
 struct Scsi_Host *VAR_11 = VAR_8->scsi_host;

 VAR_10 = FUNC_0(&VAR_8->status) &
     VAR_5;

 if ((VAR_6 || VAR_7) &&
     VAR_8->adapter_features & VAR_0)
  VAR_9 |= VAR_2;

 if (VAR_7 && VAR_10 &&
     VAR_8->adapter_features & VAR_1) {
  VAR_9 |= VAR_4;
  FUNC_1(VAR_11, VAR_3);
  VAR_11->sg_prot_tablesize = VAR_8->qdio->max_sbale_per_req / 2;
  VAR_11->sg_tablesize = VAR_8->qdio->max_sbale_per_req / 2;
  VAR_11->max_sectors = VAR_11->sg_tablesize * 8;
 }

 FUNC_2(VAR_11, VAR_9);
}
