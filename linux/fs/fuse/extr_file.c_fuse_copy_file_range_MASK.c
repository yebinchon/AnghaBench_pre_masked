
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*,int ,struct file*,int ,size_t,unsigned int) ;
 int FUNC_1 (struct file*,int ,struct file*,int ,size_t,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_2(struct file *VAR_2, loff_t VAR_3,
        struct file *VAR_4, loff_t VAR_5,
        size_t VAR_6, unsigned int VAR_7)
{
 ssize_t VAR_8;

 VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5,
         VAR_6, VAR_7);

 if (VAR_8 == -VAR_0 || VAR_8 == -VAR_1)
  VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4,
           VAR_5, VAR_6, VAR_7);
 return VAR_8;
}
