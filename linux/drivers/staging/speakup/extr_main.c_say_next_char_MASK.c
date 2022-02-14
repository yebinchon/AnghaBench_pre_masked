
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_cols; } ;


 int FUNC_0 (struct vc_data*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct vc_data*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct vc_data *VAR_4)
{
 VAR_1 |= 0x01;
 if (VAR_3 == VAR_4->vc_cols - 1) {
  FUNC_0(VAR_4, VAR_0);
  return;
 }
 VAR_3++;
 VAR_2 += 2;
 FUNC_1(VAR_4);
}
