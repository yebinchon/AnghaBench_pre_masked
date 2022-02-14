
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct cpsw_priv {int emac_port; int mac_addr; TYPE_2__* ndev; struct cpsw_common* cpsw; } ;
struct TYPE_3__ {scalar_t__ dual_emac; } ;
struct cpsw_common {int ale; TYPE_1__ data; } ;
struct TYPE_4__ {int flags; int broadcast; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int,int ,unsigned short,int ) ;
 int FUNC_1 (int ,int ,int ,int ,unsigned short) ;
 int FUNC_2 (int ,unsigned short,int,int ,int,int) ;
 int FUNC_3 (int ,int ,int ,int ,unsigned short) ;
 int FUNC_4 (int ,unsigned short,int ) ;

__attribute__((used)) static inline int FUNC_5(struct cpsw_priv *VAR_7,
    unsigned short VAR_8)
{
 int VAR_9;
 int VAR_10 = 0;
 int VAR_11;
 u32 VAR_12;
 struct cpsw_common *VAR_13 = VAR_7->cpsw;

 if (VAR_13->data.dual_emac) {
  VAR_12 = (1 << (VAR_7->emac_port + 1)) | VAR_3;

  VAR_11 = VAR_3;
  if (VAR_7->ndev->flags & VAR_6)
   VAR_10 = VAR_11;
 } else {
  VAR_12 = VAR_0;
  VAR_11 = VAR_12;

  if (VAR_7->ndev->flags & VAR_6)
   VAR_10 = VAR_0;
  else
   VAR_10 = VAR_1 | VAR_2;
 }

 VAR_9 = FUNC_2(VAR_13->ale, VAR_8, VAR_12, 0, VAR_12,
    VAR_10);
 if (VAR_9 != 0)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_13->ale, VAR_7->mac_addr,
     VAR_5, VAR_4, VAR_8);
 if (VAR_9 != 0)
  goto clean_vid;

 VAR_9 = FUNC_0(VAR_13->ale, VAR_7->ndev->broadcast,
     VAR_11, VAR_4, VAR_8, 0);
 if (VAR_9 != 0)
  goto clean_vlan_ucast;
 return 0;

clean_vlan_ucast:
 FUNC_3(VAR_13->ale, VAR_7->mac_addr,
      VAR_5, VAR_4, VAR_8);
clean_vid:
 FUNC_4(VAR_13->ale, VAR_8, 0);
 return VAR_9;
}
