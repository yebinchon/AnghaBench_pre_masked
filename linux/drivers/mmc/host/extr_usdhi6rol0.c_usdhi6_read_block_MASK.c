
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usdhi6_host {int wait; } ;


 int VAR_0 ;
 int FUNC_0 (struct usdhi6_host*) ;
 int FUNC_1 (struct usdhi6_host*,int) ;

__attribute__((used)) static bool FUNC_2(struct usdhi6_host *VAR_1)
{

 int VAR_2 = FUNC_0(VAR_1);






 FUNC_1(VAR_1, 1);

 if (VAR_2 < 0)
  return 0;

 VAR_1->wait = VAR_0;
 return 1;
}
