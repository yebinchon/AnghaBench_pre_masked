
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nfp_flower_priv {int reify_wait_queue; int reify_replies; } ;
struct nfp_flower_cmsg_portreify {int portnum; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nfp_app*,int ,int *) ;
 struct nfp_flower_cmsg_portreify* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct nfp_app*,char*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(struct nfp_app *VAR_0, struct sk_buff *VAR_1)
{
 struct nfp_flower_priv *VAR_2 = VAR_0->priv;
 struct nfp_flower_cmsg_portreify *VAR_3;
 bool VAR_4;

 VAR_3 = FUNC_3(VAR_1);

 FUNC_5();
 VAR_4 = !!FUNC_2(VAR_0, FUNC_1(VAR_3->portnum), ((void*)0));
 FUNC_6();
 if (!VAR_4) {
  FUNC_4(VAR_0, "ctrl msg for unknown port 0x%08x\n",
         FUNC_1(VAR_3->portnum));
  return;
 }

 FUNC_0(&VAR_2->reify_replies);
 FUNC_7(&VAR_2->reify_wait_queue);
}
