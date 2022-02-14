
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {unsigned long i_size; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;

__attribute__((used)) static unsigned FUNC_0(struct inode *VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5 = VAR_3->i_size;
 VAR_5 -= VAR_4 << VAR_0;
 if (VAR_5 > VAR_1)
  VAR_5 = VAR_1;
 return VAR_5 / VAR_2;
}
