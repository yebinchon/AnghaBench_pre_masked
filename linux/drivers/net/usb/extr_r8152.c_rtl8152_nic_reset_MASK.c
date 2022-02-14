
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8152 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct r8152*,int ,int ) ;
 int FUNC_1 (struct r8152*,int ,int ,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct r8152 *VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_3, VAR_1, VAR_2, VAR_0);

 for (VAR_4 = 0; VAR_4 < 1000; VAR_4++) {
  if (!(FUNC_0(VAR_3, VAR_1, VAR_2) & VAR_0))
   break;
  FUNC_2(100, 400);
 }
}
