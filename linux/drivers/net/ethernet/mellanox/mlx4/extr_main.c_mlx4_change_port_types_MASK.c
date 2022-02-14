
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_ports; int* port_type; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
typedef enum mlx4_port_type { ____Placeholder_mlx4_port_type } mlx4_port_type ;


 int FUNC_0 (struct mlx4_dev*,int) ;
 int FUNC_1 (struct mlx4_dev*,int,int) ;
 int FUNC_2 (struct mlx4_dev*,char*,...) ;
 int FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (struct mlx4_dev*) ;
 int FUNC_6 (struct mlx4_dev*) ;

int FUNC_7(struct mlx4_dev *VAR_0,
      enum mlx4_port_type *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->caps.num_ports; VAR_4++) {


  if (VAR_1[VAR_4] != VAR_0->caps.port_type[VAR_4 + 1])
   VAR_3 = 1;
 }
 if (VAR_3) {
  FUNC_6(VAR_0);
  for (VAR_4 = 1; VAR_4 <= VAR_0->caps.num_ports; VAR_4++) {
   FUNC_0(VAR_0, VAR_4);
   VAR_0->caps.port_type[VAR_4] = VAR_1[VAR_4 - 1];
   VAR_2 = FUNC_1(VAR_0, VAR_4, -1);
   if (VAR_2) {
    FUNC_2(VAR_0, "Failed to set port %d, aborting\n",
      VAR_4);
    goto out;
   }
  }
  FUNC_5(VAR_0);
  VAR_2 = FUNC_3(VAR_0);
  if (VAR_2) {
   FUNC_2(VAR_0, "Failed to register device\n");
   goto out;
  }
  FUNC_4(VAR_0);
 }

out:
 return VAR_2;
}
