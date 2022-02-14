
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;

__attribute__((used)) static unsigned long FUNC_0(struct super_block *VAR_4, unsigned long VAR_5)
{
 unsigned long VAR_6;

 VAR_6 = (VAR_5 * (unsigned long)VAR_4) ^ (VAR_0 + VAR_5) /
   VAR_1;
 VAR_6 = VAR_6 ^ ((VAR_6 ^ VAR_0) >> VAR_3);
 return VAR_6 & VAR_2;
}
