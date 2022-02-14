
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct mlx4_qp_context {int param3; int db_rec_addr; } ;
struct mlx4_qp {int event; } ;
struct TYPE_9__ {int dma; } ;
struct TYPE_12__ {int mtt; TYPE_1__ db; } ;
struct mlx4_en_rx_ring {TYPE_4__ wqres; scalar_t__ fcs_del; int cqn; int stride; int actual_size; } ;
struct mlx4_en_priv {TYPE_3__* dev; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {TYPE_5__* dev; } ;
typedef enum mlx4_qp_state { ____Placeholder_mlx4_qp_state } mlx4_qp_state ;
struct TYPE_10__ {int flags; } ;
struct TYPE_13__ {TYPE_2__ caps; } ;
struct TYPE_11__ {int features; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlx4_en_priv*,char*,int) ;
 int FUNC_3 (struct mlx4_qp_context*) ;
 struct mlx4_qp_context* FUNC_4 (int,int ) ;
 int FUNC_5 (struct mlx4_qp_context*,int ,int) ;
 int FUNC_6 (struct mlx4_en_priv*,int ,int ,int ,int ,int,int ,int,struct mlx4_qp_context*) ;
 int VAR_5 ;
 int FUNC_7 (struct mlx4_en_rx_ring*) ;
 int FUNC_8 (TYPE_5__*,int,struct mlx4_qp*) ;
 int FUNC_9 (TYPE_5__*,struct mlx4_qp*) ;
 int FUNC_10 (TYPE_5__*,struct mlx4_qp*) ;
 int FUNC_11 (TYPE_5__*,int *,struct mlx4_qp_context*,struct mlx4_qp*,int*) ;

__attribute__((used)) static int FUNC_12(struct mlx4_en_priv *VAR_6, int VAR_7,
     struct mlx4_en_rx_ring *VAR_8,
     enum mlx4_qp_state *VAR_9,
     struct mlx4_qp *VAR_10)
{
 struct mlx4_en_dev *VAR_11 = VAR_6->mdev;
 struct mlx4_qp_context *VAR_12;
 int VAR_13 = 0;

 VAR_12 = FUNC_4(sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_0;

 VAR_13 = FUNC_8(VAR_11->dev, VAR_7, VAR_10);
 if (VAR_13) {
  FUNC_2(VAR_6, "Failed to allocate qp #%x\n", VAR_7);
  goto out;
 }
 VAR_10->event = VAR_5;

 FUNC_5(VAR_12, 0, sizeof(*VAR_12));
 FUNC_6(VAR_6, VAR_8->actual_size, VAR_8->stride, 0, 0,
    VAR_7, VAR_8->cqn, -1, VAR_12);
 VAR_12->db_rec_addr = FUNC_1(VAR_8->wqres.db.dma);


 if (VAR_11->dev->caps.flags & VAR_3) {
  VAR_12->param3 |= FUNC_0(1 << 29);
  if (VAR_6->dev->features & VAR_4)
   VAR_8->fcs_del = 0;
  else
   VAR_8->fcs_del = VAR_1;
 } else
  VAR_8->fcs_del = 0;

 VAR_13 = FUNC_11(VAR_11->dev, &VAR_8->wqres.mtt, VAR_12, VAR_10, VAR_9);
 if (VAR_13) {
  FUNC_10(VAR_11->dev, VAR_10);
  FUNC_9(VAR_11->dev, VAR_10);
 }
 FUNC_7(VAR_8);
out:
 FUNC_3(VAR_12);
 return VAR_13;
}
