
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdp_frame {scalar_t__ len; } ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_2__ {unsigned int bytes; unsigned int packets; int syncp; } ;
struct send_queue {TYPE_1__ stats; int vq; } ;


 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (char*,struct sk_buff*) ;
 struct xdp_frame* FUNC_4 (void*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (int ,unsigned int*) ;
 int FUNC_8 (struct xdp_frame*) ;

__attribute__((used)) static void FUNC_9(struct send_queue *VAR_0, bool VAR_1)
{
 unsigned int VAR_2;
 unsigned int VAR_3 = 0;
 unsigned int VAR_4 = 0;
 void *VAR_5;

 while ((VAR_5 = FUNC_7(VAR_0->vq, &VAR_2)) != ((void*)0)) {
  if (FUNC_1(!FUNC_0(VAR_5))) {
   struct sk_buff *VAR_6 = VAR_5;

   FUNC_3("Sent skb %p\n", VAR_6);

   VAR_4 += VAR_6->len;
   FUNC_2(VAR_6, VAR_1);
  } else {
   struct xdp_frame *VAR_7 = FUNC_4(VAR_5);

   VAR_4 += VAR_7->len;
   FUNC_8(VAR_7);
  }
  VAR_3++;
 }




 if (!VAR_3)
  return;

 FUNC_5(&VAR_0->stats.syncp);
 VAR_0->stats.bytes += VAR_4;
 VAR_0->stats.packets += VAR_3;
 FUNC_6(&VAR_0->stats.syncp);
}
