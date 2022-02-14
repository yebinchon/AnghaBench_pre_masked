
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct file {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct file*,void const*,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, const void *VAR_2, u32 VAR_3, loff_t *VAR_4)
{
 int VAR_5;
 u32 VAR_6 = 0;

 while (VAR_6 < VAR_3) {
  VAR_5 = FUNC_0(VAR_1, VAR_2 + VAR_6, VAR_3 - VAR_6, VAR_4);




  if (VAR_5 < 0)
   return VAR_5;
  if (VAR_5 == 0) {
   return -VAR_0;
  }
  VAR_6 += VAR_5;
 }

 return 0;
}
