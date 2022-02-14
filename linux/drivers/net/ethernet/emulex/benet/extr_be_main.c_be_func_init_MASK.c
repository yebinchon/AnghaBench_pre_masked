
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct be_adapter*,int ) ;
 int FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (struct be_adapter*) ;
 int FUNC_3 (struct be_adapter*) ;
 int FUNC_4 (struct be_adapter*,int) ;
 scalar_t__ FUNC_5 (struct be_adapter*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct be_adapter *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  return VAR_2;


 FUNC_0(VAR_1, VAR_0);

 if (FUNC_5(VAR_1)) {
  VAR_2 = FUNC_2(VAR_1);
  if (VAR_2)
   return VAR_2;


  FUNC_6(100);
 }


 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  return VAR_2;


 FUNC_4(VAR_1, 1);

 return 0;
}
