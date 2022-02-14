
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2(int VAR_4)
{
 int VAR_5, VAR_6 = VAR_4 >> 8;

 VAR_4 &= 0xff;
 for (VAR_5 = 0; VAR_5 < 6; VAR_5++) {
  if (VAR_6 & VAR_2[VAR_5])
   FUNC_1(" %s", FUNC_0(VAR_1 + VAR_5));
 }
 if ((VAR_4 > 0) && (VAR_4 <= VAR_3))
  FUNC_1(" %s\n",
        FUNC_0(VAR_0 + (VAR_4 - 1)));
}
