
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx4_priv {int*** virt2phys_pkey; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {scalar_t__ buf; } ;


 struct mlx4_priv* FUNC_0 (struct mlx4_dev*) ;

__attribute__((used)) static void FUNC_1(struct mlx4_dev *VAR_0, int VAR_1,
         struct mlx4_cmd_mailbox *VAR_2)
{
 u8 VAR_3 = *(u8 *)(VAR_2->buf + 64);
 u8 VAR_4 = *(u8 *)(VAR_2->buf + 35);
 u8 VAR_5;
 struct mlx4_priv *VAR_6 = FUNC_0(VAR_0);
 int VAR_7;

 VAR_7 = (VAR_3 >> 6 & 1) + 1;

 VAR_5 = VAR_6->virt2phys_pkey[VAR_1][VAR_7 - 1][VAR_4];
 *(u8 *)(VAR_2->buf + 35) = VAR_5;
}
