
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* request; } ;
struct TYPE_2__ {int tag; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct scsi_cmnd *VAR_1)
{
 int VAR_2 = VAR_1->request->tag;

 if (VAR_2 < 0)
  return VAR_2;


 return VAR_2 += VAR_0;
}
