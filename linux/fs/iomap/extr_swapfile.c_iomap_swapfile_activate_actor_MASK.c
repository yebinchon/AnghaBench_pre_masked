
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ length; scalar_t__ addr; } ;
struct iomap_swapfile_info {TYPE_2__ iomap; TYPE_1__* sis; } ;
struct iomap {int type; int flags; scalar_t__ bdev; scalar_t__ addr; scalar_t__ length; } ;
struct inode {int dummy; } ;
typedef int loff_t ;
struct TYPE_3__ {scalar_t__ bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct iomap_swapfile_info*) ;
 int FUNC_1 (TYPE_2__*,struct iomap*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static loff_t FUNC_3(struct inode *VAR_3, loff_t VAR_4,
  loff_t VAR_5, void *VAR_6, struct iomap *VAR_7)
{
 struct iomap_swapfile_info *VAR_8 = VAR_6;
 int VAR_9;

 switch (VAR_7->type) {
 case 129:
 case 128:

  break;
 case 130:

  FUNC_2("swapon: file is inline\n");
  return -VAR_0;
 default:
  FUNC_2("swapon: file has unallocated extents\n");
  return -VAR_0;
 }


 if (VAR_7->flags & VAR_1) {
  FUNC_2("swapon: file is not committed\n");
  return -VAR_0;
 }
 if (VAR_7->flags & VAR_2) {
  FUNC_2("swapon: file has shared extents\n");
  return -VAR_0;
 }


 if (VAR_7->bdev != VAR_8->sis->bdev) {
  FUNC_2("swapon: file is on multiple devices\n");
  return -VAR_0;
 }

 if (VAR_8->iomap.length == 0) {

  FUNC_1(&VAR_8->iomap, VAR_7, sizeof(VAR_8->iomap));
 } else if (VAR_8->iomap.addr + VAR_8->iomap.length == VAR_7->addr) {

  VAR_8->iomap.length += VAR_7->length;
 } else {

  VAR_9 = FUNC_0(VAR_8);
  if (VAR_9)
   return VAR_9;
  FUNC_1(&VAR_8->iomap, VAR_7, sizeof(VAR_8->iomap));
 }
 return VAR_5;
}
