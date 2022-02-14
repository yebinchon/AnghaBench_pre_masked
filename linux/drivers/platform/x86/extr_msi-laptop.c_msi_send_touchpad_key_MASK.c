
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct work_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int*) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct work_struct *VAR_5)
{
 u8 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_2, &VAR_6);
 if (VAR_7 < 0)
  return;

 FUNC_1(VAR_4,
  (VAR_6 & VAR_3) ?
  VAR_1 : VAR_0, 1, 1);
}
