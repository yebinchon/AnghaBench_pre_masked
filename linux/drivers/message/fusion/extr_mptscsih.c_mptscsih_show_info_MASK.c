
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_6__ {int Word; } ;
struct TYPE_7__ {int NumberOfPorts; TYPE_1__ FWVersion; } ;
struct TYPE_9__ {int req_depth; TYPE_2__ facts; int prod_name; int name; } ;
struct TYPE_8__ {TYPE_4__* ioc; } ;
typedef TYPE_3__ MPT_SCSI_HOST ;
typedef TYPE_4__ MPT_ADAPTER ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,int ,...) ;
 TYPE_3__* FUNC_1 (struct Scsi_Host*) ;

int FUNC_2(struct seq_file *VAR_1, struct Scsi_Host *VAR_2)
{
 MPT_SCSI_HOST *VAR_3 = FUNC_1(VAR_2);
 MPT_ADAPTER *VAR_4 = VAR_3->ioc;

 FUNC_0(VAR_1, "%s: %s, ", VAR_4->name, VAR_4->prod_name);
 FUNC_0(VAR_1, "%s%08xh, ", VAR_0, VAR_4->facts.FWVersion.Word);
 FUNC_0(VAR_1, "Ports=%d, ", VAR_4->facts.NumberOfPorts);
 FUNC_0(VAR_1, "MaxQ=%d\n", VAR_4->req_depth);

 return 0;
}
