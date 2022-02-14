
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int buf ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const char *VAR_1, size_t VAR_2,
     int (*VAR_3)(char *, void *), void *VAR_4)
{

 char VAR_5[1 + sizeof(u32) * 8 + 1 + 1];
 const char *VAR_6 = VAR_1;
 int VAR_7, VAR_8;

 if (!VAR_3)
  return -VAR_0;

 while (VAR_6 - VAR_1 < VAR_2) {
  VAR_7 = 0;
  while (VAR_7 < sizeof(VAR_5) && (VAR_6 - VAR_1 < VAR_2) &&
    *VAR_6 != '\0' && *VAR_6 != '\n')
   VAR_5[VAR_7++] = *VAR_6++;
  if (VAR_7 == sizeof(VAR_5))
   return -VAR_0;
  while ((VAR_6 - VAR_1 < VAR_2) && (*VAR_6 == '\0' || *VAR_6 == '\n'))
   ++VAR_6;
  VAR_5[VAR_7] = '\0';
  VAR_8 = VAR_3(VAR_5, VAR_4);
  if (VAR_8)
   return VAR_8;
 }

 return 0;
}
