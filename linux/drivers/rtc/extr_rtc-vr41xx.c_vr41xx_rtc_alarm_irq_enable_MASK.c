
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3, unsigned int VAR_4)
{
 FUNC_2(&VAR_2);
 if (VAR_4) {
  if (!VAR_1) {
   FUNC_1(VAR_0);
   VAR_1 = 1;
  }
 } else {
  if (VAR_1) {
   FUNC_0(VAR_0);
   VAR_1 = 0;
  }
 }
 FUNC_3(&VAR_2);
 return 0;
}
