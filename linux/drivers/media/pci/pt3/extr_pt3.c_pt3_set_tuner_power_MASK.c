
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_val {int member_0; int member_1; int val; } ;
struct pt3_board {int * adaps; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct reg_val*,int) ;

__attribute__((used)) static int
FUNC_1(struct pt3_board *VAR_1, bool VAR_2, bool VAR_3)
{
 struct reg_val VAR_4 = { 0x1e, 0x99 };

 if (VAR_2)
  VAR_4.val |= 0x40;
 if (VAR_3)
  VAR_4.val |= 0x04;
 return FUNC_0(VAR_1->adaps[VAR_0 - 1], &VAR_4, 1);
}
