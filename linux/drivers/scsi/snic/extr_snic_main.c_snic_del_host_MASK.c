
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {int * work_q; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct Scsi_Host*) ;

__attribute__((used)) static void
FUNC_2(struct Scsi_Host *VAR_0)
{
 if (!VAR_0->work_q)
  return;

 FUNC_0(VAR_0->work_q);
 VAR_0->work_q = ((void*)0);
 FUNC_1(VAR_0);
}
