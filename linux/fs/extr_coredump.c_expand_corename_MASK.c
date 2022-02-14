
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct core_name {char* corename; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct core_name *VAR_3, int VAR_4)
{
 char *VAR_5 = FUNC_0(VAR_3->corename, VAR_4, VAR_1);

 if (!VAR_5)
  return -VAR_0;

 if (VAR_4 > VAR_2)
  VAR_2 = VAR_4;

 VAR_3->size = FUNC_1(VAR_5);
 VAR_3->corename = VAR_5;
 return 0;
}
