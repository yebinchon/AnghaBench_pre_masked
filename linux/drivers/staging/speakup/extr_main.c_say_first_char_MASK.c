
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct vc_data {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_0 (struct vc_data*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void FUNC_4(struct vc_data *VAR_6)
{
 int VAR_7, VAR_8 = FUNC_0(VAR_6);
 u16 VAR_9;

 VAR_3 |= 0x01;
 if (VAR_8 == 0) {
  FUNC_3("%s\n", FUNC_2(VAR_0));
  return;
 }
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
  if (VAR_2[VAR_7] != VAR_1)
   break;
 VAR_9 = VAR_2[VAR_7];
 VAR_4 -= (VAR_5 - VAR_7) * 2;
 VAR_5 = VAR_7;
 FUNC_3("%d, ", ++VAR_7);
 FUNC_1(VAR_9);
}
