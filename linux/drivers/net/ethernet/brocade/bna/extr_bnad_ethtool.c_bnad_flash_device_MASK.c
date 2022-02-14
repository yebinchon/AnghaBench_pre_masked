
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct firmware {int size; scalar_t__ data; } ;
struct ethtool_flash {int data; } ;
struct bnad_iocmd_comp {int comp_status; int comp; struct bnad* bnad; } ;
struct TYPE_4__ {int flash; } ;
struct bnad {int bna_lock; int id; TYPE_2__ bna; TYPE_1__* pcidev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int *,int ,int ,int ,struct bnad_iocmd_comp*) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*,char*,int ) ;
 struct bnad* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,char*,int) ;
 int FUNC_5 (struct firmware const*) ;
 int FUNC_6 (struct firmware const**,int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(struct net_device *VAR_4, struct ethtool_flash *VAR_5)
{
 struct bnad *VAR_6 = FUNC_3(VAR_4);
 struct bnad_iocmd_comp VAR_7;
 const struct firmware *VAR_8;
 int VAR_9 = 0;

 VAR_9 = FUNC_6(&VAR_8, VAR_5->data, &VAR_6->pcidev->dev);
 if (VAR_9) {
  FUNC_2(VAR_4, "can't load firmware %s\n", VAR_5->data);
  goto out;
 }

 VAR_7.bnad = VAR_6;
 VAR_7.comp_status = 0;

 FUNC_1(&VAR_7.comp);
 FUNC_7(&VAR_6->bna_lock);
 VAR_9 = FUNC_0(&VAR_6->bna.flash, VAR_0,
    VAR_6->id, (u8 *)VAR_8->data, VAR_8->size, 0,
    VAR_3, &VAR_7);
 if (VAR_9 != VAR_1) {
  FUNC_4(VAR_4, "flash update failed with err=%d\n", VAR_9);
  VAR_9 = -VAR_2;
  FUNC_8(&VAR_6->bna_lock);
  goto out;
 }

 FUNC_8(&VAR_6->bna_lock);
 FUNC_9(&VAR_7.comp);
 if (VAR_7.comp_status != VAR_1) {
  VAR_9 = -VAR_2;
  FUNC_4(VAR_4,
       "firmware image update failed with err=%d\n",
       VAR_7.comp_status);
 }
out:
 FUNC_5(VAR_8);
 return VAR_9;
}
