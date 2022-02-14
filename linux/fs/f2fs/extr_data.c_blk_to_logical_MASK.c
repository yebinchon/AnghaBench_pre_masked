
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_blkbits; } ;
typedef int sector_t ;
typedef int loff_t ;



__attribute__((used)) static inline loff_t FUNC_0(struct inode *VAR_0, sector_t VAR_1)
{
 return (VAR_1 << VAR_0->i_blkbits);
}
