
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x_fastpath {int cl_id; int cl_qzone_id; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct bnx2x*,struct bnx2x_fastpath*) ;

__attribute__((used)) static u32 FUNC_6(struct bnx2x_fastpath *VAR_1)
{
 struct bnx2x *VAR_2 = VAR_1->bp;
 u32 VAR_3 = VAR_0;

 if (FUNC_2(VAR_2))
  return FUNC_5(VAR_2, VAR_1);
 else if (!FUNC_1(VAR_2))
  VAR_3 += FUNC_4(VAR_1->cl_qzone_id);
 else
  VAR_3 += FUNC_3(FUNC_0(VAR_2), VAR_1->cl_id);

 return VAR_3;
}
