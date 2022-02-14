
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esas2r_adapter {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct esas2r_adapter*,int ) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

bool FUNC_3(struct esas2r_adapter *VAR_2)
{
 if (FUNC_2(VAR_0, &VAR_2->flags))
  return 0;

 if (FUNC_0(VAR_2, VAR_1) == 0xFFFFFFFF) {
  FUNC_1(VAR_0, &VAR_2->flags);

  return 0;
 }
 return 1;
}
