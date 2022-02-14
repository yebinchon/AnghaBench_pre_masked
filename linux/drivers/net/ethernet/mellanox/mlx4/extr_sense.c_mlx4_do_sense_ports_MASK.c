
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_sense {scalar_t__* sense_allowed; scalar_t__* do_sense_port; } ;
struct TYPE_3__ {int num_ports; scalar_t__* possible_type; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
typedef enum mlx4_port_type { ____Placeholder_mlx4_port_type } mlx4_port_type ;
struct TYPE_4__ {struct mlx4_sense sense; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mlx4_dev*,int,int*) ;
 TYPE_2__* FUNC_1 (struct mlx4_dev*) ;

void FUNC_2(struct mlx4_dev *VAR_1,
    enum mlx4_port_type *VAR_2,
    enum mlx4_port_type *VAR_3)
{
 struct mlx4_sense *VAR_4 = &FUNC_1(VAR_1)->sense;
 int VAR_5;
 int VAR_6;

 for (VAR_6 = 1; VAR_6 <= VAR_1->caps.num_ports; VAR_6++) {
  VAR_2[VAR_6 - 1] = 0;
  if (VAR_4->do_sense_port[VAR_6] && VAR_4->sense_allowed[VAR_6] &&
      VAR_1->caps.possible_type[VAR_6] == VAR_0) {
   VAR_5 = FUNC_0(VAR_1, VAR_6, &VAR_2[VAR_6 - 1]);
   if (VAR_5)
    VAR_2[VAR_6 - 1] = VAR_3[VAR_6 - 1];
  } else
   VAR_2[VAR_6 - 1] = VAR_3[VAR_6 - 1];
 }




 for (VAR_6 = 0; VAR_6 < VAR_1->caps.num_ports; VAR_6++)
  VAR_2[VAR_6] = VAR_2[VAR_6] ? VAR_2[VAR_6] : VAR_3[VAR_6];

}
