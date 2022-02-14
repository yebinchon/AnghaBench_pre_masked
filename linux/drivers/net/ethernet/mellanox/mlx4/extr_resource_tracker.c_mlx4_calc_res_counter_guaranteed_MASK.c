
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource_allocator {int res_reserved; } ;
struct TYPE_2__ {int num_ports; int max_counters; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_active_ports {int ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 struct mlx4_active_ports FUNC_1 (struct mlx4_dev*,int) ;
 int FUNC_2 (struct mlx4_dev*) ;

__attribute__((used)) static int
FUNC_3(struct mlx4_dev *VAR_2,
     struct resource_allocator *VAR_3,
     int VAR_4)
{
 struct mlx4_active_ports VAR_5;
 int VAR_6, VAR_7;


 if (VAR_4 == FUNC_2(VAR_2))
  return VAR_0 * VAR_2->caps.num_ports;


 VAR_5 = FUNC_1(VAR_2, VAR_4);
 VAR_6 = FUNC_0(VAR_5.ports, VAR_2->caps.num_ports);
 VAR_7 = VAR_6 * VAR_1;




 if ((VAR_3->res_reserved + VAR_7) >
     (VAR_2->caps.max_counters - 1))
  return 0;

 return VAR_7;
}
