
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_checkpoint {int checksum_offset; } ;
typedef size_t __u64 ;
typedef int __le32 ;


 size_t FUNC_0 (int ) ;

__attribute__((used)) static inline __u64 FUNC_1(struct f2fs_checkpoint *VAR_0)
{
 size_t VAR_1 = FUNC_0(VAR_0->checksum_offset);
 return FUNC_0(*((__le32 *)((unsigned char *)VAR_0 + VAR_1)));
}
