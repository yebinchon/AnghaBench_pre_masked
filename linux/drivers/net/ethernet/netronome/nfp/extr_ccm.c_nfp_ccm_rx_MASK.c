
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct nfp_ccm_hdr {int dummy; } ;
struct nfp_ccm {int wq; int replies; int tag_allocator; struct nfp_app* app; } ;
struct nfp_app {int ctrl; } ;


 int FUNC_0 (int *,struct sk_buff*) ;
 int FUNC_1 (struct nfp_app*,char*,unsigned int) ;
 int FUNC_2 (struct sk_buff*) ;
 unsigned int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (unsigned int,int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct nfp_ccm *VAR_0, struct sk_buff *VAR_1)
{
 struct nfp_app *VAR_2 = VAR_0->app;
 unsigned int VAR_3;

 if (FUNC_7(VAR_1->len < sizeof(struct nfp_ccm_hdr))) {
  FUNC_1(VAR_2, "cmsg drop - too short %d!\n", VAR_1->len);
  goto err_free;
 }

 FUNC_4(VAR_2->ctrl);

 VAR_3 = FUNC_3(VAR_1);
 if (FUNC_7(!FUNC_6(VAR_3, VAR_0->tag_allocator))) {
  FUNC_1(VAR_2, "cmsg drop - no one is waiting for tag %u!\n",
    VAR_3);
  goto err_unlock;
 }

 FUNC_0(&VAR_0->replies, VAR_1);
 FUNC_8(&VAR_0->wq);

 FUNC_5(VAR_2->ctrl);
 return;

err_unlock:
 FUNC_5(VAR_2->ctrl);
err_free:
 FUNC_2(VAR_1);
}
