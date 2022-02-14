
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct st_hba {int dummy; } ;
struct scsi_cmnd {TYPE_1__* device; } ;
struct TYPE_4__ {int * hostdata; } ;
struct TYPE_3__ {TYPE_2__* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_2__*,char*) ;
 scalar_t__ FUNC_1 (struct st_hba*) ;

__attribute__((used)) static int FUNC_2(struct scsi_cmnd *VAR_3)
{
 struct st_hba *VAR_4;

 VAR_4 = (struct st_hba *) &VAR_3->device->host->hostdata[0];

 FUNC_0(VAR_1, VAR_3->device->host,
       "resetting host\n");

 return FUNC_1(VAR_4) ? VAR_0 : VAR_2;
}
