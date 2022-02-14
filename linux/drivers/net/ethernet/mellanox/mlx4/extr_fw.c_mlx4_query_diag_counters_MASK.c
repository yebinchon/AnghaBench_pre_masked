
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dma; scalar_t__* buf; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,scalar_t__*,scalar_t__ const) ;
 scalar_t__ const VAR_4 ;
 int FUNC_2 (struct mlx4_cmd_mailbox*) ;
 struct mlx4_cmd_mailbox* FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;

int FUNC_6(struct mlx4_dev *VAR_5, u8 VAR_6,
        const u32 VAR_7[],
        u32 VAR_8[], size_t VAR_9, u8 VAR_10)
{
 struct mlx4_cmd_mailbox *VAR_11;
 u32 *VAR_12;
 size_t VAR_13;
 int VAR_14;

 VAR_11 = FUNC_3(VAR_5);
 if (FUNC_0(VAR_11))
  return FUNC_2(VAR_11);

 VAR_12 = VAR_11->buf;

 VAR_14 = FUNC_4(VAR_5, 0, VAR_11->dma, VAR_10, VAR_6,
      VAR_1, VAR_3,
      VAR_2);
 if (VAR_14)
  goto out;

 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
  if (VAR_7[VAR_13] > VAR_4) {
   VAR_14 = -VAR_0;
   goto out;
  }

  FUNC_1(VAR_8[VAR_13], VAR_12, VAR_7[VAR_13]);
 }

out:
 FUNC_5(VAR_5, VAR_11);
 return VAR_14;
}
