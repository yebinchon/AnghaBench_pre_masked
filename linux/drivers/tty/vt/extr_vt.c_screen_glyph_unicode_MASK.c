
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vc_data {int vc_cols; } ;
struct uni_screen {int ** lines; } ;


 struct uni_screen* FUNC_0 (struct vc_data*) ;
 int FUNC_1 (struct vc_data*,int ,int) ;
 int FUNC_2 (struct vc_data*,int) ;

u32 FUNC_3(struct vc_data *VAR_0, int VAR_1)
{
 struct uni_screen *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2)
  return VAR_2->lines[VAR_1 / VAR_0->vc_cols][VAR_1 % VAR_0->vc_cols];
 return FUNC_1(VAR_0, FUNC_2(VAR_0, VAR_1 * 2), 1);
}
