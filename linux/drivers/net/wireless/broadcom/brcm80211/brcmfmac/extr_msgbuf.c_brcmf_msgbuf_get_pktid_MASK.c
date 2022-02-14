
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct sk_buff {scalar_t__ len; } ;
struct device {int dummy; } ;
struct brcmf_msgbuf_pktids {size_t array_size; int direction; struct brcmf_msgbuf_pktid* array; } ;
struct TYPE_2__ {scalar_t__ counter; } ;
struct brcmf_msgbuf_pktid {TYPE_1__ allocated; struct sk_buff* skb; scalar_t__ data_offset; int physaddr; } ;


 int FUNC_0 (char*,size_t,...) ;
 int FUNC_1 (struct device*,int ,scalar_t__,int ) ;

__attribute__((used)) static struct sk_buff *
FUNC_2(struct device *VAR_0, struct brcmf_msgbuf_pktids *VAR_1,
         u32 VAR_2)
{
 struct brcmf_msgbuf_pktid *VAR_3;
 struct sk_buff *VAR_4;

 if (VAR_2 < 0 || VAR_2 >= VAR_1->array_size) {
  FUNC_0("Invalid packet id %d (max %d)\n", VAR_2,
     VAR_1->array_size);
  return ((void*)0);
 }
 if (VAR_1->array[VAR_2].allocated.counter) {
  VAR_3 = &VAR_1->array[VAR_2];
  FUNC_1(VAR_0, VAR_3->physaddr,
     VAR_3->skb->len - VAR_3->data_offset,
     VAR_1->direction);
  VAR_4 = VAR_3->skb;
  VAR_3->allocated.counter = 0;
  return VAR_4;
 } else {
  FUNC_0("Invalid packet id %d (not in use)\n", VAR_2);
 }

 return ((void*)0);
}
