
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utf8data {int dummy; } ;
struct utf8cursor {int dummy; } ;
struct unicode_map {int version; } ;
struct qstr {int len; int name; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct utf8cursor*) ;
 scalar_t__ FUNC_1 (struct utf8cursor*,struct utf8data const*,int ,int ) ;
 struct utf8data* FUNC_2 (int ) ;

int FUNC_3(const struct unicode_map *VAR_1, const struct qstr *VAR_2,
     unsigned char *VAR_3, size_t VAR_4)
{
 const struct utf8data *VAR_5 = FUNC_2(VAR_1->version);
 struct utf8cursor VAR_6;
 ssize_t VAR_7 = 0;

 if (FUNC_1(&VAR_6, VAR_5, VAR_2->name, VAR_2->len) < 0)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  int VAR_8 = FUNC_0(&VAR_6);

  VAR_3[VAR_7] = VAR_8;
  if (!VAR_8)
   return VAR_7;
  if (VAR_8 == -1)
   break;
 }
 return -VAR_0;
}
