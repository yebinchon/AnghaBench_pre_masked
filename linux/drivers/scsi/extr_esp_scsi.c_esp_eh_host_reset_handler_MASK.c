
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct esp {TYPE_2__* host; } ;
struct TYPE_4__ {int host_lock; } ;
struct TYPE_3__ {int host; } ;


 int VAR_0 ;
 int FUNC_0 (struct esp*) ;
 int VAR_1 ;
 int FUNC_1 (struct esp*) ;
 struct esp* FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct scsi_cmnd *VAR_2)
{
 struct esp *VAR_3 = FUNC_2(VAR_2->device->host);
 unsigned long VAR_4;

 FUNC_3(VAR_3->host->host_lock, VAR_4);
 FUNC_0(VAR_3);
 FUNC_1(VAR_3);
 FUNC_4(VAR_3->host->host_lock, VAR_4);

 FUNC_5(VAR_1);

 return VAR_0;
}
