
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef scalar_t__ u_long ;
struct vc_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_0 (struct vc_data*) ;
 int VAR_3 ;
 int FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct vc_data *VAR_4)
{
 u_long VAR_5 = FUNC_0(VAR_4);
 u_short VAR_6 = VAR_3;

 if (VAR_5 == 0)
  return;
 VAR_3 = VAR_0;
 VAR_2[VAR_5++] = VAR_1;
 FUNC_1(VAR_2, VAR_5);
 VAR_3 = VAR_6;
}
