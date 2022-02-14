
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecryptfs_crypt_stat {int extent_mask; int extent_size; scalar_t__ extent_shift; } ;



__attribute__((used)) static void FUNC_0(struct ecryptfs_crypt_stat *VAR_0)
{
 int VAR_1;

 VAR_0->extent_mask = 0xFFFFFFFF;
 VAR_0->extent_shift = 0;
 if (VAR_0->extent_size == 0)
  return;
 VAR_1 = VAR_0->extent_size;
 while ((VAR_1 & 0x01) == 0) {
  VAR_1 >>= 1;
  VAR_0->extent_mask <<= 1;
  VAR_0->extent_shift++;
 }
}
