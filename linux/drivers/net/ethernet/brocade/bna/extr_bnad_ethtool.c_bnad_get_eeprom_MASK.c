
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int magic; scalar_t__ offset; int len; } ;
struct bnad_iocmd_comp {int comp_status; int comp; struct bnad* bnad; } ;
struct TYPE_4__ {int flash; } ;
struct bnad {int bna_lock; int id; TYPE_2__ bna; TYPE_1__* pcidev; } ;
struct TYPE_3__ {int vendor; int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__,int ,int *,int ,scalar_t__,int ,struct bnad_iocmd_comp*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct bnad*,scalar_t__,scalar_t__*) ;
 int FUNC_2 (int *) ;
 struct bnad* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct net_device *VAR_3, struct ethtool_eeprom *VAR_4,
  u8 *VAR_5)
{
 struct bnad *VAR_6 = FUNC_3(VAR_3);
 struct bnad_iocmd_comp VAR_7;
 u32 VAR_8 = 0, VAR_9 = 0;
 unsigned long VAR_10 = 0;
 int VAR_11 = 0;


 VAR_4->magic = VAR_6->pcidev->vendor | (VAR_6->pcidev->device << 16);


 VAR_8 = FUNC_1(VAR_6,
    VAR_4->offset, &VAR_9);
 if (VAR_8 == 0)
  return -VAR_1;

 VAR_7.bnad = VAR_6;
 VAR_7.comp_status = 0;

 FUNC_2(&VAR_7.comp);
 FUNC_4(&VAR_6->bna_lock, VAR_10);
 VAR_11 = FUNC_0(&VAR_6->bna.flash, VAR_8,
    VAR_6->id, VAR_5, VAR_4->len,
    VAR_4->offset - VAR_9,
    VAR_2, &VAR_7);
 if (VAR_11 != VAR_0) {
  FUNC_5(&VAR_6->bna_lock, VAR_10);
  goto done;
 }

 FUNC_5(&VAR_6->bna_lock, VAR_10);
 FUNC_6(&VAR_7.comp);
 VAR_11 = VAR_7.comp_status;
done:
 return VAR_11;
}
