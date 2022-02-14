
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_port_tun_entropy_flags {int force_supported; int calc_supported; int gre_calc_supported; int force_enabled; int calc_enabled; int gre_calc_enabled; } ;
struct mlx5_core_dev {int dummy; } ;
typedef int out ;


 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct mlx5_core_dev*,int *,int) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_4(struct mlx5_core_dev *VAR_8,
     struct mlx5_port_tun_entropy_flags *VAR_9)
{
 u32 VAR_10[FUNC_2(VAR_6)];

 VAR_9->force_supported = 0;
 VAR_9->calc_supported = 0;
 VAR_9->gre_calc_supported = 0;
 VAR_9->force_enabled = 0;
 VAR_9->calc_enabled = 1;
 VAR_9->gre_calc_enabled = 1;

 if (!FUNC_0(VAR_8, VAR_7))
  return;

 if (FUNC_3(VAR_8, VAR_10, sizeof(VAR_10)))
  return;

 VAR_9->force_supported = !!(FUNC_1(VAR_6, VAR_10, VAR_3));
 VAR_9->calc_supported = !!(FUNC_1(VAR_6, VAR_10, VAR_1));
 VAR_9->gre_calc_supported = !!(FUNC_1(VAR_6, VAR_10, VAR_5));
 VAR_9->force_enabled = !!(FUNC_1(VAR_6, VAR_10, VAR_2));
 VAR_9->calc_enabled = !!(FUNC_1(VAR_6, VAR_10, VAR_0));
 VAR_9->gre_calc_enabled = !!(FUNC_1(VAR_6, VAR_10, VAR_4));
}
