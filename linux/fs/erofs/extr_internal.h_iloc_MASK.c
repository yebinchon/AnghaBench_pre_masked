
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct erofs_sb_info {int islotbits; int meta_blkaddr; } ;
typedef scalar_t__ erofs_off_t ;
typedef int erofs_nid_t ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline erofs_off_t FUNC_1(struct erofs_sb_info *VAR_0, erofs_nid_t VAR_1)
{
 return FUNC_0(VAR_0->meta_blkaddr) + (VAR_1 << VAR_0->islotbits);
}
