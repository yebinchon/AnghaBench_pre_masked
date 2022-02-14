
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct Scsi_Host {int base; int irq; scalar_t__* hostdata; } ;
struct NCR_700_Host_Parameters {int dummy; } ;


 int FUNC_0 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,struct Scsi_Host*) ;
 int FUNC_3 (struct NCR_700_Host_Parameters*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_0)
{
 struct Scsi_Host *VAR_1 = FUNC_1(VAR_0);
 struct NCR_700_Host_Parameters *VAR_2 =
  (struct NCR_700_Host_Parameters *)VAR_1->hostdata[0];

 FUNC_5(VAR_1);
 FUNC_0(VAR_1);
 FUNC_3(VAR_2);
 FUNC_2(VAR_1->irq, VAR_1);
 FUNC_4(VAR_1->base, 64);
 return 0;
}
