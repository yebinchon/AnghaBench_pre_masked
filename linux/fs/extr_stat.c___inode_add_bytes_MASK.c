
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_bytes; scalar_t__ i_blocks; } ;
typedef int loff_t ;



void FUNC_0(struct inode *VAR_0, loff_t VAR_1)
{
 VAR_0->i_blocks += VAR_1 >> 9;
 VAR_1 &= 511;
 VAR_0->i_bytes += VAR_1;
 if (VAR_0->i_bytes >= 512) {
  VAR_0->i_blocks++;
  VAR_0->i_bytes -= 512;
 }
}
