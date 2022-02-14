
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct orc_host {int dummy; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {scalar_t__ hostdata; } ;


 int FUNC_0 (struct orc_host*) ;

__attribute__((used)) static int FUNC_1(struct scsi_cmnd * VAR_0)
{
 struct orc_host *VAR_1;
 VAR_1 = (struct orc_host *) VAR_0->device->host->hostdata;
 return FUNC_0(VAR_1);
}
