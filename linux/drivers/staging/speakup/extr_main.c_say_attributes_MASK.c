
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2(struct vc_data *VAR_5)
{
 int VAR_6 = VAR_4 & 0x0f;
 int VAR_7 = VAR_4 >> 4;

 if (VAR_6 > 8) {
  FUNC_1("%s ", FUNC_0(VAR_0));
  VAR_6 -= 8;
 }
 FUNC_1("%s", FUNC_0(VAR_1 + VAR_6));
 if (VAR_7 > 7) {
  FUNC_1(" %s ", FUNC_0(VAR_3));
  VAR_7 -= 8;
 } else {
  FUNC_1(" %s ", FUNC_0(VAR_2));
 }
 FUNC_1("%s\n", FUNC_0(VAR_1 + VAR_7));
}
