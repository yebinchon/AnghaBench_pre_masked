
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct Scsi_Host {int irq; scalar_t__* hostdata; } ;
struct NCR_700_Host_Parameters {int base; } ;


 int FUNC_0 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_1 (int *) ;
 int FUNC_2 (int ,struct Scsi_Host*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct NCR_700_Host_Parameters*) ;
 int FUNC_5 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct Scsi_Host *VAR_1 = FUNC_1(&VAR_0->dev);
 struct NCR_700_Host_Parameters *VAR_2 =
  (struct NCR_700_Host_Parameters *)VAR_1->hostdata[0];

 FUNC_5(VAR_1);
 FUNC_0(VAR_1);
 FUNC_2(VAR_1->irq, VAR_1);
 FUNC_3(VAR_2->base);
 FUNC_4(VAR_2);

 return 0;
}
