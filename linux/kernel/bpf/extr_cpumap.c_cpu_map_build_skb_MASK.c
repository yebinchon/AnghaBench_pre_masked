
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_frame {int headroom; unsigned int len; int dev_rx; scalar_t__ metasize; int data; } ;
struct skb_shared_info {int dummy; } ;
struct sk_buff {int protocol; } ;
struct bpf_cpu_map_entry {int dummy; } ;


 unsigned int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,unsigned int) ;
 struct sk_buff* FUNC_2 (struct sk_buff*,void*,unsigned int) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;
 int FUNC_5 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct xdp_frame*) ;
 int FUNC_8 (struct xdp_frame*) ;

__attribute__((used)) static struct sk_buff *FUNC_9(struct bpf_cpu_map_entry *VAR_0,
      struct xdp_frame *VAR_1,
      struct sk_buff *VAR_2)
{
 unsigned int VAR_3;
 unsigned int VAR_4;
 void *VAR_5;


 VAR_3 = sizeof(struct xdp_frame) + VAR_1->headroom;
 VAR_4 = FUNC_0(VAR_1->len + VAR_3) +
  FUNC_0(sizeof(struct skb_shared_info));

 VAR_5 = VAR_1->data - VAR_3;
 VAR_2 = FUNC_2(VAR_2, VAR_5, VAR_4);
 if (FUNC_6(!VAR_2))
  return ((void*)0);

 FUNC_5(VAR_2, VAR_3);
 FUNC_1(VAR_2, VAR_1->len);
 if (VAR_1->metasize)
  FUNC_4(VAR_2, VAR_1->metasize);


 VAR_2->protocol = FUNC_3(VAR_2, VAR_1->dev_rx);
 FUNC_7(VAR_1);


 FUNC_8(VAR_1);

 return VAR_2;
}
