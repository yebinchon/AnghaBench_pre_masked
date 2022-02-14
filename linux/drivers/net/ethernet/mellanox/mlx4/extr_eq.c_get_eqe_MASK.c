
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlx4_eqe {int dummy; } ;
struct mlx4_eq {int nent; TYPE_1__* page_list; } ;
struct TYPE_2__ {struct mlx4_eqe* buf; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;

__attribute__((used)) static struct mlx4_eqe *FUNC_0(struct mlx4_eq *VAR_2, u32 VAR_3, u8 VAR_4,
    u8 VAR_5)
{

 unsigned long VAR_6 = (VAR_3 & (VAR_2->nent - 1)) * VAR_5;







 return VAR_2->page_list[VAR_6 / VAR_1].buf + (VAR_6 + (VAR_4 ? VAR_0 : 0)) % VAR_1;
}
