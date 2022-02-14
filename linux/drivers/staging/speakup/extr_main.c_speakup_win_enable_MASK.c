
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(struct vc_data *VAR_5)
{
 if (VAR_4 < 2) {
  FUNC_1("%s\n", FUNC_0(VAR_0));
  return;
 }
 VAR_3 ^= 1;
 if (VAR_3)
  FUNC_1("%s\n", FUNC_0(VAR_1));
 else
  FUNC_1("%s\n", FUNC_0(VAR_2));
}
