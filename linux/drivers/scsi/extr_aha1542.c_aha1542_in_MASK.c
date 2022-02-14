
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_1, u8 *VAR_2, int VAR_3, int VAR_4)
{
 while (VAR_3--) {
  if (!FUNC_3(FUNC_1(VAR_1), VAR_0, VAR_0, 0, VAR_4))
   return 1;
  *VAR_2++ = FUNC_2(FUNC_0(VAR_1));
 }
 return 0;
}
