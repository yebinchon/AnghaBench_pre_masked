
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(u8 *VAR_1)
{

 if (FUNC_0(VAR_1) || (VAR_1[0] & 0x01)) {
  FUNC_2("MAC invalid, restoring default\n");
  FUNC_1(VAR_1, VAR_0, 6);
 }
}
