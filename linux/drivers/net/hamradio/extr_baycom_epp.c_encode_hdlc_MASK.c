
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; unsigned char* data; } ;
struct TYPE_4__ {int bufcnt; unsigned char* buf; unsigned char* bufptr; } ;
struct baycom_state {TYPE_3__* dev; TYPE_1__ hdlctx; struct sk_buff* skb; } ;
struct TYPE_5__ {int tx_packets; } ;
struct TYPE_6__ {TYPE_2__ stats; } ;


 unsigned int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct baycom_state *VAR_0)
{
 struct sk_buff *VAR_1;
 unsigned char *VAR_2, *VAR_3;
 int VAR_4;
        unsigned VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 unsigned char VAR_10[2];
 int VAR_11;

 if (VAR_0->hdlctx.bufcnt > 0)
  return;
 VAR_1 = VAR_0->skb;
 if (!VAR_1)
  return;
 VAR_0->skb = ((void*)0);
 VAR_4 = VAR_1->len-1;
 VAR_2 = VAR_0->hdlctx.buf;
 VAR_3 = VAR_1->data+1;
 VAR_9 = FUNC_0(VAR_3, VAR_4);
 VAR_10[0] = VAR_9;
 VAR_10[1] = VAR_9 >> 8;
 *VAR_2++ = 0x7e;
 VAR_5 = VAR_7 = VAR_8 = 0;
 while (VAR_4 > -2) {
  VAR_5 >>= 8;
  VAR_5 |= ((unsigned int)*VAR_3) << 8;
  VAR_7 |= ((unsigned int)*VAR_3) << VAR_8;
  VAR_6 = ~VAR_5;
  VAR_3++;
  VAR_4--;
  if (!VAR_4)
   VAR_3 = VAR_10;
  for (VAR_11 = 0; VAR_11 < 8; VAR_11++)
   if (FUNC_2(!(VAR_6 & (0x1f0 << VAR_11)))) {
    VAR_5 &= ~(0x100 << VAR_11);
     VAR_7 = (VAR_7 & (((2 << VAR_11) << VAR_8) - 1)) |
     ((VAR_7 & ~(((2 << VAR_11) << VAR_8) - 1)) << 1);
    VAR_8++;
    VAR_6 = ~VAR_5;
   }
  VAR_8 += 8;
  while (VAR_8 >= 8) {
   *VAR_2++ = VAR_7;
   VAR_7 >>= 8;
   VAR_8 -= 8;
  }
 }
 VAR_7 |= 0x7e7e << VAR_8;
 VAR_8 += 16;
 while (VAR_8 >= 8) {
  *VAR_2++ = VAR_7;
  VAR_7 >>= 8;
  VAR_8 -= 8;
 }
 VAR_0->hdlctx.bufptr = VAR_0->hdlctx.buf;
 VAR_0->hdlctx.bufcnt = VAR_2 - VAR_0->hdlctx.buf;
 FUNC_1(VAR_1);
 VAR_0->dev->stats.tx_packets++;
}
