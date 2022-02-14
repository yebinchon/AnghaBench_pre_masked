
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_tun_entropy {scalar_t__ num_disabling_entries; int lock; int num_enabling_entries; scalar_t__ enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx5_tun_entropy*,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct mlx5_tun_entropy *VAR_3,
      int VAR_4)
{

 int VAR_5 = -VAR_0;

 FUNC_1(&VAR_3->lock);
 if (VAR_4 == VAR_2 &&
     VAR_3->enabled) {




  VAR_3->num_enabling_entries++;
  VAR_5 = 0;
 } else if (VAR_4 == VAR_1) {




  if (VAR_3->num_disabling_entries == 0)
   VAR_5 = FUNC_0(VAR_3, VAR_4, 0);
  else
   VAR_5 = 0;
  if (!VAR_5)
   VAR_3->num_disabling_entries++;
 }
 FUNC_2(&VAR_3->lock);

 return VAR_5;
}
