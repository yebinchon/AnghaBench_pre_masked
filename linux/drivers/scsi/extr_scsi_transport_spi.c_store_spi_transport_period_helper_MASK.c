
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char) ;
 int* VAR_1 ;
 int FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_2, const char *VAR_3,
      size_t VAR_4, int *VAR_5)
{
 int VAR_6, VAR_7, VAR_8 = -1;
 char *VAR_9;

 VAR_7 = FUNC_1(VAR_3, &VAR_9, 10) * 1000;
 if (*VAR_9 == '.') {
  int VAR_10 = 100;
  do {
   VAR_9++;
   if (!FUNC_0(*VAR_9))
    break;
   VAR_7 += (*VAR_9 - '0') * VAR_10;
   VAR_10 /= 10;
  } while (VAR_10 > 0);
 }

 for (VAR_6 = 0; VAR_6 <= VAR_0; VAR_6++) {
  if (VAR_1[VAR_6] < VAR_7)
   continue;
  VAR_8 = VAR_6;
  break;
 }

 if (VAR_8 == -1)
  VAR_8 = VAR_7 / 4000;

 if (VAR_8 > 0xff)
  VAR_8 = 0xff;

 *VAR_5 = VAR_8;

 return VAR_4;
}
