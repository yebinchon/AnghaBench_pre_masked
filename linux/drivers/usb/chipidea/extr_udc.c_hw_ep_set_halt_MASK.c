
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ci_hdrc {int dummy; } ;
typedef enum ci_hw_regs { ____Placeholder_ci_hw_regs } ci_hw_regs ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ci_hdrc*,int,int) ;
 int FUNC_1 (struct ci_hdrc*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct ci_hdrc *VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
 if (VAR_10 != 0 && VAR_10 != 1)
  return -VAR_0;

 do {
  enum ci_hw_regs VAR_11 = VAR_5 + VAR_8;
  u32 VAR_12 = (VAR_9 == VAR_6) ? VAR_4 : VAR_2;
  u32 VAR_13 = (VAR_9 == VAR_6) ? VAR_3 : VAR_1;


  FUNC_1(VAR_7, VAR_11, VAR_12|VAR_13,
     VAR_10 ? VAR_12 : VAR_13);
 } while (VAR_10 != FUNC_0(VAR_7, VAR_8, VAR_9));

 return 0;
}
