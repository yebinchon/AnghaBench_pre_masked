
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (scalar_t__,unsigned int) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (unsigned int,int ,char*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(unsigned VAR_4)
{
 int VAR_5;

 if (!FUNC_3(VAR_4, VAR_0, "3c515"))
  return 0;

 if ((FUNC_0(VAR_4 + 0x2002) & 0x1f0) != (VAR_4 & 0x1f0)) {
  FUNC_2(VAR_4, VAR_0);
  return 0;
 }

 FUNC_1(VAR_1 + 7, VAR_4 + VAR_2);

 for (VAR_5 = 4; VAR_5 >= 0; VAR_5--) {
  FUNC_4(162);
  if ((FUNC_0(VAR_4 + VAR_2) & 0x0200) == 0)
   break;
 }
 if (FUNC_0(VAR_4 + VAR_3) != 0x6d50) {
  FUNC_2(VAR_4, VAR_0);
  return 0;
 }
 return 1;
}
