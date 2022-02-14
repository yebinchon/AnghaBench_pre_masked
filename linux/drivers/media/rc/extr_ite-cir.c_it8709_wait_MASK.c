
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ite_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ite_dev*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct ite_dev *VAR_2)
{
 int VAR_3 = 0;




 for (VAR_3 = 0; VAR_3 < 15000; VAR_3++) {
  FUNC_1(2);
  if (FUNC_0(VAR_2, VAR_1) == VAR_0)
   break;
 }
}
