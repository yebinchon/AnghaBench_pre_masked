
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_1(int VAR_3, char *VAR_4)
{
 char *VAR_5 = VAR_4;
 int VAR_6 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_4 += FUNC_0(VAR_4, "hs  %04u %03u ",
        (VAR_3 * VAR_2) + VAR_6,
        VAR_0);
  VAR_4 += FUNC_0(VAR_4, "000 00000000 0000000000000000 0-0");
  VAR_4 += FUNC_0(VAR_4, "\n");
 }

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_4 += FUNC_0(VAR_4, "ss  %04u %03u ",
        (VAR_3 * VAR_2) + VAR_1 + VAR_6,
        VAR_0);
  VAR_4 += FUNC_0(VAR_4, "000 00000000 0000000000000000 0-0");
  VAR_4 += FUNC_0(VAR_4, "\n");
 }
 return VAR_4 - VAR_5;
}
