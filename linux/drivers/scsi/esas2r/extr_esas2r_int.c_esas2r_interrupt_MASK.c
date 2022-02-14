
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esas2r_adapter {int flags2; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct esas2r_adapter*) ;
 int FUNC_1 (struct esas2r_adapter*) ;
 int FUNC_2 (int ,int *) ;

irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct esas2r_adapter *VAR_5 = (struct esas2r_adapter *)VAR_4;

 if (!FUNC_0(VAR_5))
  return VAR_2;

 FUNC_2(VAR_0, &VAR_5->flags2);
 FUNC_1(VAR_5);

 return VAR_1;
}
