
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnx2*,int ) ;
 int FUNC_1 (struct bnx2*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct bnx2 *VAR_5)
{
 u32 VAR_6;
 int VAR_7;


 FUNC_1(VAR_5, VAR_0, VAR_2);
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_6 = FUNC_0(VAR_5, VAR_0);
  if (VAR_6 & VAR_1)
   break;

  FUNC_2(5);
 }

 if (VAR_7 >= VAR_4)
  return -VAR_3;

 return 0;
}
