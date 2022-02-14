
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (char*,int,char*,int) ;

__attribute__((used)) static char *FUNC_1(u8 *VAR_0, char *VAR_1, int VAR_2)
{
 int VAR_3;
 char *VAR_4 = VAR_1;

 *VAR_4 = '\0';
 VAR_4 += FUNC_0(VAR_4, VAR_1 + VAR_2 - VAR_4, "%02X", VAR_0[0]);
 for (VAR_3 = 1; VAR_0[VAR_3] != 0xff && ((VAR_3 * 3) < VAR_2); VAR_3++)
  VAR_4 += FUNC_0(VAR_4, VAR_1 + VAR_2 - VAR_4, "-%02X", VAR_0[VAR_3]);

 return VAR_1;
}
