
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {scalar_t__* hostdata; } ;
struct NCR_700_Host_Parameters {int pScript; int script; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;

int
FUNC_1(struct Scsi_Host *VAR_2)
{
 struct NCR_700_Host_Parameters *VAR_3 =
  (struct NCR_700_Host_Parameters *)VAR_2->hostdata[0];

 FUNC_0(VAR_3->dev, VAR_1, VAR_3->script,
         VAR_3->pScript, VAR_0);
 return 1;
}
