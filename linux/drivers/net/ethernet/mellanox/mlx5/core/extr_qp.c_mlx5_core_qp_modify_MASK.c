
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mlx5_core_qp {int uid; int qpn; } ;
struct mlx5_core_dev {int dummy; } ;
struct mbox_info {int outlen; int out; int inlen; int in; } ;


 int FUNC_0 (struct mbox_info*) ;
 int FUNC_1 (struct mlx5_core_dev*,int ,int ,int ,int ) ;
 int FUNC_2 (struct mlx5_core_dev*,int ,int ,int ,void*,struct mbox_info*,int ) ;

int FUNC_3(struct mlx5_core_dev *VAR_0, u16 VAR_1,
   u32 VAR_2, void *VAR_3,
   struct mlx5_core_qp *VAR_4)
{
 struct mbox_info VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_4->qpn,
       VAR_2, VAR_3, &VAR_5, VAR_4->uid);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_0, VAR_5.in, VAR_5.inlen, VAR_5.out, VAR_5.outlen);
 FUNC_0(&VAR_5);
 return VAR_6;
}
