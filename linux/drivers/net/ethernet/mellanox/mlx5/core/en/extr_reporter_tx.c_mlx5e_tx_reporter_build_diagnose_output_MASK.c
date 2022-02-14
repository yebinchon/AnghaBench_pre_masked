
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mlx5e_txqsq {int sqn; int ch_ix; int txq_ix; int cc; int pc; int cq; int txq; TYPE_1__* channel; } ;
struct mlx5e_priv {int mdev; } ;
struct devlink_fmsg {int dummy; } ;
struct TYPE_2__ {struct mlx5e_priv* priv; } ;


 int FUNC_0 (struct devlink_fmsg*,char*,int) ;
 int FUNC_1 (struct devlink_fmsg*) ;
 int FUNC_2 (struct devlink_fmsg*) ;
 int FUNC_3 (struct devlink_fmsg*,char*,int) ;
 int FUNC_4 (struct devlink_fmsg*,char*,int ) ;
 int FUNC_5 (int ,int,int *) ;
 int FUNC_6 (int *,struct devlink_fmsg*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct devlink_fmsg *VAR_0,
     struct mlx5e_txqsq *VAR_1, int VAR_2)
{
 struct mlx5e_priv *VAR_3 = VAR_1->channel->priv;
 bool VAR_4 = FUNC_7(VAR_1->txq);
 u8 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_5(VAR_3->mdev, VAR_1->sqn, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_0);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_0, "channel ix", VAR_1->ch_ix);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_0, "tc", VAR_2);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_0, "txq ix", VAR_1->txq_ix);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_0, "sqn", VAR_1->sqn);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_0, "HW state", VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_0, "stopped", VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_0, "cc", VAR_1->cc);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_0, "pc", VAR_1->pc);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_6(&VAR_1->cq, VAR_0);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_0);
 if (VAR_6)
  return VAR_6;

 return 0;
}
