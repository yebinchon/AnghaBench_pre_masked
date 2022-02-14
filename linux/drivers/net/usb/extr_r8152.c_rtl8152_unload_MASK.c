
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8152 {scalar_t__ version; int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct r8152*,int) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct r8152 *VAR_2)
{
 if (FUNC_1(VAR_0, &VAR_2->flags))
  return;

 if (VAR_2->version != VAR_1)
  FUNC_0(VAR_2, 1);
}
