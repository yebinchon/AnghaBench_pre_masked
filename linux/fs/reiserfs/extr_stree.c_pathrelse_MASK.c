
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct treepath {int path_length; } ;


 int VAR_0 ;
 int FUNC_0 (struct treepath*,int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct treepath *VAR_1)
{
 int VAR_2 = VAR_1->path_length;

 FUNC_1(VAR_2 < VAR_0,
        "PAP-5090: invalid path offset");

 while (VAR_2 > VAR_0)
  FUNC_2(FUNC_0(VAR_1, VAR_2--));

 VAR_1->path_length = VAR_0;
}
