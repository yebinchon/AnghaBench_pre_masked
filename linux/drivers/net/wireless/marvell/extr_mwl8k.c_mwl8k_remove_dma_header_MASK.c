
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int frame_control; } ;
struct mwl8k_dma_data {int data; TYPE_1__ wh; } ;
typedef int __le16 ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,TYPE_1__*,int) ;
 int FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static inline void FUNC_4(struct sk_buff *VAR_0, __le16 VAR_1)
{
 struct mwl8k_dma_data *VAR_2;
 int VAR_3;

 VAR_2 = (struct mwl8k_dma_data *)VAR_0->data;
 VAR_3 = FUNC_0(VAR_2->wh.frame_control);

 if (VAR_3 != sizeof(VAR_2->wh)) {
  if (FUNC_1(VAR_2->wh.frame_control)) {
   FUNC_2(VAR_2->data - VAR_3, &VAR_2->wh, VAR_3 - 2);
   *((__le16 *)(VAR_2->data - 2)) = VAR_1;
  } else {
   FUNC_2(VAR_2->data - VAR_3, &VAR_2->wh, VAR_3);
  }
 }

 if (VAR_3 != sizeof(*VAR_2))
  FUNC_3(VAR_0, sizeof(*VAR_2) - VAR_3);
}
