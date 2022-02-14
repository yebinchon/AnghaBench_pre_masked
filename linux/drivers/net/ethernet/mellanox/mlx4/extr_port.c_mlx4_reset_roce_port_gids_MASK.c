
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct mlx4_roce_gid_entry {int raw; } ;
struct mlx4_priv {TYPE_3__* port; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dma; scalar_t__ buf; } ;
struct TYPE_8__ {int raw; } ;
struct TYPE_6__ {int mutex; TYPE_1__* roce_gids; } ;
struct TYPE_7__ {TYPE_2__ gid_table; } ;
struct TYPE_5__ {int raw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (struct mlx4_dev*,int ,int,int ,int ,int ,int ) ;
 int FUNC_3 (struct mlx4_dev*,int,int) ;
 int FUNC_4 (struct mlx4_dev*,int,int) ;
 struct mlx4_priv* FUNC_5 (struct mlx4_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_4__ VAR_8 ;

__attribute__((used)) static int FUNC_8(struct mlx4_dev *VAR_9, int VAR_10,
         int VAR_11, struct mlx4_cmd_mailbox *VAR_12)
{
 struct mlx4_roce_gid_entry *VAR_13;
 struct mlx4_priv *VAR_14 = FUNC_5(VAR_9);
 int VAR_15, VAR_16, VAR_17;
 int VAR_18, VAR_19;

 VAR_15 = FUNC_4(VAR_9, VAR_10, VAR_11);
 VAR_16 = FUNC_3(VAR_9, VAR_10, VAR_11);

 FUNC_1(VAR_12->buf, 0, VAR_3);

 FUNC_6(&(VAR_14->port[VAR_11].gid_table.mutex));

 for (VAR_18 = 0, VAR_17 = VAR_16; VAR_18 < VAR_15; VAR_17++, VAR_18++)
  FUNC_0(VAR_14->port[VAR_11].gid_table.roce_gids[VAR_17].raw,
         VAR_8.raw, VAR_4);


 VAR_13 = (struct mlx4_roce_gid_entry *)VAR_12->buf;
 for (VAR_18 = 0; VAR_18 < VAR_5; VAR_13++, VAR_18++)
  FUNC_0(VAR_13->raw,
         VAR_14->port[VAR_11].gid_table.roce_gids[VAR_18].raw,
         VAR_4);

 VAR_19 = FUNC_2(VAR_9, VAR_12->dma,
         ((u32)VAR_11) | (VAR_7 << 8),
         VAR_6, VAR_1,
         VAR_2, VAR_0);
 FUNC_7(&(VAR_14->port[VAR_11].gid_table.mutex));
 return VAR_19;
}
