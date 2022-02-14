
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int max_tc_eth; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 int VAR_0 ;

int FUNC_0(struct mlx4_dev *VAR_1)
{
 u8 VAR_2 = VAR_1->caps.max_tc_eth;

 if (!VAR_2)
  VAR_2 = VAR_0;

 return VAR_2;
}
