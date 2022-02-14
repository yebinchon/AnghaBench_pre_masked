
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,unsigned int,int*,char const**,int) ;

__attribute__((used)) static int FUNC_1(const char *VAR_1,unsigned int VAR_2,
         int *VAR_3,int *VAR_4,
         const char **VAR_5,int VAR_6)
{
 unsigned int VAR_7;
 int VAR_8,VAR_9,VAR_10,VAR_11,VAR_12;
 VAR_8 = 0;
 VAR_9 = 0;
 VAR_12 = 0;
 while (VAR_2) {
  VAR_7 = 0;
  while ((VAR_7 < VAR_2) &&
         ((VAR_1[VAR_7] <= 32) ||
   (VAR_1[VAR_7] >= 127))) VAR_7++;
  VAR_1 += VAR_7;
  VAR_2 -= VAR_7;
  VAR_11 = 0;
  if ((*VAR_1 == '-') || (*VAR_1 == '+')) {
   VAR_11 = (*VAR_1 == '-') ? -1 : 1;
   VAR_1++;
   VAR_2--;
  }
  VAR_7 = 0;
  while (VAR_7 < VAR_2) {
   if (VAR_1[VAR_7] <= 32) break;
   if (VAR_1[VAR_7] >= 127) break;
   VAR_7++;
  }
  if (!VAR_7) break;
  if (FUNC_0(VAR_1,VAR_7,&VAR_10,VAR_5,VAR_6)) {
   VAR_12 = -VAR_0;
   break;
  }
  VAR_1 += VAR_7;
  VAR_2 -= VAR_7;
  switch (VAR_11) {
  case 0:
   VAR_8 = VAR_6;
   VAR_9 |= VAR_10;
   break;
  case -1:
   VAR_8 |= VAR_10;
   VAR_9 &= ~VAR_10;
   break;
  case 1:
   VAR_8 |= VAR_10;
   VAR_9 |= VAR_10;
   break;
  default:
   break;
  }
 }
 *VAR_3 = VAR_8;
 *VAR_4 = VAR_9;
 return VAR_12;
}
