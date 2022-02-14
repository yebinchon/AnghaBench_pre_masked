
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct super_block {int s_blocksize_bits; TYPE_1__* s_bdev; } ;
struct kernel_lb_addr {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int sector_t ;
struct TYPE_2__ {int bd_inode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct super_block*,int ) ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct super_block*,struct buffer_head*,struct kernel_lb_addr*) ;
 struct buffer_head* FUNC_5 (struct super_block*,int ,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_6(struct super_block *VAR_3, sector_t VAR_4,
      struct kernel_lb_addr *VAR_5)
{
 struct buffer_head *VAR_6;
 uint16_t VAR_7;
 int VAR_8;

 if (FUNC_0(VAR_3, VAR_2) &&
     FUNC_3(VAR_4) >=
     FUNC_2(VAR_3->s_bdev->bd_inode) >> VAR_3->s_blocksize_bits)
  return -VAR_0;

 VAR_6 = FUNC_5(VAR_3, VAR_4, VAR_4, &VAR_7);
 if (!VAR_6)
  return -VAR_0;
 if (VAR_7 != VAR_1) {
  FUNC_1(VAR_6);
  return -VAR_0;
 }
 VAR_8 = FUNC_4(VAR_3, VAR_6, VAR_5);
 FUNC_1(VAR_6);
 return VAR_8;
}
