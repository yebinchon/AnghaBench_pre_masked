
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static bool
FUNC_5(u8 *VAR_0)
{
 bool VAR_1 = 1;
 FUNC_0();


 if (FUNC_2(VAR_0)) {
  FUNC_4("MAC address is multicast\n");
  VAR_1 = 0;
 }

 else if (FUNC_1(VAR_0)) {
  FUNC_4("MAC address is broadcast\n");
  VAR_1 = 0;
 }

 else if (FUNC_3(VAR_0)) {
  FUNC_4("MAC address is all zeros\n");
  VAR_1 = 0;
 }
 return VAR_1;
}
