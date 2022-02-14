
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(const void *VAR_0, const void *VAR_1, size_t VAR_2)
{
 const unsigned char *VAR_3, *VAR_4;
 int VAR_5 = 0;

 for (VAR_3 = VAR_0 + VAR_2 - 1, VAR_4 = VAR_1 + VAR_2 - 1; VAR_2 > 0;
      --VAR_3, --VAR_4, VAR_2--) {
  VAR_5 = *VAR_3 - *VAR_4;
  if (VAR_5)
   break;
 }
 return VAR_5;
}
