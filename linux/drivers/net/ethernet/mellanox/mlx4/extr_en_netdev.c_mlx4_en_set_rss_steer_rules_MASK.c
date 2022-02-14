
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct mlx4_mac_entry {size_t* mac; int hlist; int reg_id; } ;
struct mlx4_en_priv {int base_qpn; size_t* current_mac; TYPE_2__* dev; int tunnel_reg_id; TYPE_1__* mdev; int * mac_hash; } ;
struct TYPE_4__ {size_t* dev_addr; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *,int *) ;
 struct mlx4_mac_entry* FUNC_1 (int,int ) ;
 int FUNC_2 (size_t*,size_t*,int) ;
 int FUNC_3 (struct mlx4_en_priv*,size_t*,int,int *) ;
 int FUNC_4 (struct mlx4_en_priv*,size_t*,int*,int *) ;
 int FUNC_5 (struct mlx4_en_priv*,size_t*,int,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct mlx4_en_priv *VAR_3)
{
 u64 VAR_4;
 int VAR_5 = 0;
 int *VAR_6 = &VAR_3->base_qpn;
 struct mlx4_mac_entry *VAR_7;

 VAR_5 = FUNC_4(VAR_3, VAR_3->dev->dev_addr, VAR_6, &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_3(VAR_3, VAR_3->dev->dev_addr, *VAR_6,
           &VAR_3->tunnel_reg_id);
 if (VAR_5)
  goto tunnel_err;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
 if (!VAR_7) {
  VAR_5 = -VAR_0;
  goto alloc_err;
 }

 FUNC_2(VAR_7->mac, VAR_3->dev->dev_addr, sizeof(VAR_7->mac));
 FUNC_2(VAR_3->current_mac, VAR_7->mac, sizeof(VAR_3->current_mac));
 VAR_7->reg_id = VAR_4;
 FUNC_0(&VAR_7->hlist,
      &VAR_3->mac_hash[VAR_7->mac[VAR_2]]);

 return 0;

alloc_err:
 if (VAR_3->tunnel_reg_id)
  FUNC_6(VAR_3->mdev->dev, VAR_3->tunnel_reg_id);

tunnel_err:
 FUNC_5(VAR_3, VAR_3->dev->dev_addr, *VAR_6, VAR_4);
 return VAR_5;
}
