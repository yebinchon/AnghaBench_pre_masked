
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iomap_ops {int dummy; } ;
struct inode {int dummy; } ;
typedef unsigned int loff_t ;


 unsigned int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,unsigned int,unsigned int,int*,struct iomap_ops const*) ;

int
FUNC_2(struct inode *VAR_0, loff_t VAR_1, bool *VAR_2,
  const struct iomap_ops *VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_0);
 unsigned int VAR_5 = VAR_1 & (VAR_4 - 1);


 if (!VAR_5)
  return 0;
 return FUNC_1(VAR_0, VAR_1, VAR_4 - VAR_5, VAR_2, VAR_3);
}
