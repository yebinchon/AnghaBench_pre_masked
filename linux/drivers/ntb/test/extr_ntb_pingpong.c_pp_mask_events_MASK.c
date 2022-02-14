
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pp_ctx {int ntb; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct pp_ctx *VAR_0)
{
 u64 VAR_1, VAR_2;
 int VAR_3;

 VAR_1 = FUNC_1(VAR_0->ntb);
 VAR_3 = FUNC_0(VAR_0->ntb, VAR_1);
 if (VAR_3)
  return VAR_3;


 if (FUNC_2(VAR_0->ntb) < 1)
  return 0;

 VAR_2 = FUNC_4(VAR_0->ntb) | FUNC_3(VAR_0->ntb);
 return FUNC_5(VAR_0->ntb, VAR_2);
}
