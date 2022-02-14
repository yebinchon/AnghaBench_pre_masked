
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3cdev {int dummy; } ;
struct sk_buff {int dummy; } ;
struct cxgbi_sock {int lock; int err; int tid; int flags; int state; } ;
struct cpl_abort_req_rss {scalar_t__ status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct cxgbi_sock*,scalar_t__,int*) ;
 struct cpl_abort_req_rss* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct cxgbi_sock*,int ) ;
 int FUNC_4 (struct cxgbi_sock*) ;
 int FUNC_5 (struct cxgbi_sock*,int ) ;
 int FUNC_6 (struct cxgbi_sock*) ;
 int FUNC_7 (struct cxgbi_sock*) ;
 int FUNC_8 (struct cxgbi_sock*,int ) ;
 int FUNC_9 (struct cxgbi_sock*,int ) ;
 int FUNC_10 (int,char*,struct cxgbi_sock*,int ,int ,int ) ;
 int FUNC_11 (struct cxgbi_sock*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct t3cdev *VAR_8, struct sk_buff *VAR_9, void *VAR_10)
{
 const struct cpl_abort_req_rss *VAR_11 = FUNC_2(VAR_9);
 struct cxgbi_sock *VAR_12 = VAR_10;
 int VAR_13 = VAR_0;

 FUNC_10(1 << VAR_7 | 1 << VAR_6,
  "csk 0x%p,%u,0x%lx,%u.\n",
  VAR_12, VAR_12->state, VAR_12->flags, VAR_12->tid);

 if (VAR_11->status == VAR_2 ||
     VAR_11->status == VAR_1) {
  goto done;
 }

 FUNC_6(VAR_12);
 FUNC_12(&VAR_12->lock);

 if (!FUNC_5(VAR_12, VAR_3)) {
  FUNC_8(VAR_12, VAR_3);
  FUNC_9(VAR_12, VAR_5);
  goto out;
 }

 FUNC_3(VAR_12, VAR_3);
 FUNC_11(VAR_12, VAR_13);

 if (!FUNC_5(VAR_12, VAR_4)) {
  VAR_12->err = FUNC_1(VAR_12, VAR_11->status, &VAR_13);
  FUNC_4(VAR_12);
 }

out:
 FUNC_13(&VAR_12->lock);
 FUNC_7(VAR_12);
done:
 FUNC_0(VAR_9);
 return 0;
}
