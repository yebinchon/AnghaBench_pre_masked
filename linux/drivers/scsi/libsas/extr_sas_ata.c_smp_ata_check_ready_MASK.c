
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_phy {size_t number; } ;
struct ex_phy {int attached_dev_type; int attached_sata_dev; } ;
struct TYPE_2__ {struct ex_phy* ex_phy; } ;
struct domain_device {TYPE_1__ ex_dev; struct domain_device* parent; } ;
struct ata_port {struct domain_device* private_data; } ;
struct ata_link {struct ata_port* ap; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (struct domain_device*,struct ex_phy*) ;
 int FUNC_1 (struct domain_device*,size_t) ;
 struct sas_phy* FUNC_2 (struct domain_device*) ;
 int FUNC_3 (struct sas_phy*) ;

__attribute__((used)) static int FUNC_4(struct ata_link *VAR_3)
{
 int VAR_4;
 struct ata_port *VAR_5 = VAR_3->ap;
 struct domain_device *VAR_6 = VAR_5->private_data;
 struct domain_device *VAR_7 = VAR_6->parent;
 struct sas_phy *VAR_8 = FUNC_2(VAR_6);
 struct ex_phy *VAR_9 = &VAR_7->ex_dev.ex_phy[VAR_8->number];

 VAR_4 = FUNC_1(VAR_7, VAR_8->number);
 FUNC_3(VAR_8);




 if (VAR_4 == -VAR_0)
  return VAR_4;
 if (VAR_4 != VAR_2)
  return 0;

 switch (VAR_9->attached_dev_type) {
 case 128:
  return 0;
 case 129:
  if (VAR_9->attached_sata_dev)
   return FUNC_0(VAR_6, VAR_9);

 default:
  return -VAR_1;
 }
}
