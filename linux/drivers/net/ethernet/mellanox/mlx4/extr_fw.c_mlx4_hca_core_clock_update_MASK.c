
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hca_core_clock; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_cmd_mailbox {int dma; int * buf; } ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (struct mlx4_cmd_mailbox*) ;
 int VAR_2 ;
 struct mlx4_cmd_mailbox* FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_5 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;
 int FUNC_6 (struct mlx4_dev*) ;
 int FUNC_7 (struct mlx4_dev*,char*) ;

__attribute__((used)) static int FUNC_8(struct mlx4_dev *VAR_3)
{
 struct mlx4_cmd_mailbox *VAR_4;
 __be32 *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_3(VAR_3);
 if (FUNC_0(VAR_4)) {
  FUNC_7(VAR_3, "hca_core_clock mailbox allocation failed\n");
  return FUNC_2(VAR_4);
 }
 VAR_5 = VAR_4->buf;

 VAR_6 = FUNC_4(VAR_3, 0, VAR_4->dma, 0, 0,
      VAR_0,
      VAR_1,
      !FUNC_6(VAR_3));
 if (VAR_6) {
  FUNC_7(VAR_3, "hca_core_clock update failed\n");
  goto out;
 }

 FUNC_1(VAR_3->caps.hca_core_clock, VAR_5, VAR_2);

out:
 FUNC_5(VAR_3, VAR_4);

 return VAR_6;
}
