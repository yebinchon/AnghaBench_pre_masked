
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct t3cdev {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_10__ {scalar_t__ function; } ;
struct TYPE_8__ {int s_addr; } ;
struct TYPE_9__ {int sin_port; TYPE_3__ sin_addr; } ;
struct TYPE_6__ {int s_addr; } ;
struct TYPE_7__ {int sin_port; TYPE_1__ sin_addr; } ;
struct cxgbi_sock {int lock; TYPE_5__ retry_timer; TYPE_4__ daddr; TYPE_2__ saddr; int atid; int flags; int state; } ;
struct cpl_act_open_rpl {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct cpl_act_open_rpl*) ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 struct cpl_act_open_rpl* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct t3cdev*,int ) ;
 int FUNC_5 (struct cxgbi_sock*,int ) ;
 int FUNC_6 (struct cxgbi_sock*) ;
 int FUNC_7 (struct cxgbi_sock*) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (TYPE_5__*,scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,struct cxgbi_sock*,int ,int ,int ,scalar_t__,int *,int ,int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct t3cdev *VAR_6, struct sk_buff *VAR_7, void *VAR_8)
{
 struct cxgbi_sock *VAR_9 = VAR_8;
 struct cpl_act_open_rpl *VAR_10 = FUNC_3(VAR_7);

 FUNC_10("csk 0x%p,%u,0x%lx,%u, status %u, %pI4:%u-%pI4:%u.\n",
  VAR_9, VAR_9->state, VAR_9->flags, VAR_9->atid, VAR_10->status,
  &VAR_9->saddr.sin_addr.s_addr, FUNC_9(VAR_9->saddr.sin_port),
  &VAR_9->daddr.sin_addr.s_addr, FUNC_9(VAR_9->daddr.sin_port));

 if (VAR_10->status != VAR_2 &&
     VAR_10->status != VAR_1 &&
     VAR_10->status != VAR_0)
  FUNC_4(VAR_6, FUNC_0(VAR_10));

 FUNC_6(VAR_9);
 FUNC_11(&VAR_9->lock);
 if (VAR_10->status == VAR_1 &&
     VAR_9->retry_timer.function != VAR_4) {
  VAR_9->retry_timer.function = VAR_4;
  FUNC_8(&VAR_9->retry_timer, VAR_5 + VAR_3 / 2);
 } else
  FUNC_5(VAR_9,
    FUNC_2(VAR_10->status));

 FUNC_12(&VAR_9->lock);
 FUNC_7(VAR_9);
 FUNC_1(VAR_7);
 return 0;
}
