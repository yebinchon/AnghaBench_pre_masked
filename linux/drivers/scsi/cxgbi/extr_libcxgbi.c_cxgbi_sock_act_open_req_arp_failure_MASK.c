
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ sk; } ;
struct module {int dummy; } ;
struct cxgbi_sock {scalar_t__ state; int lock; int tid; int flags; TYPE_1__* cdev; } ;
struct TYPE_2__ {struct module* owner; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct cxgbi_sock*,int ) ;
 int FUNC_2 (struct cxgbi_sock*) ;
 int FUNC_3 (struct cxgbi_sock*) ;
 int FUNC_4 (int,char*,struct cxgbi_sock*,scalar_t__,int ,int ) ;
 int FUNC_5 (struct module*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(void *VAR_3, struct sk_buff *VAR_4)
{
 struct cxgbi_sock *VAR_5 = (struct cxgbi_sock *)VAR_4->sk;
 struct module *VAR_6 = VAR_5->cdev->owner;

 FUNC_4(1 << VAR_1, "csk 0x%p,%u,0x%lx,%u.\n",
  VAR_5, (VAR_5)->state, (VAR_5)->flags, (VAR_5)->tid);
 FUNC_2(VAR_5);
 FUNC_6(&VAR_5->lock);
 if (VAR_5->state == VAR_0)
  FUNC_1(VAR_5, -VAR_2);
 FUNC_7(&VAR_5->lock);
 FUNC_3(VAR_5);
 FUNC_0(VAR_4);

 FUNC_5(VAR_6);
}
