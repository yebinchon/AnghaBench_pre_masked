
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdm {int port; } ;


 int FUNC_0 (struct gdm*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct gdm *VAR_1 = VAR_0;

 if (!FUNC_0(VAR_1))
  return;

 FUNC_1(&VAR_1->port);
}
