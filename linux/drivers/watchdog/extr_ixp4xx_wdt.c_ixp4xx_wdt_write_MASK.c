
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
typedef size_t ssize_t ;
typedef int loff_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (char,char const*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 () ;
 int VAR_3 ;

__attribute__((used)) static ssize_t
FUNC_4(struct file *VAR_4, const char *VAR_5, size_t VAR_6, loff_t *VAR_7)
{
 if (VAR_6) {
  if (!VAR_2) {
   size_t VAR_8;

   FUNC_0(VAR_1, &VAR_3);

   for (VAR_8 = 0; VAR_8 != VAR_6; VAR_8++) {
    char VAR_9;

    if (FUNC_1(VAR_9, VAR_5 + VAR_8))
     return -VAR_0;
    if (VAR_9 == 'V')
     FUNC_2(VAR_1, &VAR_3);
   }
  }
  FUNC_3();
 }
 return VAR_6;
}
