
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int driver_data; } ;
struct pci_dev {int dev; } ;
struct mlx5_core_dev {int coredev_type; struct pci_dev* pdev; int * device; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 struct mlx5_core_dev* FUNC_1 (struct devlink*) ;
 int FUNC_2 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_3 (struct mlx5_core_dev*) ;
 struct devlink* FUNC_4 () ;
 int FUNC_5 (struct devlink*) ;
 int FUNC_6 (struct devlink*,int *) ;
 int FUNC_7 (struct mlx5_core_dev*,int) ;
 int FUNC_8 (struct mlx5_core_dev*,int ) ;
 int FUNC_9 (struct mlx5_core_dev*) ;
 int FUNC_10 (struct mlx5_core_dev*) ;
 int FUNC_11 (struct mlx5_core_dev*,struct pci_dev*,struct pci_device_id const*) ;
 int FUNC_12 (struct mlx5_core_dev*,int) ;
 int FUNC_13 (struct pci_dev*) ;
 int VAR_5 ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct pci_dev *VAR_6, const struct pci_device_id *VAR_7)
{
 struct mlx5_core_dev *VAR_8;
 struct devlink *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_4();
 if (!VAR_9) {
  FUNC_0(&VAR_6->dev, "devlink alloc failed\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_1(VAR_9);
 VAR_8->device = &VAR_6->dev;
 VAR_8->pdev = VAR_6;

 VAR_8->coredev_type = VAR_7->driver_data & VAR_4 ?
    VAR_2 : VAR_1;

 VAR_10 = FUNC_8(VAR_8, VAR_5);
 if (VAR_10)
  goto mdev_init_err;

 VAR_10 = FUNC_11(VAR_8, VAR_6, VAR_7);
 if (VAR_10) {
  FUNC_2(VAR_8, "mlx5_pci_init failed with error code %d\n",
         VAR_10);
  goto pci_init_err;
 }

 VAR_10 = FUNC_7(VAR_8, 1);
 if (VAR_10) {
  FUNC_2(VAR_8, "mlx5_load_one failed with error code %d\n",
         VAR_10);
  goto err_load_one;
 }

 FUNC_14(VAR_3);

 VAR_10 = FUNC_6(VAR_9, &VAR_6->dev);
 if (VAR_10)
  goto clean_load;

 VAR_10 = FUNC_3(VAR_8);
 if (VAR_10)
  FUNC_0(&VAR_6->dev, "mlx5_crdump_enable failed with error code %d\n", VAR_10);

 FUNC_13(VAR_6);
 return 0;

clean_load:
 FUNC_12(VAR_8, 1);

err_load_one:
 FUNC_10(VAR_8);
pci_init_err:
 FUNC_9(VAR_8);
mdev_init_err:
 FUNC_5(VAR_9);

 return VAR_10;
}
