
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int fis; } ;
struct domain_device {TYPE_2__ sata_dev; } ;
struct ata_queued_cmd {int result_tf; TYPE_1__* ap; } ;
struct TYPE_3__ {struct domain_device* private_data; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static bool FUNC_1(struct ata_queued_cmd *VAR_0)
{
 struct domain_device *VAR_1 = VAR_0->ap->private_data;

 FUNC_0(VAR_1->sata_dev.fis, &VAR_0->result_tf);
 return 1;
}
