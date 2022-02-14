
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int crdump_size; } ;
struct TYPE_4__ {TYPE_1__ health; } ;
struct mlx5_core_dev {TYPE_2__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx5_core_dev*,char*,int,int) ;
 int FUNC_1 (struct mlx5_core_dev*,int*,int) ;

__attribute__((used)) static int FUNC_2(struct mlx5_core_dev *VAR_3, u32 *VAR_4)
{
 u32 VAR_5 = VAR_3->priv.health.crdump_size;
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < (VAR_5 / 4); VAR_6++)
  VAR_4[VAR_6] = VAR_0;

 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5);
 if (VAR_7 <= 0) {
  if (VAR_7 == 0)
   return -VAR_2;
  return VAR_7;
 }

 if (VAR_5 != VAR_7) {
  FUNC_0(VAR_3, "failed to read full dump, read %d out of %u\n",
          VAR_7, VAR_5);
  return -VAR_1;
 }

 return 0;
}
