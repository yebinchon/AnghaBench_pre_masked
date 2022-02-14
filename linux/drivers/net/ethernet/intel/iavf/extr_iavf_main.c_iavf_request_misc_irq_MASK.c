
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iavf_adapter {TYPE_2__* msix_entries; int misc_vector_name; TYPE_1__* pdev; struct net_device* netdev; } ;
struct TYPE_4__ {int vector; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*,int ,int) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int ,struct net_device*) ;
 int VAR_0 ;
 int FUNC_3 (int ,int *,int ,int ,struct net_device*) ;
 int FUNC_4 (int ,int,char*,char*) ;

__attribute__((used)) static int FUNC_5(struct iavf_adapter *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->netdev;
 int VAR_3;

 FUNC_4(VAR_1->misc_vector_name,
   sizeof(VAR_1->misc_vector_name) - 1, "iavf-%s:mbx",
   FUNC_1(&VAR_1->pdev->dev));
 VAR_3 = FUNC_3(VAR_1->msix_entries[0].vector,
     &VAR_0, 0,
     VAR_1->misc_vector_name, VAR_2);
 if (VAR_3) {
  FUNC_0(&VAR_1->pdev->dev,
   "request_irq for %s failed: %d\n",
   VAR_1->misc_vector_name, VAR_3);
  FUNC_2(VAR_1->msix_entries[0].vector, VAR_2);
 }
 return VAR_3;
}
