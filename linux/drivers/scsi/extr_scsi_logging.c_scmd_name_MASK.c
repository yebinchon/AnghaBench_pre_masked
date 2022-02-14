
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* request; } ;
struct TYPE_4__ {TYPE_1__* rq_disk; } ;
struct TYPE_3__ {char const* disk_name; } ;



__attribute__((used)) static inline const char *FUNC_0(const struct scsi_cmnd *VAR_0)
{
 return VAR_0->request->rq_disk ?
  VAR_0->request->rq_disk->disk_name : ((void*)0);
}
