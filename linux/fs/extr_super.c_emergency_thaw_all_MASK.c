
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct work_struct*,int ) ;
 int VAR_1 ;
 struct work_struct* FUNC_1 (int,int ) ;
 int FUNC_2 (struct work_struct*) ;

void FUNC_3(void)
{
 struct work_struct *VAR_2;

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (VAR_2) {
  FUNC_0(VAR_2, VAR_1);
  FUNC_2(VAR_2);
 }
}
