
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msdos_sb_info {int fat_bits; } ;



__attribute__((used)) static inline bool FUNC_0(const struct msdos_sb_info *VAR_0)
{
 return VAR_0->fat_bits == 32;
}
