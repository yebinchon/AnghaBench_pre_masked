
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_0)
{
 int VAR_1[4] = {0};
 int VAR_2 = 0, VAR_3 = 0;
 char VAR_4;
 const char *VAR_5 = VAR_0;


 if ((FUNC_2(VAR_0) > 15) || (FUNC_2(VAR_0) < 7))
  goto end;

 while ((VAR_4 = *VAR_5++)) {
  if (VAR_4 == '.') {
   VAR_2++;
   continue;
  }

  if (VAR_2 > 3 || !FUNC_1(VAR_4))
   goto end;

  VAR_1[VAR_2] = VAR_1[VAR_2] * 10 + (VAR_4 - '0');
 }


 for (VAR_2 = 3; VAR_2 >= 0; VAR_2--)
  if (VAR_1[VAR_2] > 0xff)
   goto end;

 VAR_3 |= (VAR_1[0] << 24) | VAR_1[1] << 16 | VAR_1[2] << 8 | VAR_1[3];

end:
 if (VAR_3 == 0) {
  FUNC_0("Invalid version string [%s].\n", VAR_0);

  return -1;
 }

 return VAR_3;
}
