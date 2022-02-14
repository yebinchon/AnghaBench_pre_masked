
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {unsigned char* data; } ;
struct fc_frame {int dummy; } ;
typedef int skb_frag_t ;
struct TYPE_2__ {unsigned int nr_frags; int * frags; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,unsigned char*,unsigned long) ;
 struct sk_buff* FUNC_1 (struct fc_frame*) ;
 unsigned char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned char*) ;
 unsigned long FUNC_4 (unsigned long,scalar_t__) ;
 unsigned long FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 unsigned long FUNC_7 (int *) ;
 unsigned long FUNC_8 (struct sk_buff*) ;
 TYPE_1__* FUNC_9 (struct sk_buff*) ;

u32 FUNC_10(struct fc_frame *VAR_3)
{
 struct sk_buff *VAR_4 = FUNC_1(VAR_3);
 skb_frag_t *VAR_5;
 unsigned char *VAR_6;
 unsigned long VAR_7, VAR_8, VAR_9;
 u32 VAR_10;
 unsigned VAR_11;

 VAR_10 = FUNC_0(~0, VAR_4->data, FUNC_8(VAR_4));

 for (VAR_11 = 0; VAR_11 < FUNC_9(VAR_4)->nr_frags; VAR_11++) {
  VAR_5 = &FUNC_9(VAR_4)->frags[VAR_11];
  VAR_7 = FUNC_5(VAR_5);
  VAR_8 = FUNC_7(VAR_5);
  while (VAR_8 > 0) {
   VAR_9 = FUNC_4(VAR_8, VAR_2 - (VAR_7 & ~VAR_0));
   VAR_6 = FUNC_2(
    FUNC_6(VAR_5) + (VAR_7 >> VAR_1));
   VAR_10 = FUNC_0(VAR_10, VAR_6 + (VAR_7 & ~VAR_0), VAR_9);
   FUNC_3(VAR_6);
   VAR_7 += VAR_9;
   VAR_8 -= VAR_9;
  }
 }
 return VAR_10;
}
