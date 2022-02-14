
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_ports; scalar_t__* port_type; int flags; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct mlx4_dev *VAR_5)
{
 int VAR_6;
 int VAR_7 = 0;
 int VAR_8 = 0;



 for (VAR_6 = 1; VAR_6 <= VAR_5->caps.num_ports; VAR_6++) {
  if (VAR_5->caps.port_type[VAR_6] == VAR_4)
   VAR_7 = 1;
  else if (VAR_5->caps.port_type[VAR_6] == VAR_3)
   VAR_8 = 1;
 }

 if (VAR_8)
  FUNC_0("mlx4_en");
 if (VAR_7 || (VAR_5->caps.flags & VAR_2))
  FUNC_0("mlx4_ib");
}
