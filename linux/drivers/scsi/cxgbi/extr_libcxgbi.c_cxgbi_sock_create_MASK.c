
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbi_sock {scalar_t__ flags; struct cxgbi_device* cdev; int callback_lock; int cmpl; int retry_timer; int write_queue; int receive_queue; int refcnt; int lock; } ;
struct cxgbi_device {scalar_t__ (* csk_alloc_cpls ) (struct cxgbi_sock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cxgbi_sock*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cxgbi_sock*) ;
 int FUNC_3 (int *) ;
 struct cxgbi_sock* FUNC_4 (int,int ) ;
 int FUNC_5 (int,char*,struct cxgbi_device*,struct cxgbi_sock*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct cxgbi_sock*) ;
 int FUNC_11 (int *,int *,int ) ;

__attribute__((used)) static struct cxgbi_sock *FUNC_12(struct cxgbi_device *VAR_3)
{
 struct cxgbi_sock *VAR_4 = FUNC_4(sizeof(*VAR_4), VAR_2);

 if (!VAR_4) {
  FUNC_6("alloc csk %zu failed.\n", sizeof(*VAR_4));
  return ((void*)0);
 }

 if (VAR_3->csk_alloc_cpls(VAR_4) < 0) {
  FUNC_6("csk 0x%p, alloc cpls failed.\n", VAR_4);
  FUNC_2(VAR_4);
  return ((void*)0);
 }

 FUNC_9(&VAR_4->lock);
 FUNC_3(&VAR_4->refcnt);
 FUNC_8(&VAR_4->receive_queue);
 FUNC_8(&VAR_4->write_queue);
 FUNC_11(&VAR_4->retry_timer, ((void*)0), 0);
 FUNC_1(&VAR_4->cmpl);
 FUNC_7(&VAR_4->callback_lock);
 VAR_4->cdev = VAR_3;
 VAR_4->flags = 0;
 FUNC_0(VAR_4, VAR_0);

 FUNC_5(1 << VAR_1, "cdev 0x%p, new csk 0x%p.\n", VAR_3, VAR_4);

 return VAR_4;
}
