
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_eq {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hinic_eq*) ;
 int FUNC_1 (struct hinic_eq*) ;
 int FUNC_2 (struct hinic_eq*) ;

__attribute__((used)) static void FUNC_3(void *VAR_2)
{
 struct hinic_eq *VAR_3 = VAR_2;

 if (VAR_3->type == VAR_0)
  FUNC_0(VAR_3);
 else if (VAR_3->type == VAR_1)
  FUNC_1(VAR_3);

 FUNC_2(VAR_3);
}
