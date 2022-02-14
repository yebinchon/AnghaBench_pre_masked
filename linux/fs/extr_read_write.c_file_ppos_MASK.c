
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_mode; int f_pos; } ;
typedef int loff_t ;


 int VAR_0 ;

__attribute__((used)) static inline loff_t *FUNC_0(struct file *VAR_1)
{
 return VAR_1->f_mode & VAR_0 ? ((void*)0) : &VAR_1->f_pos;
}
