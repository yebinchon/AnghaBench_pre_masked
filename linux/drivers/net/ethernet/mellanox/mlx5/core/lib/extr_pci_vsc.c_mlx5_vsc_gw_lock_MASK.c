
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mlx5_core_dev {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct mlx5_core_dev*,int ,scalar_t__*) ;
 int FUNC_4 (struct mlx5_core_dev*,int ,scalar_t__) ;

int FUNC_5(struct mlx5_core_dev *VAR_4)
{
 u32 VAR_5 = 0;
 int VAR_6 = 0;
 u32 VAR_7;
 int VAR_8;

 FUNC_0(VAR_4->pdev);
 do {
  if (VAR_6 > VAR_2) {
   VAR_8 = -VAR_0;
   goto pci_unlock;
  }


  VAR_8 = FUNC_3(VAR_4, VAR_3, &VAR_7);
  if (VAR_8)
   goto pci_unlock;

  if (VAR_7) {
   VAR_6++;
   FUNC_2(1000, 2000);
   continue;
  }




  VAR_8 = FUNC_3(VAR_4, VAR_1, &VAR_5);
  if (VAR_8)
   goto pci_unlock;

  VAR_8 = FUNC_4(VAR_4, VAR_3, VAR_5);
  if (VAR_8)
   goto pci_unlock;

  VAR_8 = FUNC_3(VAR_4, VAR_3, &VAR_7);
  if (VAR_8)
   goto pci_unlock;

  VAR_6++;
 } while (VAR_5 != VAR_7);

 return 0;

pci_unlock:
 FUNC_1(VAR_4->pdev);
 return VAR_8;
}
