
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxgbi_sock {scalar_t__ state; int lock; TYPE_1__* cdev; int receive_queue; scalar_t__ dst; int tid; int flags; } ;
struct TYPE_2__ {int (* csk_send_close_req ) (struct cxgbi_sock*) ;int (* csk_send_abort_req ) (struct cxgbi_sock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct cxgbi_sock*,int ) ;
 int FUNC_2 (struct cxgbi_sock*,int ) ;
 int FUNC_3 (struct cxgbi_sock*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,char*,struct cxgbi_sock*,scalar_t__,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct cxgbi_sock*) ;
 int FUNC_10 (struct cxgbi_sock*) ;

__attribute__((used)) static void FUNC_11(struct cxgbi_sock *VAR_8)
{
 int VAR_9;
 int VAR_10 = 0;

 FUNC_5(1 << VAR_7, "csk 0x%p,%u,0x%lx,%u.\n",
  VAR_8, (VAR_8)->state, (VAR_8)->flags, (VAR_8)->tid);
 FUNC_7(&VAR_8->lock);
 if (VAR_8->dst)
  FUNC_4(VAR_8->dst);
 VAR_9 = FUNC_6(&VAR_8->receive_queue);
 FUNC_0(&VAR_8->receive_queue);

 if (VAR_8->state == VAR_3)
  FUNC_2(VAR_8, VAR_0);
 else if (VAR_8->state == VAR_5) {
  VAR_10 = 1;
  FUNC_3(VAR_8, VAR_2);
 } else if (VAR_8->state == VAR_6) {
  VAR_10 = 1;
  FUNC_3(VAR_8, VAR_4);
 }

 if (VAR_10) {
  if (!FUNC_1(VAR_8, VAR_1) ||
      VAR_9)
   VAR_8->cdev->csk_send_abort_req(VAR_8);
  else
   VAR_8->cdev->csk_send_close_req(VAR_8);
 }

 FUNC_8(&VAR_8->lock);
}
