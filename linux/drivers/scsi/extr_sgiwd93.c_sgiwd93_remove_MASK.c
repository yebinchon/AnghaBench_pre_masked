
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sgiwd93_platform_data {int irq; } ;
struct TYPE_2__ {struct sgiwd93_platform_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct ip22_hostdata {int dma; int cpu; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_1 (int ,struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct Scsi_Host*) ;
 int FUNC_4 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_2(VAR_2);
 struct ip22_hostdata *VAR_4 = (struct ip22_hostdata *) VAR_3->hostdata;
 struct sgiwd93_platform_data *VAR_5 = VAR_2->dev.platform_data;

 FUNC_4(VAR_3);
 FUNC_1(VAR_5->irq, VAR_3);
 FUNC_0(&VAR_2->dev, VAR_1, VAR_4->cpu, VAR_4->dma,
         VAR_0);
 FUNC_3(VAR_3);
 return 0;
}
