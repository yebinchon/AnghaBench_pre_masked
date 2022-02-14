
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct mlx5_core_health {int health_counter; } ;
struct TYPE_2__ {struct mlx5_core_health health; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx5_core_dev*,char*,int,int) ;
 int FUNC_2 (int) ;
 struct mlx5_core_dev* FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_1)
{
 struct mlx5_core_dev *VAR_2 = FUNC_3(VAR_1);
 struct mlx5_core_health *VAR_3 = &VAR_2->priv.health;
 const int VAR_4 = 100;
 u32 VAR_5 = 0;
 u32 VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_6 = FUNC_0(VAR_3->health_counter);
  if (VAR_6 && VAR_6 != 0xffffffff) {
   if (VAR_5 && VAR_5 != VAR_6) {
    FUNC_1(VAR_2,
            "wait vital counter value 0x%x after %d iterations\n",
            VAR_6, VAR_7);
    return 0;
   }
   VAR_5 = VAR_6;
  }
  FUNC_2(50);
 }

 return -VAR_0;
}
