
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {unsigned int i_size; } ;


 unsigned long VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static unsigned int FUNC_0(struct inode *VAR_2, unsigned long VAR_3)
{
 unsigned int VAR_4 = VAR_2->i_size;

 VAR_4 -= VAR_3 << VAR_0;
 if (VAR_4 > VAR_1)
  VAR_4 = VAR_1;
 return VAR_4;
}
