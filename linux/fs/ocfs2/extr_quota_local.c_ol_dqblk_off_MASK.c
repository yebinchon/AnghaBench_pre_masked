
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize_bits; } ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (struct super_block*,int,int) ;
 scalar_t__ FUNC_1 (struct super_block*,int,int) ;

__attribute__((used)) static loff_t FUNC_2(struct super_block *VAR_0, int VAR_1, int VAR_2)
{
 return (FUNC_0(VAR_0, VAR_1, VAR_2) << VAR_0->s_blocksize_bits) +
        FUNC_1(VAR_0, VAR_1, VAR_2);
}
