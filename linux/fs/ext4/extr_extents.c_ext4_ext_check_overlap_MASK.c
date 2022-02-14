
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext4_sb_info {int dummy; } ;
struct ext4_extent {void* ee_len; int ee_block; } ;
struct ext4_ext_path {TYPE_1__* p_ext; } ;
typedef scalar_t__ ext4_lblk_t ;
struct TYPE_2__ {int ee_block; } ;


 scalar_t__ FUNC_0 (struct ext4_sb_info*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (scalar_t__) ;
 unsigned int FUNC_2 (struct ext4_extent*) ;
 scalar_t__ FUNC_3 (struct ext4_ext_path*) ;
 unsigned int FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static unsigned int FUNC_6(struct ext4_sb_info *VAR_1,
        struct inode *VAR_2,
        struct ext4_extent *VAR_3,
        struct ext4_ext_path *VAR_4)
{
 ext4_lblk_t VAR_5, VAR_6;
 unsigned int VAR_7, VAR_8;
 unsigned int VAR_9 = 0;

 VAR_5 = FUNC_5(VAR_3->ee_block);
 VAR_8 = FUNC_2(VAR_3);
 VAR_7 = FUNC_4(VAR_2);
 if (!VAR_4[VAR_7].p_ext)
  goto out;
 VAR_6 = FUNC_0(VAR_1, FUNC_5(VAR_4[VAR_7].p_ext->ee_block));





 if (VAR_6 < VAR_5) {
  VAR_6 = FUNC_3(VAR_4);
  if (VAR_6 == VAR_0)
   goto out;
  VAR_6 = FUNC_0(VAR_1, VAR_6);
 }


 if (VAR_5 + VAR_8 < VAR_5) {
  VAR_8 = VAR_0 - VAR_5;
  VAR_3->ee_len = FUNC_1(VAR_8);
  VAR_9 = 1;
 }


 if (VAR_5 + VAR_8 > VAR_6) {
  VAR_3->ee_len = FUNC_1(VAR_6 - VAR_5);
  VAR_9 = 1;
 }
out:
 return VAR_9;
}
