
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u16 ;
struct vc_data {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vc_data*,int *,scalar_t__*) ;
 int FUNC_2 (struct vc_data*) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(struct vc_data *VAR_5)
{
 u16 VAR_6;

 VAR_2 = VAR_0;
 VAR_6 = FUNC_1(VAR_5, (u_short *)VAR_3, &VAR_0);
 if (VAR_0 != VAR_2) {
  if (VAR_1 & 1)
   FUNC_0(VAR_4);
  if (VAR_1 & 2)
   FUNC_2(VAR_5);
 }
 FUNC_3(VAR_6);
}
