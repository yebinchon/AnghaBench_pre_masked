
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct work_struct *VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = 0;

 for (VAR_4=0; VAR_4<VAR_1; VAR_4++) {
  VAR_5 = FUNC_0(VAR_4);
  if (VAR_5 > VAR_6)
   VAR_6 = VAR_5;
 }

 if (VAR_6 <= VAR_0)
  FUNC_3(&VAR_2, FUNC_1(5000));
 else
  FUNC_2(1);
}
