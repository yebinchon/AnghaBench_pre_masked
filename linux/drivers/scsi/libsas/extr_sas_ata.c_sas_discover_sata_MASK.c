
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int class; } ;
struct domain_device {scalar_t__ dev_type; int rphy; TYPE_1__ sata_dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct domain_device*,int ) ;
 int FUNC_1 (struct domain_device*) ;
 int FUNC_2 (struct domain_device*) ;

int FUNC_3(struct domain_device *VAR_2)
{
 int VAR_3;

 if (VAR_2->dev_type == VAR_1)
  return -VAR_0;

 VAR_2->sata_dev.class = FUNC_1(VAR_2);
 FUNC_0(VAR_2, VAR_2->rphy);

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  return VAR_3;

 return 0;
}
