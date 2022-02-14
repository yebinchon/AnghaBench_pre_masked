
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {char* name; int len; } ;



unsigned FUNC_0(const struct qstr *VAR_0)
{
 const char *VAR_1 = VAR_0->name;
 int VAR_2 = VAR_0->len;
 unsigned VAR_3 = 0;

 if (VAR_2 > 1 && *VAR_1 == '0')
  goto out;
 do {
  unsigned VAR_4 = *VAR_1++ - '0';
  if (VAR_4 > 9)
   goto out;
  if (VAR_3 >= (~0U-9)/10)
   goto out;
  VAR_3 *= 10;
  VAR_3 += VAR_4;
 } while (--VAR_2 > 0);
 return VAR_3;
out:
 return ~0U;
}
