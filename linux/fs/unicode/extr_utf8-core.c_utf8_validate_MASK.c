
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utf8data {int dummy; } ;
struct unicode_map {int version; } ;
struct qstr {int len; int name; } ;


 struct utf8data* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct utf8data const*,int ,int ) ;

int FUNC_2(const struct unicode_map *VAR_0, const struct qstr *VAR_1)
{
 const struct utf8data *VAR_2 = FUNC_0(VAR_0->version);

 if (FUNC_1(VAR_2, VAR_1->name, VAR_1->len) < 0)
  return -1;
 return 0;
}
