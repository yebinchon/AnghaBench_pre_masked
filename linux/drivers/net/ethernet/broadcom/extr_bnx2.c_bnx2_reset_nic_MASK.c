
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2 {int dummy; } ;


 int FUNC_0 (struct bnx2*) ;
 int FUNC_1 (struct bnx2*) ;
 int FUNC_2 (struct bnx2*) ;
 int FUNC_3 (struct bnx2*,int ) ;

__attribute__((used)) static int
FUNC_4(struct bnx2 *VAR_0, u32 VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_3(VAR_0, VAR_1);
 FUNC_0(VAR_0);
 if (VAR_2)
  return VAR_2;

 if ((VAR_2 = FUNC_2(VAR_0)) != 0)
  return VAR_2;

 FUNC_1(VAR_0);
 return 0;
}
