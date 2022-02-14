
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx4_dev*,int ,int,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct mlx4_dev *VAR_3, struct mlx4_cmd_mailbox *VAR_4,
    int VAR_5, u8 VAR_6)
{
 return FUNC_0(VAR_3, VAR_4->dma, VAR_5, VAR_6,
   VAR_0, VAR_1,
   VAR_2);
}
