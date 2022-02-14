
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* reserved_qps_cnt; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 size_t VAR_0 ;

__attribute__((used)) static int FUNC_0(struct mlx4_dev *VAR_1, int VAR_2)
{
 return VAR_2 < VAR_1->caps.reserved_qps_cnt[VAR_0];
}
