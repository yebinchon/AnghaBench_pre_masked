
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pr_ops {int (* pr_register ) (struct block_device*,int ,int ,int) ;} ;
struct TYPE_4__ {int pr_key; } ;
struct pnfs_block_volume {TYPE_1__ scsi; } ;
struct pnfs_block_dev {int pr_registered; struct block_device* bdev; int pr_key; int map; int len; } ;
struct nfs_server {int dummy; } ;
struct block_device {TYPE_3__* bd_disk; int bd_inode; } ;
typedef int gfp_t ;
struct TYPE_6__ {int disk_name; TYPE_2__* fops; } ;
struct TYPE_5__ {struct pr_ops* pr_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct block_device*) ;
 int FUNC_1 (struct block_device*) ;
 int VAR_3 ;
 struct block_device* FUNC_2 (struct pnfs_block_volume*) ;
 struct block_device* FUNC_3 (struct pnfs_block_volume*) ;
 int FUNC_4 (struct pnfs_block_volume*) ;
 int FUNC_5 (struct block_device*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,int ,int ) ;
 int FUNC_9 (struct block_device*,int ,int ,int) ;

__attribute__((used)) static int
FUNC_10(struct nfs_server *VAR_4, struct pnfs_block_dev *VAR_5,
  struct pnfs_block_volume *VAR_6, int VAR_7, gfp_t VAR_8)
{
 struct pnfs_block_volume *VAR_9 = &VAR_6[VAR_7];
 struct block_device *VAR_10;
 const struct pr_ops *VAR_11;
 int VAR_12;

 if (!FUNC_4(VAR_9))
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_9);
 if (FUNC_0(VAR_10))
  VAR_10 = FUNC_3(VAR_9);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);
 VAR_5->bdev = VAR_10;

 VAR_5->len = FUNC_6(VAR_5->bdev->bd_inode);
 VAR_5->map = VAR_3;
 VAR_5->pr_key = VAR_9->scsi.pr_key;

 FUNC_8("pNFS: using block device %s (reservation key 0x%llx)\n",
  VAR_5->bdev->bd_disk->disk_name, VAR_5->pr_key);

 VAR_11 = VAR_5->bdev->bd_disk->fops->pr_ops;
 if (!VAR_11) {
  FUNC_7("pNFS: block device %s does not support reservations.",
    VAR_5->bdev->bd_disk->disk_name);
  VAR_12 = -VAR_0;
  goto out_blkdev_put;
 }

 VAR_12 = VAR_11->pr_register(VAR_5->bdev, 0, VAR_5->pr_key, 1);
 if (VAR_12) {
  FUNC_7("pNFS: failed to register key for block device %s.",
    VAR_5->bdev->bd_disk->disk_name);
  goto out_blkdev_put;
 }

 VAR_5->pr_registered = 1;
 return 0;

out_blkdev_put:
 FUNC_5(VAR_5->bdev, VAR_1 | VAR_2);
 return VAR_12;
}
