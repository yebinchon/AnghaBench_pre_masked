
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nfp_flower_priv {int cmsg_work; struct sk_buff_head cmsg_skbs_low; struct sk_buff_head cmsg_skbs_high; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct nfp_app*,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct sk_buff_head*) ;
 int FUNC_4 (struct sk_buff_head*,struct sk_buff*) ;

__attribute__((used)) static void
FUNC_5(struct nfp_app *VAR_2, struct sk_buff *VAR_3, int VAR_4)
{
 struct nfp_flower_priv *VAR_5 = VAR_2->priv;
 struct sk_buff_head *VAR_6;

 if (VAR_4 == VAR_0)
  VAR_6 = &VAR_5->cmsg_skbs_high;
 else
  VAR_6 = &VAR_5->cmsg_skbs_low;

 if (FUNC_3(VAR_6) >= VAR_1) {
  FUNC_1(VAR_2, "Dropping queued control messages\n");
  FUNC_0(VAR_3);
  return;
 }

 FUNC_4(VAR_6, VAR_3);
 FUNC_2(&VAR_5->cmsg_work);
}
