
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {TYPE_1__* sdev_target; } ;
struct ipr_sata_port {int ap; } ;
struct TYPE_2__ {struct ipr_sata_port* hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct scsi_device*) ;

__attribute__((used)) static int FUNC_3(struct scsi_device *VAR_3)
{
 struct ipr_sata_port *VAR_4 = ((void*)0);
 int VAR_5 = -VAR_1;

 VAR_0;
 if (VAR_3->sdev_target)
  VAR_4 = VAR_3->sdev_target->hostdata;
 if (VAR_4) {
  VAR_5 = FUNC_0(VAR_4->ap);
  if (VAR_5 == 0)
   VAR_5 = FUNC_1(VAR_4->ap);
 }

 if (VAR_5)
  FUNC_2(VAR_3);

 VAR_2;
 return VAR_5;
}
