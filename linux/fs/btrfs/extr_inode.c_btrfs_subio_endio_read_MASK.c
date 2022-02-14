
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct btrfs_io_bio {int dummy; } ;
typedef int blk_status_t ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int FUNC_1 (struct inode*,struct btrfs_io_bio*) ;
 int FUNC_2 (struct inode*,struct btrfs_io_bio*,int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static blk_status_t FUNC_4(struct inode *VAR_2,
  struct btrfs_io_bio *VAR_3, blk_status_t VAR_4)
{
 bool VAR_5 = FUNC_0(VAR_2)->flags & VAR_1;

 if (VAR_5) {
  if (FUNC_3(VAR_4))
   return FUNC_1(VAR_2, VAR_3);
  else
   return VAR_0;
 } else {
  return FUNC_2(VAR_2, VAR_3, VAR_4);
 }
}
