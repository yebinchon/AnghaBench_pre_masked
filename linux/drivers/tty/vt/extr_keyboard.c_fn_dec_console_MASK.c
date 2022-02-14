
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct vc_data *VAR_3)
{
 int VAR_4, VAR_5 = VAR_1;


 if (VAR_2 != -1)
  VAR_5 = VAR_2;

 for (VAR_4 = VAR_5 - 1; VAR_4 != VAR_5; VAR_4--) {
  if (VAR_4 == -1)
   VAR_4 = VAR_0 - 1;
  if (FUNC_1(VAR_4))
   break;
 }
 FUNC_0(VAR_4);
}
