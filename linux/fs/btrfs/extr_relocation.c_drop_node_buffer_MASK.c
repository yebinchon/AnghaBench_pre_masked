
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backref_node {int * eb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct backref_node*) ;

__attribute__((used)) static void FUNC_2(struct backref_node *VAR_0)
{
 if (VAR_0->eb) {
  FUNC_1(VAR_0);
  FUNC_0(VAR_0->eb);
  VAR_0->eb = ((void*)0);
 }
}
