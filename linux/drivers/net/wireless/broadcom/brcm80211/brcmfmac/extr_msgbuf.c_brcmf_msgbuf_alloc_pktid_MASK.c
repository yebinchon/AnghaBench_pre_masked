
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct device {int dummy; } ;
struct brcmf_msgbuf_pktids {scalar_t__ last_allocated_idx; scalar_t__ array_size; int direction; struct brcmf_msgbuf_pktid* array; } ;
struct TYPE_2__ {scalar_t__ counter; } ;
struct brcmf_msgbuf_pktid {struct sk_buff* skb; int physaddr; scalar_t__ data_offset; TYPE_1__ allocated; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct device*,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (struct device*,int ) ;

__attribute__((used)) static int
FUNC_4(struct device *VAR_1,
    struct brcmf_msgbuf_pktids *VAR_2,
    struct sk_buff *VAR_3, u16 VAR_4,
    dma_addr_t *VAR_5, u32 *VAR_6)
{
 struct brcmf_msgbuf_pktid *VAR_7;
 u32 VAR_8;

 VAR_7 = VAR_2->array;

 *VAR_5 = FUNC_2(VAR_1, VAR_3->data + VAR_4,
       VAR_3->len - VAR_4, VAR_2->direction);

 if (FUNC_3(VAR_1, *VAR_5)) {
  FUNC_1("dma_map_single failed !!\n");
  return -VAR_0;
 }

 *VAR_6 = VAR_2->last_allocated_idx;

 VAR_8 = 0;
 do {
  (*VAR_6)++;
  if (*VAR_6 == VAR_2->array_size)
   *VAR_6 = 0;
  if (VAR_7[*VAR_6].allocated.counter == 0)
   if (FUNC_0(&VAR_7[*VAR_6].allocated, 0, 1) == 0)
    break;
  VAR_8++;
 } while (VAR_8 < VAR_2->array_size);

 if (VAR_8 == VAR_2->array_size)
  return -VAR_0;

 VAR_7[*VAR_6].data_offset = VAR_4;
 VAR_7[*VAR_6].physaddr = *VAR_5;
 VAR_7[*VAR_6].skb = VAR_3;

 VAR_2->last_allocated_idx = *VAR_6;

 return 0;
}
