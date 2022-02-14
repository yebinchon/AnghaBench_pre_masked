
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct device {int dummy; } ;
struct TYPE_3__ {scalar_t__ counter; } ;
struct brcmf_msgbuf_pktids {size_t array_size; TYPE_2__* skb; int direction; scalar_t__ data_offset; int physaddr; TYPE_1__ allocated; struct brcmf_msgbuf_pktids* array; } ;
struct brcmf_msgbuf_pktid {size_t array_size; TYPE_2__* skb; int direction; scalar_t__ data_offset; int physaddr; TYPE_1__ allocated; struct brcmf_msgbuf_pktid* array; } ;
struct TYPE_4__ {scalar_t__ len; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct device*,int ,scalar_t__,int ) ;
 int FUNC_2 (struct brcmf_msgbuf_pktids*) ;

__attribute__((used)) static void
FUNC_3(struct device *VAR_0,
      struct brcmf_msgbuf_pktids *VAR_1)
{
 struct brcmf_msgbuf_pktid *VAR_2;
 struct brcmf_msgbuf_pktid *VAR_3;
 u32 VAR_4;

 VAR_2 = VAR_1->array;
 VAR_4 = 0;
 do {
  if (VAR_2[VAR_4].allocated.counter) {
   VAR_3 = &VAR_2[VAR_4];
   FUNC_1(VAR_0, VAR_3->physaddr,
      VAR_3->skb->len - VAR_3->data_offset,
      VAR_1->direction);
   FUNC_0(VAR_3->skb);
  }
  VAR_4++;
 } while (VAR_4 < VAR_1->array_size);

 FUNC_2(VAR_2);
 FUNC_2(VAR_1);
}
