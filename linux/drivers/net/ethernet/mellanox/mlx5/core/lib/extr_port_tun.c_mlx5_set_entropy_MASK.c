
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_tun_entropy {int enabled; int mdev; scalar_t__ num_enabling_entries; } ;
struct mlx5_port_tun_entropy_flags {int calc_enabled; scalar_t__ force_supported; scalar_t__ force_enabled; scalar_t__ calc_supported; scalar_t__ gre_calc_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,struct mlx5_port_tun_entropy_flags*) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct mlx5_tun_entropy *VAR_2,
       int VAR_3, bool VAR_4)
{
 struct mlx5_port_tun_entropy_flags VAR_5;
 int VAR_6;

 FUNC_1(VAR_2->mdev, &VAR_5);





 if (VAR_5.gre_calc_supported &&
     VAR_3 == VAR_1) {
  if (!VAR_5.force_supported)
   return 0;
  VAR_6 = FUNC_2(VAR_2->mdev,
        VAR_4, !VAR_4);
  if (VAR_6)
   return VAR_6;
 } else if (VAR_5.calc_supported) {




  if (VAR_5.force_enabled &&
      VAR_4 == VAR_5.calc_enabled) {
   FUNC_0(VAR_2->mdev,
           "Unexpected entropy calc setting - expected %d",
           !VAR_5.calc_enabled);
   return -VAR_0;
  }




  if (VAR_2->num_enabling_entries)
   return -VAR_0;
  VAR_6 = FUNC_3(VAR_2->mdev, VAR_4,
           VAR_5.force_supported);
  if (VAR_6)
   return VAR_6;
  VAR_2->enabled = VAR_4;

  if (VAR_5.force_supported && VAR_4) {
   VAR_6 = FUNC_3(VAR_2->mdev, 1, 0);
   if (VAR_6)
    return VAR_6;
  }
 }

 return 0;
}
