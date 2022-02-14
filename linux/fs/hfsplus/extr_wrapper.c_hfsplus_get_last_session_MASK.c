
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {TYPE_3__* s_bdev; } ;
struct TYPE_5__ {scalar_t__ lba; } ;
struct cdrom_tocentry {scalar_t__ cdte_track; int cdte_ctrl; TYPE_1__ cdte_addr; void* cdte_format; } ;
struct TYPE_6__ {scalar_t__ lba; } ;
struct cdrom_multisession {TYPE_2__ addr; scalar_t__ xa_flag; void* addr_format; } ;
typedef int sector_t ;
struct TYPE_8__ {scalar_t__ session; } ;
struct TYPE_7__ {int bd_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int ,unsigned long) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct super_block *VAR_5,
        sector_t *VAR_6, sector_t *VAR_7)
{
 struct cdrom_multisession VAR_8;
 struct cdrom_tocentry VAR_9;
 int VAR_10;


 *VAR_6 = 0;
 *VAR_7 = FUNC_1(VAR_5->s_bdev->bd_inode) >> 9;

 if (FUNC_0(VAR_5)->session >= 0) {
  VAR_9.cdte_track = FUNC_0(VAR_5)->session;
  VAR_9.cdte_format = VAR_3;
  VAR_10 = FUNC_2(VAR_5->s_bdev,
   VAR_1, (unsigned long)&VAR_9);
  if (!VAR_10 && (VAR_9.cdte_ctrl & VAR_2) == 4) {
   *VAR_6 = (sector_t)VAR_9.cdte_addr.lba << 2;
   return 0;
  }
  FUNC_3("invalid session number or type of track\n");
  return -VAR_4;
 }
 VAR_8.addr_format = VAR_3;
 VAR_10 = FUNC_2(VAR_5->s_bdev, VAR_0,
  (unsigned long)&VAR_8);
 if (!VAR_10 && VAR_8.xa_flag)
  *VAR_6 = (sector_t)VAR_8.addr.lba << 2;
 return 0;
}
