
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct TYPE_4__ {TYPE_1__* bas; } ;
struct bc_state {int rx_bufsize; TYPE_2__ hw; struct sk_buff* rx_skb; int ignore; } ;
struct TYPE_3__ {int goodbytes; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,int) ;
 struct sk_buff* FUNC_2 (struct bc_state*) ;
 int FUNC_3 (struct bc_state*,struct sk_buff*) ;
 unsigned char* FUNC_4 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static inline void FUNC_6(unsigned char *VAR_1, unsigned VAR_2,
     struct bc_state *VAR_3)
{
 struct sk_buff *VAR_4;
 int VAR_5;
 unsigned char *VAR_6;

 if (FUNC_5(VAR_3->ignore)) {
  VAR_3->ignore--;
  return;
 }
 VAR_4 = VAR_3->rx_skb;
 if (VAR_4 == ((void*)0)) {
  VAR_4 = FUNC_2(VAR_3);
  if (VAR_4 == ((void*)0))
   return;
 }
 VAR_5 = VAR_3->rx_bufsize - VAR_4->len;
 while (VAR_2 > 0) {
  VAR_6 = FUNC_4(VAR_4, VAR_2 < VAR_5 ? VAR_2 : VAR_5);
  while (VAR_2 > 0 && VAR_5 > 0) {
   *VAR_6++ = FUNC_0(*VAR_1++);
   VAR_2--;
   VAR_5--;
  }
  if (VAR_5 == 0) {
   FUNC_1(VAR_0,
       "rcv data", VAR_4->data, VAR_4->len);
   VAR_3->hw.bas->goodbytes += VAR_4->len;
   FUNC_3(VAR_3, VAR_4);
   VAR_4 = FUNC_2(VAR_3);
   if (VAR_4 == ((void*)0))
    return;
   VAR_5 = VAR_3->rx_bufsize;
  }
 }
}
