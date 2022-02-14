
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5dr_ste_send_info {int data; TYPE_1__* ste; int offset; int size; int send_list; } ;
struct mlx5dr_domain {int dummy; } ;
struct TYPE_2__ {int hw_ste; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5dr_ste_send_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct mlx5dr_domain*,TYPE_1__*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct mlx5dr_ste_send_info *VAR_1,
          struct mlx5dr_domain *VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_1->send_list);
 VAR_3 = FUNC_3(VAR_2, VAR_1->ste, VAR_1->data,
           VAR_1->size, VAR_1->offset);
 if (VAR_3)
  goto out;



 FUNC_2(VAR_1->ste->hw_ste, VAR_1->data, VAR_0);

out:
 FUNC_0(VAR_1);
 return VAR_3;
}
