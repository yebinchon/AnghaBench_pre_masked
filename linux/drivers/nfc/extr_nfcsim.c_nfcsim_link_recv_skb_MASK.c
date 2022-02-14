
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sk_buff {int dummy; } ;
struct nfcsim_link {scalar_t__ rf_tech; scalar_t__ mode; scalar_t__ cond; int lock; scalar_t__ shutdown; struct sk_buff* skb; int recv_wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,scalar_t__,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_6(struct nfcsim_link *VAR_3,
         int VAR_4, u8 VAR_5, u8 VAR_6)
{
 int VAR_7;
 struct sk_buff *VAR_8;

 VAR_7 = FUNC_5(VAR_3->recv_wait,
           VAR_3->cond,
           FUNC_2(VAR_4));

 FUNC_3(&VAR_3->lock);

 VAR_8 = VAR_3->skb;
 VAR_3->skb = ((void*)0);

 if (!VAR_7) {
  VAR_7 = -VAR_2;
  goto done;
 }

 if (!VAR_8 || VAR_3->rf_tech != VAR_5 || VAR_3->mode == VAR_6) {
  VAR_7 = -VAR_0;
  goto done;
 }

 if (VAR_3->shutdown) {
  VAR_7 = -VAR_1;
  goto done;
 }

done:
 FUNC_4(&VAR_3->lock);

 if (VAR_7 < 0) {
  FUNC_1(VAR_8);
  VAR_8 = FUNC_0(VAR_7);
 }

 VAR_3->cond = 0;

 return VAR_8;
}
