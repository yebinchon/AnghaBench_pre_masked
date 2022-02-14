
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8152 {int flags; int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (struct r8152*) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_3)
{
 struct r8152 *VAR_4;

 VAR_4 = (struct r8152 *)VAR_3;

 if (FUNC_2(VAR_0, &VAR_4->flags))
  return;

 if (!FUNC_2(VAR_2, &VAR_4->flags))
  return;



 if (!FUNC_1(VAR_4->netdev))
  return;

 FUNC_0(VAR_1, &VAR_4->flags);

 FUNC_3(VAR_4);
}
