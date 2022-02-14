
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_size; } ;
typedef int loff_t ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static inline loff_t FUNC_1(const struct inode *VAR_0)
{
 return FUNC_0(VAR_0->i_size, 65536);
}
