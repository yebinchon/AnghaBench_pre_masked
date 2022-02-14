
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmu_block {int num; unsigned long ofs; } ;
struct mtd_info {struct mdev_part* priv; } ;
struct memcard {unsigned long blocklen; TYPE_1__* parts; } ;
struct mdev_part {struct maple_device* mdev; } ;
struct maple_device {int dummy; } ;
struct TYPE_2__ {unsigned long numblocks; } ;


 int VAR_0 ;
 struct vmu_block* FUNC_0 (int,int ) ;
 struct memcard* FUNC_1 (struct maple_device*) ;

__attribute__((used)) static struct vmu_block *FUNC_2(unsigned long VAR_1,
 struct mtd_info *VAR_2, int VAR_3)
{
 struct vmu_block *VAR_4;
 struct maple_device *VAR_5;
 struct memcard *VAR_6;
 struct mdev_part *VAR_7;
 int VAR_8;

 VAR_7 = VAR_2->priv;
 VAR_5 = VAR_7->mdev;
 VAR_6 = FUNC_1(VAR_5);

 if (VAR_1 >= VAR_6->parts[VAR_3].numblocks * VAR_6->blocklen)
  goto failed;

 VAR_8 = VAR_1 / VAR_6->blocklen;
 if (VAR_8 > VAR_6->parts[VAR_3].numblocks)
  goto failed;

 VAR_4 = FUNC_0(sizeof(struct vmu_block), VAR_0);
 if (!VAR_4)
  goto failed;

 VAR_4->num = VAR_8;
 VAR_4->ofs = VAR_1 % VAR_6->blocklen;
 return VAR_4;

failed:
 return ((void*)0);
}
