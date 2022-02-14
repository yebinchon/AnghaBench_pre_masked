
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct bnx2x {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int VAR_0 ;
 int FUNC_1 (struct bnx2x*,int ) ;
 int FUNC_2 (struct bnx2x*,int ,int ) ;
 int FUNC_3 (struct bnx2x*) ;

int FUNC_4(struct bnx2x *VAR_1, u16 VAR_2)
{
 u32 VAR_3;

 if (FUNC_0(VAR_1) && VAR_2 >= VAR_0)
  return -1;


 VAR_3 = FUNC_3(VAR_1);
 FUNC_2(VAR_1, VAR_3, VAR_2);
 FUNC_1(VAR_1, VAR_3);
 return 0;
}
