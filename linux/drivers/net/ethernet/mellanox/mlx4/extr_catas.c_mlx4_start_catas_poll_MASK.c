
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int expires; } ;
struct TYPE_8__ {TYPE_4__ timer; int * map; int list; } ;
struct TYPE_7__ {int catas_size; scalar_t__ catas_offset; int catas_bar; } ;
struct mlx4_priv {TYPE_3__ catas_err; TYPE_2__ fw; } ;
struct mlx4_dev {TYPE_1__* persist; } ;
typedef scalar_t__ phys_addr_t ;
struct TYPE_6__ {int pdev; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_4__*) ;
 int * FUNC_2 (scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (struct mlx4_dev*,char*,unsigned long long) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int VAR_2 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_4__*,int ,int ) ;

void FUNC_9(struct mlx4_dev *VAR_3)
{
 struct mlx4_priv *VAR_4 = FUNC_4(VAR_3);
 phys_addr_t VAR_5;

 FUNC_0(&VAR_4->catas_err.list);
 FUNC_8(&VAR_4->catas_err.timer, VAR_2, 0);
 VAR_4->catas_err.map = ((void*)0);

 if (!FUNC_3(VAR_3)) {
  VAR_5 = FUNC_6(VAR_3->persist->pdev,
       VAR_4->fw.catas_bar) +
       VAR_4->fw.catas_offset;

  VAR_4->catas_err.map = FUNC_2(VAR_5, VAR_4->fw.catas_size * 4);
  if (!VAR_4->catas_err.map) {
   FUNC_5(VAR_3, "Failed to map internal error buffer at 0x%llx\n",
      (unsigned long long)VAR_5);
   return;
  }
 }

 VAR_4->catas_err.timer.expires =
  FUNC_7(VAR_1 + VAR_0);
 FUNC_1(&VAR_4->catas_err.timer);
}
