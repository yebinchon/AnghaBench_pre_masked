
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct octeon_device {TYPE_1__** droq; TYPE_2__* pci_dev; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int pkts_credit_reg; int max_count; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct octeon_device*,int,int,int,void*) ;
 int FUNC_2 (struct octeon_device*,int,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct octeon_device *VAR_0, int VAR_1, int VAR_2,
        int VAR_3, void *VAR_4)
{
 int VAR_5;

 FUNC_0(&VAR_0->pci_dev->dev, "Creating Droq: %d\n", VAR_1);

 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_5 == 1) {
  FUNC_0(&VAR_0->pci_dev->dev, "Using default droq %d\n", VAR_1);
  return 0;
 }


 FUNC_2(VAR_0, VAR_1, 1);




 FUNC_3(VAR_0->droq[VAR_1]->max_count, VAR_0->droq[VAR_1]->pkts_credit_reg);

 return VAR_5;
}
