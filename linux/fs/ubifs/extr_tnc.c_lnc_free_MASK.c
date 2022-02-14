
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_zbranch {int * leaf; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ubifs_zbranch *VAR_0)
{
 if (!VAR_0->leaf)
  return;
 FUNC_0(VAR_0->leaf);
 VAR_0->leaf = ((void*)0);
}
