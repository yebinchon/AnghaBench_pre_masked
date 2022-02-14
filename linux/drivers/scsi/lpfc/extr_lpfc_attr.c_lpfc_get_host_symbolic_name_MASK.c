
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;


 int FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (struct lpfc_vport*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct Scsi_Host *VAR_0)
{
 struct lpfc_vport *VAR_1 = (struct lpfc_vport *)VAR_0->hostdata;

 FUNC_1(VAR_1, FUNC_0(VAR_0),
          sizeof FUNC_0(VAR_0));
}
