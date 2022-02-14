
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fs_pin {int dummy; } ;
struct bsd_acct_struct {int lock; TYPE_1__* ns; int done; int work; } ;
struct TYPE_2__ {int bacct; } ;


 int FUNC_0 (struct bsd_acct_struct*) ;
 int FUNC_1 (int *,struct fs_pin*,int *) ;
 int FUNC_2 (struct bsd_acct_struct*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct fs_pin*) ;
 int FUNC_6 (int *) ;
 struct bsd_acct_struct* FUNC_7 (struct fs_pin*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct fs_pin *VAR_0)
{
 struct bsd_acct_struct *VAR_1 = FUNC_7(VAR_0);
 FUNC_3(&VAR_1->lock);
 FUNC_2(VAR_1);
 FUNC_6(&VAR_1->work);
 FUNC_8(&VAR_1->done);
 FUNC_1(&VAR_1->ns->bacct, VAR_0, ((void*)0));
 FUNC_4(&VAR_1->lock);
 FUNC_5(VAR_0);
 FUNC_0(VAR_1);
}
