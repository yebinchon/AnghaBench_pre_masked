
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt3_board {scalar_t__* regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct pt3_board *VAR_3, u32 *VAR_4, int VAR_5)
{
 int VAR_6;
 u32 VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_7 = FUNC_0(VAR_3->regs[0] + VAR_1);
  if (!(VAR_7 & VAR_2))
   break;
  FUNC_1(500, 750);
 }
 if (VAR_6 >= VAR_5)
  return -VAR_0;
 if (VAR_4)
  *VAR_4 = VAR_7;
 return 0;
}
