
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct ipr_ioa_cfg {int dummy; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {int host_lock; scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_cmnd*) ;
 int VAR_3 ;
 int FUNC_1 (struct ipr_ioa_cfg*,TYPE_2__*,int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct scsi_cmnd *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;
 struct ipr_ioa_cfg *VAR_7;

 VAR_0;

 VAR_7 = (struct ipr_ioa_cfg *) VAR_4->device->host->hostdata;

 FUNC_2(VAR_4->device->host->host_lock, VAR_5);
 VAR_6 = FUNC_0(VAR_4);
 FUNC_3(VAR_4->device->host->host_lock, VAR_5);

 if (VAR_6 == VAR_2)
  VAR_6 = FUNC_1(VAR_7, VAR_4->device, VAR_3);
 VAR_1;
 return VAR_6;
}
