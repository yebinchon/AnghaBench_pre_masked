
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct gsm_mux {int mtu; int ftype; } ;
struct gsm_msg {int * data; } ;
struct gsm_dlci {int adaption; TYPE_1__* skb; int skb_list; int addr; } ;
struct TYPE_5__ {int len; int data; } ;


 int VAR_0 ;
 int FUNC_0 (struct gsm_dlci*,struct gsm_msg*) ;
 int FUNC_1 (TYPE_1__*) ;
 struct gsm_msg* FUNC_2 (struct gsm_mux*,int ,int,int ) ;
 int FUNC_3 (int *,int ,int) ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct gsm_mux *VAR_1,
      struct gsm_dlci *VAR_2)
{
 struct gsm_msg *VAR_3;
 u8 *VAR_4;
 int VAR_5, VAR_6;
 int VAR_7 = 0, VAR_8 = 0;
 int VAR_9 = 0;


 if (VAR_2->adaption == 4)
  VAR_9 = 1;


 if (VAR_2->skb == ((void*)0)) {
  VAR_2->skb = FUNC_4(&VAR_2->skb_list);
  if (VAR_2->skb == ((void*)0))
   return 0;
  VAR_8 = 1;
 }
 VAR_5 = VAR_2->skb->len + VAR_9;


 if (VAR_5 > VAR_1->mtu) {
  if (VAR_2->adaption == 3) {

   FUNC_1(VAR_2->skb);
   VAR_2->skb = ((void*)0);
   return 0;
  }
  VAR_5 = VAR_1->mtu;
 } else
  VAR_7 = 1;

 VAR_6 = VAR_5 + VAR_9;
 VAR_3 = FUNC_2(VAR_1, VAR_2->addr, VAR_6, VAR_1->ftype);



 if (VAR_3 == ((void*)0)) {
  FUNC_6(&VAR_2->skb_list, VAR_2->skb);
  VAR_2->skb = ((void*)0);
  return -VAR_0;
 }
 VAR_4 = VAR_3->data;

 if (VAR_2->adaption == 4) {

  *VAR_4++ = VAR_7 << 7 | VAR_8 << 6 | 1;
  VAR_5--;
 }
 FUNC_3(VAR_4, VAR_2->skb->data, VAR_5);
 FUNC_5(VAR_2->skb, VAR_5);
 FUNC_0(VAR_2, VAR_3);
 if (VAR_7) {
  FUNC_1(VAR_2->skb);
  VAR_2->skb = ((void*)0);
 }
 return VAR_6;
}
