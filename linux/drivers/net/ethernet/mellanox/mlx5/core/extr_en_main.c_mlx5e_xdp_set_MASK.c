
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_8__ {struct bpf_prog* xdp_prog; } ;
struct TYPE_5__ {int num; struct mlx5e_channel** c; TYPE_4__ params; } ;
struct mlx5e_priv {int state_lock; TYPE_1__ channels; int mdev; int state; } ;
struct mlx5e_channels {TYPE_4__ params; } ;
struct TYPE_7__ {int state; struct bpf_prog* xdp_prog; } ;
struct TYPE_6__ {int state; struct bpf_prog* xdp_prog; } ;
struct mlx5e_channel {int napi; TYPE_3__ xskrq; TYPE_2__ rq; int * state; } ;
struct bpf_prog {int dummy; } ;


 scalar_t__ FUNC_0 (struct bpf_prog*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bpf_prog*) ;
 struct bpf_prog* FUNC_2 (struct bpf_prog*,int) ;
 int FUNC_3 (struct bpf_prog*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct mlx5e_priv*,struct mlx5e_channels*,int ) ;
 int FUNC_6 (int ,TYPE_4__*) ;
 int FUNC_7 (struct mlx5e_priv*,struct bpf_prog*) ;
 int VAR_3 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct mlx5e_priv* FUNC_12 (struct net_device*) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int ,int *) ;
 struct bpf_prog* FUNC_15 (struct bpf_prog**,struct bpf_prog*) ;

__attribute__((used)) static int FUNC_16(struct net_device *VAR_4, struct bpf_prog *VAR_5)
{
 struct mlx5e_priv *VAR_6 = FUNC_12(VAR_4);
 struct bpf_prog *VAR_7;
 bool VAR_8, VAR_9;
 int VAR_10 = 0;
 int VAR_11;

 FUNC_8(&VAR_6->state_lock);

 if (VAR_5) {
  VAR_10 = FUNC_7(VAR_6, VAR_5);
  if (VAR_10)
   goto unlock;
 }

 VAR_9 = FUNC_14(VAR_2, &VAR_6->state);

 VAR_8 = (!VAR_6->channels.params.xdp_prog || !VAR_5);

 if (VAR_9 && !VAR_8) {



  VAR_5 = FUNC_2(VAR_5, VAR_6->channels.num);
  if (FUNC_0(VAR_5)) {
   VAR_10 = FUNC_1(VAR_5);
   goto unlock;
  }
 }

 if (VAR_9 && VAR_8) {
  struct mlx5e_channels VAR_12 = {};

  VAR_12.params = VAR_6->channels.params;
  VAR_12.params.xdp_prog = VAR_5;
  FUNC_6(VAR_6->mdev, &VAR_12.params);
  VAR_7 = VAR_6->channels.params.xdp_prog;

  VAR_10 = FUNC_5(VAR_6, &VAR_12, VAR_3);
  if (VAR_10)
   goto unlock;
 } else {



  VAR_7 = FUNC_15(&VAR_6->channels.params.xdp_prog, VAR_5);
 }

 if (VAR_7)
  FUNC_3(VAR_7);

 if (!VAR_9 && VAR_8)
  FUNC_6(VAR_6->mdev, &VAR_6->channels.params);

 if (!VAR_9 || VAR_8)
  goto unlock;




 for (VAR_11 = 0; VAR_11 < VAR_6->channels.num; VAR_11++) {
  struct mlx5e_channel *VAR_13 = VAR_6->channels.c[VAR_11];
  bool VAR_14 = FUNC_14(VAR_0, VAR_13->state);

  FUNC_4(VAR_1, &VAR_13->rq.state);
  if (VAR_14)
   FUNC_4(VAR_1, &VAR_13->xskrq.state);
  FUNC_11(&VAR_13->napi);


  VAR_7 = FUNC_15(&VAR_13->rq.xdp_prog, VAR_5);
  if (VAR_7)
   FUNC_3(VAR_7);

  if (VAR_14) {
   VAR_7 = FUNC_15(&VAR_13->xskrq.xdp_prog, VAR_5);
   if (VAR_7)
    FUNC_3(VAR_7);
  }

  FUNC_13(VAR_1, &VAR_13->rq.state);
  if (VAR_14)
   FUNC_13(VAR_1, &VAR_13->xskrq.state);

  FUNC_10(&VAR_13->napi);
 }

unlock:
 FUNC_9(&VAR_6->state_lock);
 return VAR_10;
}
