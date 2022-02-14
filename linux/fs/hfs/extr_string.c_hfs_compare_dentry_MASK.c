
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {unsigned int len; unsigned char* name; } ;
struct dentry {int dummy; } ;


 unsigned int VAR_0 ;
 scalar_t__* VAR_1 ;

int FUNC_0(const struct dentry *VAR_2,
  unsigned int VAR_3, const char *VAR_4, const struct qstr *VAR_5)
{
 const unsigned char *VAR_6, *VAR_7;

 if (VAR_3 >= VAR_0) {
  if (VAR_5->len < VAR_0)
   return 1;
  VAR_3 = VAR_0;
 } else if (VAR_3 != VAR_5->len)
  return 1;

 VAR_6 = VAR_4;
 VAR_7 = VAR_5->name;
 while (VAR_3--) {
  if (VAR_1[*VAR_6++] != VAR_1[*VAR_7++])
   return 1;
 }
 return 0;
}
