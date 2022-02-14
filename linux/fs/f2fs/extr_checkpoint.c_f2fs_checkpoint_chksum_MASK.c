
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
struct f2fs_checkpoint {int checksum_offset; } ;
typedef int chksum ;
typedef int __u8 ;
typedef int __u32 ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct f2fs_sb_info*,int ,int *,scalar_t__) ;
 int FUNC_1 (struct f2fs_sb_info*,struct f2fs_checkpoint*,unsigned int) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static __u32 FUNC_3(struct f2fs_sb_info *VAR_2,
      struct f2fs_checkpoint *VAR_3)
{
 unsigned int VAR_4 = FUNC_2(VAR_3->checksum_offset);
 __u32 VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
 if (VAR_4 < VAR_0) {
  VAR_4 += sizeof(VAR_5);
  VAR_5 = FUNC_0(VAR_2, VAR_5, (__u8 *)VAR_3 + VAR_4,
      VAR_1 - VAR_4);
 }
 return VAR_5;
}
