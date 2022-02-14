
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_10__ {int h_err; TYPE_2__* h_transaction; } ;
typedef TYPE_3__ handle_t ;
struct TYPE_9__ {TYPE_1__* t_journal; } ;
struct TYPE_8__ {struct super_block* j_private; } ;


 int FUNC_0 (struct super_block*,char const*,unsigned int,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;

int FUNC_4(const char *VAR_0, unsigned int VAR_1, handle_t *VAR_2)
{
 struct super_block *VAR_3;
 int VAR_4;
 int VAR_5;

 if (!FUNC_1(VAR_2)) {
  FUNC_2(VAR_2);
  return 0;
 }

 VAR_4 = VAR_2->h_err;
 if (!VAR_2->h_transaction) {
  VAR_5 = FUNC_3(VAR_2);
  return VAR_4 ? VAR_4 : VAR_5;
 }

 VAR_3 = VAR_2->h_transaction->t_journal->j_private;
 VAR_5 = FUNC_3(VAR_2);

 if (!VAR_4)
  VAR_4 = VAR_5;
 if (VAR_4)
  FUNC_0(VAR_3, VAR_0, VAR_1, VAR_4);
 return VAR_4;
}
