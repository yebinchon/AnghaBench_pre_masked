
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct block_device {TYPE_1__* bd_inode; int bd_dev; } ;
struct TYPE_4__ {char* name; int size; int erasesize; int writesize; int index; int owner; struct block2mtd_dev* priv; int _read; int _sync; int _write; int _erase; int flags; int type; int writebufsize; } ;
struct block2mtd_dev {int write_mutex; TYPE_2__ mtd; int list; struct block_device* blkdev; } ;
typedef int fmode_t ;
typedef int dev_t ;
struct TYPE_3__ {int i_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct block_device*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct block_device* FUNC_2 (int ,int const,struct block2mtd_dev*) ;
 struct block_device* FUNC_3 (char*,int const,struct block2mtd_dev*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct block2mtd_dev*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 char* FUNC_5 (int ,char*,char*) ;
 struct block2mtd_dev* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (char*,int ,char*,int,int) ;
 int FUNC_15 (char*) ;
 int FUNC_16 () ;

__attribute__((used)) static struct block2mtd_dev *FUNC_17(char *VAR_15, int VAR_16,
  int VAR_17)
{

 int VAR_18;

 const fmode_t VAR_19 = VAR_1 | VAR_2 | VAR_0;
 struct block_device *VAR_20;
 struct block2mtd_dev *VAR_21;
 char *VAR_22;

 if (!VAR_15)
  return ((void*)0);

 VAR_21 = FUNC_6(sizeof(struct block2mtd_dev), VAR_3);
 if (!VAR_21)
  return ((void*)0);


 VAR_20 = FUNC_3(VAR_15, VAR_19, VAR_21);






 for (VAR_18 = 0; FUNC_0(VAR_20) && VAR_18 <= VAR_17; VAR_18++) {
  dev_t VAR_23;

  if (VAR_18)





   FUNC_8(1000);
  FUNC_16();

  VAR_23 = FUNC_12(VAR_15);
  if (!VAR_23)
   continue;
  VAR_20 = FUNC_2(VAR_23, VAR_19, VAR_21);
 }


 if (FUNC_0(VAR_20)) {
  FUNC_13("error: cannot open device %s\n", VAR_15);
  goto err_free_block2mtd;
 }
 VAR_21->blkdev = VAR_20;

 if (FUNC_1(VAR_20->bd_dev) == VAR_4) {
  FUNC_13("attempting to use an MTD device as a block device\n");
  goto err_free_block2mtd;
 }

 if ((long)VAR_21->blkdev->bd_inode->i_size % VAR_16) {
  FUNC_13("erasesize must be a divisor of device size\n");
  goto err_free_block2mtd;
 }

 FUNC_11(&VAR_21->write_mutex);



 VAR_22 = FUNC_5(VAR_3, "block2mtd: %s", VAR_15);
 if (!VAR_22)
  goto err_destroy_mutex;

 VAR_21->mtd.name = VAR_22;

 VAR_21->mtd.size = VAR_21->blkdev->bd_inode->i_size & VAR_7;
 VAR_21->mtd.erasesize = VAR_16;
 VAR_21->mtd.writesize = 1;
 VAR_21->mtd.writebufsize = VAR_8;
 VAR_21->mtd.type = VAR_6;
 VAR_21->mtd.flags = VAR_5;
 VAR_21->mtd._erase = VAR_11;
 VAR_21->mtd._write = VAR_14;
 VAR_21->mtd._sync = VAR_13;
 VAR_21->mtd._read = VAR_12;
 VAR_21->mtd.priv = VAR_21;
 VAR_21->mtd.owner = VAR_9;

 if (FUNC_9(&VAR_21->mtd, ((void*)0), 0)) {

  goto err_destroy_mutex;
 }

 FUNC_7(&VAR_21->list, &VAR_10);
 FUNC_14("mtd%d: [%s] erase_size = %dKiB [%d]\n",
  VAR_21->mtd.index,
  VAR_21->mtd.name + FUNC_15("block2mtd: "),
  VAR_21->mtd.erasesize >> 10, VAR_21->mtd.erasesize);
 return VAR_21;

err_destroy_mutex:
 FUNC_10(&VAR_21->write_mutex);
err_free_block2mtd:
 FUNC_4(VAR_21);
 return ((void*)0);
}
