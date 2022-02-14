
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scsi_cmnd {int retries; int * cmnd; TYPE_3__* request; TYPE_2__* device; } ;
struct mvumi_hba {TYPE_4__* instancet; } ;
struct TYPE_8__ {int (* reset_host ) (struct mvumi_hba*) ;} ;
struct TYPE_7__ {int tag; } ;
struct TYPE_6__ {TYPE_1__* host; } ;
struct TYPE_5__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct scsi_cmnd*,char*,int ,int ,int ) ;
 int FUNC_1 (struct mvumi_hba*) ;

__attribute__((used)) static int FUNC_2(struct scsi_cmnd *VAR_1)
{
 struct mvumi_hba *VAR_2;

 VAR_2 = (struct mvumi_hba *) VAR_1->device->host->hostdata;

 FUNC_0(VAR_0, VAR_1, "RESET -%u cmd=%x retries=%x\n",
   VAR_1->request->tag, VAR_1->cmnd[0], VAR_1->retries);

 return VAR_2->instancet->reset_host(VAR_2);
}
