
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsg_job {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bsg_job*,int ,int ) ;
 int FUNC_1 (int ,struct Scsi_Host*,char*) ;

__attribute__((used)) static inline void FUNC_2(struct bsg_job *VAR_2,
  struct Scsi_Host *VAR_3)
{
 FUNC_1(VAR_1, VAR_3,
  "Cannot send SMP to a sas host (not enabled in CONFIG)\n");
 FUNC_0(VAR_2, -VAR_0, 0);
}
