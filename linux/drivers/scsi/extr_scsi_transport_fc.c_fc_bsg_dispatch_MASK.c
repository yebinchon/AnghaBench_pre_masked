
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsg_job {int dev; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (struct Scsi_Host*,struct bsg_job*) ;
 int FUNC_1 (struct Scsi_Host*,struct bsg_job*) ;
 struct Scsi_Host* FUNC_2 (struct bsg_job*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct bsg_job *VAR_0)
{
 struct Scsi_Host *VAR_1 = FUNC_2(VAR_0);

 if (FUNC_3(VAR_0->dev))
  return FUNC_1(VAR_1, VAR_0);
 else
  return FUNC_0(VAR_1, VAR_0);
}
