
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct res_common {char* func_name; int from_state; int state; } ;
struct mlx4_dev {int dummy; } ;
typedef enum mlx4_resource { ____Placeholder_mlx4_resource } mlx4_resource ;


 struct res_common* FUNC_0 (struct mlx4_dev*,int ,int) ;
 int FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct mlx4_dev *VAR_0, int VAR_1, u64 VAR_2,
      enum mlx4_resource VAR_3)
{
 struct res_common *VAR_4;

 FUNC_2(FUNC_1(VAR_0));
 VAR_4 = FUNC_0(VAR_0, VAR_2, VAR_3);
 if (VAR_4) {
  VAR_4->state = VAR_4->from_state;
  VAR_4->func_name = "";
 }
 FUNC_3(FUNC_1(VAR_0));
}
