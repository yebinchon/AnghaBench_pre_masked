
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; } ;
struct inbuf_t {unsigned char* data; int head; struct cardstate* cs; } ;
struct cardstate {scalar_t__ dle; struct bc_state* bcs; } ;
struct bc_state {int inputstate; scalar_t__ rx_bufsize; struct sk_buff* rx_skb; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (unsigned char) ;
 int FUNC_2 (struct bc_state*) ;
 int FUNC_3 (struct bc_state*,struct sk_buff*) ;

__attribute__((used)) static unsigned FUNC_4(unsigned VAR_4, struct inbuf_t *VAR_5)
{
 struct cardstate *VAR_6 = VAR_5->cs;
 struct bc_state *VAR_7 = VAR_6->bcs;
 int VAR_8 = VAR_7->inputstate;
 struct sk_buff *VAR_9 = VAR_7->rx_skb;
 unsigned char *VAR_10 = VAR_5->data + VAR_5->head;
 unsigned VAR_11 = 0;
 unsigned char VAR_12;

 if (!VAR_9) {

  FUNC_2(VAR_7);
  return VAR_4;
 }

 while (VAR_11 < VAR_4 && VAR_9->len < VAR_7->rx_bufsize) {
  VAR_12 = *VAR_10++;
  VAR_11++;

  if (VAR_12 == VAR_0) {
   if (VAR_8 & VAR_1) {

    VAR_8 &= ~VAR_1;
   } else if (VAR_6->dle || (VAR_8 & VAR_2)) {

    VAR_8 |= VAR_1;
    break;
   }
  }


  VAR_8 |= VAR_3;
  FUNC_0(VAR_9, FUNC_1(VAR_12));
 }


 if (VAR_8 & VAR_3) {
  FUNC_3(VAR_7, VAR_9);
  VAR_8 &= ~VAR_3;
  FUNC_2(VAR_7);
 }

 VAR_7->inputstate = VAR_8;
 return VAR_11;
}
