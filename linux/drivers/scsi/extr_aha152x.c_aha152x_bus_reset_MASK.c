
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct TYPE_2__ {int host; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct scsi_cmnd *VAR_0)
{
 return FUNC_0(VAR_0->device->host);
}
