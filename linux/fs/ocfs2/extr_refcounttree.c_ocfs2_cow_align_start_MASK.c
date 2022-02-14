
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (struct super_block*) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct super_block *VAR_0,
       unsigned int VAR_1,
       unsigned int VAR_2)
{
 FUNC_0(VAR_1 > VAR_2);

 return VAR_1 + ((VAR_2 - VAR_1) & FUNC_1(VAR_0));
}
