
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct typhoon {int pdev; } ;
struct TYPE_2__ {int volatile addr; } ;
struct tx_desc {int flags; unsigned long tx_addr; int len; TYPE_1__ frag; } ;
struct transmit_ring {scalar_t__ lastRead; scalar_t__ ringBase; } ;
struct sk_buff {int dummy; } ;
typedef scalar_t__ dma_addr_t ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int volatile) ;
 int FUNC_3 (int ,scalar_t__,int,int ) ;
 int FUNC_4 (scalar_t__*,int) ;

__attribute__((used)) static u32
FUNC_5(struct typhoon *VAR_4, struct transmit_ring *VAR_5,
   volatile __le32 * VAR_6)
{
 u32 VAR_7 = VAR_5->lastRead;
 struct tx_desc *VAR_8;
 dma_addr_t VAR_9;
 int VAR_10;
 int VAR_11;

 while(VAR_7 != FUNC_2(*VAR_6)) {
  VAR_8 = (struct tx_desc *) (VAR_5->ringBase + VAR_7);
  VAR_11 = VAR_8->flags & VAR_3;

  if(VAR_11 == VAR_2) {


   unsigned long VAR_12 = VAR_8->tx_addr;
   struct sk_buff *VAR_13 = (struct sk_buff *) VAR_12;
   FUNC_0(VAR_13);
  } else if(VAR_11 == VAR_1) {


   VAR_9 = (dma_addr_t) FUNC_2(VAR_8->frag.addr);
   VAR_10 = FUNC_1(VAR_8->len);
   FUNC_3(VAR_4->pdev, VAR_9, VAR_10,
           VAR_0);
  }

  VAR_8->flags = 0;
  FUNC_4(&VAR_7, 1);
 }

 return VAR_7;
}
