
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx4_set_vlan_fltr_mbox {int * entry; } ;
struct mlx4_en_priv {int port; int active_vlans; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dma; struct mlx4_set_vlan_fltr_mbox* buf; } ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 struct mlx4_cmd_mailbox* FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;
 scalar_t__ FUNC_6 (int ,int ) ;

int FUNC_7(struct mlx4_dev *VAR_4, struct mlx4_en_priv *VAR_5)
{
 struct mlx4_cmd_mailbox *VAR_6;
 struct mlx4_set_vlan_fltr_mbox *VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10 = 0;
 u32 VAR_11;
 int VAR_12 = 0;

 VAR_6 = FUNC_3(VAR_4);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_7 = VAR_6->buf;
 for (VAR_8 = VAR_3 - 1; VAR_8 >= 0; VAR_8--) {
  VAR_11 = 0;
  for (VAR_9 = 0; VAR_9 < 32; VAR_9++)
   if (FUNC_6(VAR_10++, VAR_5->active_vlans))
    VAR_11 |= 1 << VAR_9;
  VAR_7->entry[VAR_8] = FUNC_2(VAR_11);
 }
 VAR_12 = FUNC_4(VAR_4, VAR_6->dma, VAR_5->port, 0, VAR_0,
         VAR_1, VAR_2);
 FUNC_5(VAR_4, VAR_6);
 return VAR_12;
}
