
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct mlx5_qp_context {int mtu_msgmax; int rq_size_stride; int log_pg_sz_remote_qpn; int sq_crq_size; int flags; } ;
struct mlx5_core_qp {int pid; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;





 scalar_t__ FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int,int ) ;
 int FUNC_6 (struct mlx5_core_dev*,struct mlx5_core_qp*,int *,int) ;
 int FUNC_7 (struct mlx5_core_dev*,char*,int) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u64 FUNC_10(struct mlx5_core_dev *VAR_3, struct mlx5_core_qp *VAR_4,
    int VAR_5, int *VAR_6)
{
 int VAR_7 = FUNC_1(VAR_2);
 struct mlx5_qp_context *VAR_8;
 u64 VAR_9 = 0;
 u32 *VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_10 = FUNC_5(VAR_7, VAR_0);
 if (!VAR_10)
  return VAR_9;

 VAR_11 = FUNC_6(VAR_3, VAR_4, VAR_10, VAR_7);
 if (VAR_11) {
  FUNC_7(VAR_3, "failed to query qp err=%d\n", VAR_11);
  goto out;
 }

 *VAR_6 = 0;


 VAR_8 = (struct mlx5_qp_context *)FUNC_0(VAR_2, VAR_10, VAR_1);

 switch (VAR_5) {
 case 132:
  VAR_9 = VAR_4->pid;
  break;
 case 129:
  VAR_9 = (unsigned long)FUNC_8(FUNC_3(VAR_8->flags) >> 28);
  *VAR_6 = 1;
  break;
 case 128:
  VAR_9 = (unsigned long)FUNC_9((FUNC_3(VAR_8->flags) >> 16) & 0xff);
  *VAR_6 = 1;
  break;
 case 135:
  switch (VAR_8->mtu_msgmax >> 5) {
  case 139:
   VAR_9 = 256;
   break;
  case 137:
   VAR_9 = 512;
   break;
  case 141:
   VAR_9 = 1024;
   break;
  case 140:
   VAR_9 = 2048;
   break;
  case 138:
   VAR_9 = 4096;
   break;
  default:
   VAR_9 = 0;
  }
  break;
 case 134:
  VAR_9 = 1 << ((VAR_8->rq_size_stride >> 3) & 0xf);
  break;
 case 131:
  VAR_9 = 1 << ((VAR_8->rq_size_stride & 7) + 4);
  break;
 case 133:
  VAR_12 = FUNC_2(VAR_8->sq_crq_size) >> 15;
  if (!VAR_12)
   VAR_9 = 1 << (FUNC_2(VAR_8->sq_crq_size) >> 11);
  else
   VAR_9 = 0;
  break;
 case 136:
  VAR_9 = (FUNC_3(VAR_8->log_pg_sz_remote_qpn) >> 24) & 0x1f;
  VAR_9 += 12;
  break;
 case 130:
  VAR_9 = FUNC_3(VAR_8->log_pg_sz_remote_qpn) & 0xffffff;
  break;
 }

out:
 FUNC_4(VAR_10);
 return VAR_9;
}
