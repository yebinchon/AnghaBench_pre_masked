
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {struct property* value; struct property* name; struct property* next; } ;


 int FUNC_0 (struct property*) ;

__attribute__((used)) static void FUNC_1(struct property *VAR_0)
{
 struct property *VAR_1, *VAR_2;

 for (VAR_1 = VAR_0; VAR_1 != ((void*)0); VAR_1 = VAR_2) {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1->name);
  FUNC_0(VAR_1->value);
  FUNC_0(VAR_1);
 }
}
