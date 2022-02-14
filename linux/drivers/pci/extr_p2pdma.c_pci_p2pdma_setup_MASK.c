
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct pci_p2pdma {int pool; int map_types; } ;
struct TYPE_5__ {int kobj; } ;
struct pci_dev {TYPE_1__ dev; struct pci_p2pdma* p2pdma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,struct pci_dev*) ;
 int FUNC_2 (TYPE_1__*,struct pci_p2pdma*) ;
 struct pci_p2pdma* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct pci_dev *VAR_5)
{
 int VAR_6 = -VAR_0;
 struct pci_p2pdma *VAR_7;

 VAR_7 = FUNC_3(&VAR_5->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_7(&VAR_7->map_types);

 VAR_7->pool = FUNC_4(VAR_2, FUNC_0(&VAR_5->dev));
 if (!VAR_7->pool)
  goto out;

 VAR_6 = FUNC_1(&VAR_5->dev, VAR_4, VAR_5);
 if (VAR_6)
  goto out_pool_destroy;

 VAR_5->p2pdma = VAR_7;

 VAR_6 = FUNC_6(&VAR_5->dev.kobj, &VAR_3);
 if (VAR_6)
  goto out_pool_destroy;

 return 0;

out_pool_destroy:
 VAR_5->p2pdma = ((void*)0);
 FUNC_5(VAR_7->pool);
out:
 FUNC_2(&VAR_5->dev, VAR_7);
 return VAR_6;
}
