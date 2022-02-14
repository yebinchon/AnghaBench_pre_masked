
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tce_container {int enabled; int locked_pages; int mm; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct tce_container *VAR_0)
{
 if (!VAR_0->enabled)
  return;

 VAR_0->enabled = 0;

 FUNC_0(!VAR_0->mm);
 FUNC_1(VAR_0->mm, VAR_0->locked_pages, 0);
}
