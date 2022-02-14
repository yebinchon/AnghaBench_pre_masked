
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_7__ {size_t mode; int recon_tmo; TYPE_2__* dev; } ;
typedef TYPE_3__ ppa_struct ;
struct TYPE_6__ {TYPE_1__* port; } ;
struct TYPE_5__ {int name; } ;


 int * VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_2, struct Scsi_Host *VAR_3)
{
 ppa_struct *VAR_4 = FUNC_0(VAR_3);

 FUNC_1(VAR_2, "Version : %s\n", VAR_1);
 FUNC_1(VAR_2, "Parport : %s\n", VAR_4->dev->port->name);
 FUNC_1(VAR_2, "Mode    : %s\n", VAR_0[VAR_4->mode]);



 return 0;
}
