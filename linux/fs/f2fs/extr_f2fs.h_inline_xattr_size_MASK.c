
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
typedef int __le32 ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;

__attribute__((used)) static inline int FUNC_2(struct inode *VAR_0)
{
 if (FUNC_0(VAR_0))
  return FUNC_1(VAR_0) * sizeof(__le32);
 return 0;
}
