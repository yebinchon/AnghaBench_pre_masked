
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_item {struct config_item* ci_parent; } ;


 int FUNC_0 (struct config_item*) ;
 int FUNC_1 (struct config_item*) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct config_item * VAR_0, char * VAR_1, int VAR_2)
{
 struct config_item * VAR_3;

 --VAR_2;
 for (VAR_3 = VAR_0; VAR_3 && !FUNC_1(VAR_3); VAR_3 = VAR_3->ci_parent) {
  int VAR_4 = FUNC_3(FUNC_0(VAR_3));


  VAR_2 -= VAR_4;
  FUNC_2(VAR_1 + VAR_2, FUNC_0(VAR_3), VAR_4);
  *(VAR_1 + --VAR_2) = '/';
 }
}
