
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vc_data {int dummy; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (struct vc_data*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void FUNC_4(struct vc_data *VAR_5)
{
 int VAR_6 = FUNC_0(VAR_5);
 u16 VAR_7;

 VAR_2 |= 0x01;
 if (VAR_6 == 0) {
  FUNC_3("%s\n", FUNC_2(VAR_0));
  return;
 }
 VAR_7 = VAR_1[--VAR_6];
 VAR_3 -= (VAR_4 - VAR_6) * 2;
 VAR_4 = VAR_6;
 FUNC_3("%d, ", ++VAR_6);
 FUNC_1(VAR_7);
}
