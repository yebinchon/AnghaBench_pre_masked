
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct send_ctx {scalar_t__ cur_ino; int deleted_refs; int new_refs; TYPE_1__* cmp_key; } ;
struct TYPE_2__ {scalar_t__ objectid; scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct send_ctx*,int*) ;

__attribute__((used)) static int FUNC_2(struct send_ctx *VAR_1, int VAR_2,
        int *VAR_3,
        int *VAR_4)
{
 int VAR_5 = 0;

 if (VAR_1->cur_ino == 0)
  goto out;
 if (!VAR_2 && VAR_1->cur_ino == VAR_1->cmp_key->objectid &&
     VAR_1->cmp_key->type <= VAR_0)
  goto out;
 if (FUNC_0(&VAR_1->new_refs) && FUNC_0(&VAR_1->deleted_refs))
  goto out;

 VAR_5 = FUNC_1(VAR_1, VAR_3);
 if (VAR_5 < 0)
  goto out;

 *VAR_4 = 1;
out:
 return VAR_5;
}
