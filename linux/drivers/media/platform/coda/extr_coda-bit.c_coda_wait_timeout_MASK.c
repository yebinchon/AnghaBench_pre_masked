
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coda_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct coda_dev*) ;
 unsigned long VAR_1 ;
 unsigned long FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct coda_dev *VAR_2)
{
 unsigned long VAR_3 = VAR_1 + FUNC_1(1000);

 while (FUNC_0(VAR_2)) {
  if (FUNC_2(VAR_1, VAR_3))
   return -VAR_0;
 }
 return 0;
}
