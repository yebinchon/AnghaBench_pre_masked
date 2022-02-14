
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct status_attr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int,int,int ) ;
 int FUNC_1 (int) ;
 int * VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_4;

 VAR_2 = FUNC_0(VAR_3, sizeof(struct status_attr),
          VAR_1);
 if (VAR_2 == ((void*)0))
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  FUNC_1(VAR_4);

 return 0;
}
