
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct TYPE_12__ {TYPE_3__* host; } ;
struct TYPE_11__ {int host_lock; } ;
struct TYPE_10__ {TYPE_1__* host; } ;
struct TYPE_9__ {scalar_t__ hostdata; } ;
typedef TYPE_4__ FAS216_Info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int ,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct scsi_cmnd *VAR_4)
{
 FAS216_Info *VAR_5 = (FAS216_Info *)VAR_4->device->host->hostdata;

 FUNC_5(VAR_5->host->host_lock);

 FUNC_0(VAR_5);

 FUNC_3(VAR_5, VAR_2, "resetting host");




 FUNC_1(VAR_5, VAR_1);







 FUNC_6(VAR_5->host->host_lock);
 FUNC_4(50 * 1000/100);
 FUNC_5(VAR_5->host->host_lock);




 FUNC_1(VAR_5, VAR_0);

 FUNC_2(VAR_5);

 FUNC_6(VAR_5->host->host_lock);
 return VAR_3;
}
