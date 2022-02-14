
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2(struct vc_data *VAR_3)
{
 if (VAR_2 & 0x80) {
  VAR_2 = 0;
  FUNC_1("%s\n", FUNC_0(VAR_1));
 } else {
  VAR_2 |= 0x80;
  FUNC_1("%s\n", FUNC_0(VAR_0));
 }
}
