
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef long u16 ;
struct sk_buff {scalar_t__ data; } ;
struct brcmf_sdio {unsigned long head_align; scalar_t__ tx_hdrlen; TYPE_2__* sdiodev; } ;
struct brcmf_bus_stats {int pktcow_failed; int pktcowed; } ;
struct TYPE_4__ {TYPE_1__* bus_if; } ;
struct TYPE_3__ {struct brcmf_bus_stats stats; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (struct sk_buff*,long) ;
 long FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,long) ;

__attribute__((used)) static int FUNC_5(struct brcmf_sdio *VAR_1, struct sk_buff *VAR_2)
{
 struct brcmf_bus_stats *VAR_3;
 u16 VAR_4;
 u8 *VAR_5;

 VAR_5 = (u8 *)(VAR_2->data);


 VAR_4 = ((unsigned long)VAR_5 % VAR_1->head_align);
 if (VAR_4) {
  if (FUNC_3(VAR_2) < VAR_4) {
   VAR_3 = &VAR_1->sdiodev->bus_if->stats;
   FUNC_0(&VAR_3->pktcowed);
   if (FUNC_2(VAR_2, VAR_4)) {
    FUNC_0(&VAR_3->pktcow_failed);
    return -VAR_0;
   }
   VAR_4 = 0;
  }
  FUNC_4(VAR_2, VAR_4);
  VAR_5 = (u8 *)(VAR_2->data);
 }
 FUNC_1(VAR_5, 0, VAR_4 + VAR_1->tx_hdrlen);
 return VAR_4;
}
