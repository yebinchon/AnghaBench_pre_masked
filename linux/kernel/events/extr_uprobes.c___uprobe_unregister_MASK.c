
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uprobe_consumer {int dummy; } ;
struct uprobe {int consumers; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct uprobe*,struct uprobe_consumer*) ;
 int FUNC_2 (struct uprobe*) ;
 int FUNC_3 (struct uprobe*,int *) ;

__attribute__((used)) static void
FUNC_4(struct uprobe *VAR_0, struct uprobe_consumer *VAR_1)
{
 int VAR_2;

 if (FUNC_0(!FUNC_1(VAR_0, VAR_1)))
  return;

 VAR_2 = FUNC_3(VAR_0, ((void*)0));

 if (!VAR_0->consumers && !VAR_2)
  FUNC_2(VAR_0);
}
