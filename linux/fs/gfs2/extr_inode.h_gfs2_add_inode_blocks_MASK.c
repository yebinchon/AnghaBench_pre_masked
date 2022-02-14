
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_blocks; scalar_t__ i_blkbits; } ;
typedef scalar_t__ s64 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct inode *VAR_1, s64 VAR_2)
{
 VAR_2 <<= VAR_1->i_blkbits - VAR_0;
 FUNC_1(FUNC_0(VAR_1), (VAR_2 >= 0 || VAR_1->i_blocks >= -VAR_2));
 VAR_1->i_blocks += VAR_2;
}
