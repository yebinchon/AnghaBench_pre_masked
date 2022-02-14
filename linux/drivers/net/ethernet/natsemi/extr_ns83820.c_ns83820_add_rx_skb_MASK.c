
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int data; } ;
struct TYPE_2__ {unsigned int next_empty; unsigned int next_rx; scalar_t__ phy_descs; int * descs; struct sk_buff** skbs; int nr_used; } ;
struct ns83820 {TYPE_1__ rx_info; int pci_dev; } ;
typedef int dma_addr_t ;
typedef int __le32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ns83820*,int *,int ,int ,int,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,unsigned int,int ,unsigned int) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct ns83820*) ;
 int FUNC_7 (int ,int ,int,int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static inline int FUNC_9(struct ns83820 *VAR_5, struct sk_buff *VAR_6)
{
 unsigned VAR_7;
 u32 VAR_8;
 __le32 *VAR_9;
 dma_addr_t VAR_10;

 VAR_7 = VAR_5->rx_info.next_empty;


 if (FUNC_8(FUNC_6(VAR_5) <= 2)) {
  FUNC_4(VAR_6);
  return 1;
 }
 VAR_9 = VAR_5->rx_info.descs + (VAR_7 * VAR_1);
 FUNC_0(((void*)0) != VAR_5->rx_info.skbs[VAR_7]);
 VAR_5->rx_info.skbs[VAR_7] = VAR_6;

 VAR_5->rx_info.next_empty = (VAR_7 + 1) % VAR_2;
 VAR_8 = VAR_4 | VAR_0;
 VAR_10 = FUNC_7(VAR_5->pci_dev, VAR_6->data,
        VAR_4, VAR_3);
 FUNC_1(VAR_5, VAR_9, 0, VAR_10, VAR_8, 0);

 if (FUNC_5(VAR_7 != VAR_5->rx_info.next_rx))
  VAR_5->rx_info.descs[((VAR_2 + VAR_7 - 1) % VAR_2) * VAR_1] = FUNC_2(VAR_5->rx_info.phy_descs + (VAR_7 * VAR_1 * 4));

 return 0;
}
