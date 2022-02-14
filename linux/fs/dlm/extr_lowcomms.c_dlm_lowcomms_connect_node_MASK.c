
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct connection*) ;
 struct connection* FUNC_2 (int,int ) ;

int FUNC_3(int VAR_2)
{
 struct connection *VAR_3;

 if (VAR_2 == FUNC_0())
  return 0;

 VAR_3 = FUNC_2(VAR_2, VAR_1);
 if (!VAR_3)
  return -VAR_0;
 FUNC_1(VAR_3);
 return 0;
}
