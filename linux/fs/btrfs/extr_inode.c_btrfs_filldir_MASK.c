
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dir_entry {int name_len; int type; int ino; int offset; } ;
struct dir_context {scalar_t__ pos; } ;


 int FUNC_0 (struct dir_context*,char*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, int VAR_1, struct dir_context *VAR_2)
{
 while (VAR_1--) {
  struct dir_entry *VAR_3 = VAR_0;
  char *VAR_4 = (char *)(VAR_3 + 1);

  VAR_2->pos = FUNC_1(&VAR_3->offset);
  if (!FUNC_0(VAR_2, VAR_4, FUNC_1(&VAR_3->name_len),
      FUNC_1(&VAR_3->ino),
      FUNC_1(&VAR_3->type)))
   return 1;
  VAR_0 += sizeof(struct dir_entry) +
   FUNC_1(&VAR_3->name_len);
  VAR_2->pos++;
 }
 return 0;
}
