
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
 int VAR_2 ;
 int FUNC_0 (int *,scalar_t__,int ,int *,int ,scalar_t__,int ,struct bnad_iocmd_comp*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct bnad*,scalar_t__,scalar_t__*) ;
 int FUNC_2 (int *) ;
 struct bnad* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct net_device *VAR_4, struct ethtool_eeprom *VAR_5,
  u8 *VAR_6)
{
 struct bnad *VAR_7 = FUNC_3(VAR_4);
 struct bnad_iocmd_comp VAR_8;
 u32 VAR_9 = 0, VAR_10 = 0;
 unsigned long VAR_11 = 0;
 int VAR_12 = 0;


 if (VAR_5->magic != (VAR_7->pcidev->vendor |
        (VAR_7->pcidev->device << 16)))
  return -VAR_2;


 VAR_9 = FUNC_1(VAR_7,
    VAR_5->offset, &VAR_10);
 if (VAR_9 == 0)
  return -VAR_1;

 VAR_8.bnad = VAR_7;
 VAR_8.comp_status = 0;

 FUNC_2(&VAR_8.comp);
 FUNC_4(&VAR_7->bna_lock, VAR_11);
 VAR_12 = FUNC_0(&VAR_7->bna.flash, VAR_9,
    VAR_7->id, VAR_6, VAR_5->len,
    VAR_5->offset - VAR_10,
    VAR_3, &VAR_8);
 if (VAR_12 != VAR_0) {
  FUNC_5(&VAR_7->bna_lock, VAR_11);
  goto done;
 }

 FUNC_5(&VAR_7->bna_lock, VAR_11);
 FUNC_6(&VAR_8.comp);
 VAR_12 = VAR_8.comp_status;
done:
 return VAR_12;
}
