
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int*) ;
 int VAR_3 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(u_char VAR_5)
{
 static int VAR_6 = -1;

 if (VAR_5 == 0x01) {
  unsigned long VAR_7;

  FUNC_1(&VAR_1, VAR_7);
  VAR_2 = 0;
  FUNC_3(&VAR_0);
  FUNC_2(&VAR_1, VAR_7);
 } else if (VAR_5 == 0x13) {
  VAR_4 = 1;
 } else if (VAR_5 == 0x11) {
  VAR_4 = 0;
 } else if (FUNC_0(&VAR_5)) {
  if (VAR_6 == -1)
   VAR_6 = VAR_5;
  else
   VAR_6 = VAR_6 * 10 + VAR_5;
 } else if ((VAR_5 > 31) && (VAR_5 < 127)) {
  if (VAR_6 != -1)
   VAR_3 = (u_char)VAR_6;
  VAR_6 = -1;
 }
}
