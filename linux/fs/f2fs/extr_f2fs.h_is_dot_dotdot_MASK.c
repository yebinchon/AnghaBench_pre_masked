
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int len; char* name; } ;



__attribute__((used)) static inline bool FUNC_0(const struct qstr *VAR_0)
{
 if (VAR_0->len == 1 && VAR_0->name[0] == '.')
  return 1;

 if (VAR_0->len == 2 && VAR_0->name[0] == '.' && VAR_0->name[1] == '.')
  return 1;

 return 0;
}
