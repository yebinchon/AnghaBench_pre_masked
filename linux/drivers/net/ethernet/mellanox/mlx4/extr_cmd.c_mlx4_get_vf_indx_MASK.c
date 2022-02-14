
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_dev {int num_slaves; TYPE_1__* persist; } ;
struct TYPE_2__ {int num_vfs; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx4_dev*,char*,int,int ) ;

int FUNC_1(struct mlx4_dev *VAR_1, int VAR_2)
{
 if (VAR_2 < 1 || VAR_2 > VAR_1->persist->num_vfs) {
  FUNC_0(VAR_1,
    "Bad slave number:%d (number of activated slaves: %lu)\n",
    VAR_2, VAR_1->num_slaves);
  return -VAR_0;
 }
 return VAR_2 - 1;
}
