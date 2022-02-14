
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_bootrom {int * fw; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct gb_bootrom *VAR_0)
{
 if (!VAR_0->fw)
  return;

 FUNC_0(VAR_0->fw);
 VAR_0->fw = ((void*)0);
}
