
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bnx2x*,int) ;

__attribute__((used)) static int FUNC_1(struct bnx2x *VAR_1)
{
 u32 VAR_2;
 int VAR_3 = 0;


 for (VAR_2 = 1; VAR_2 <= VAR_0; VAR_2++)
  VAR_3 += FUNC_0(VAR_1, VAR_2);

 return VAR_3;
}
