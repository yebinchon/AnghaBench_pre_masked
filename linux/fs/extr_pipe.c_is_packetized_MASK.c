
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_flags; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct file *VAR_1)
{
 return (VAR_1->f_flags & VAR_0) != 0;
}
