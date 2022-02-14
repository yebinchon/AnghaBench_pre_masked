
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
typedef int loff_t ;
typedef int __u64 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*) ;

__attribute__((used)) static inline loff_t FUNC_1(struct inode *VAR_2)
{
 if (FUNC_0(VAR_2) == VAR_0)
  return (loff_t) VAR_1;

 return (loff_t) ((~(__u64) 0) >> 4);
}
