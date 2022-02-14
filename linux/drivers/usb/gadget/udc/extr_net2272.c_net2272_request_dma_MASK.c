
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ plx9054_base_addr; } ;
struct net2272 {int dma_busy; int dev_id; int dma_eot_polarity; int dma_dack_polarity; int dma_dreq_polarity; TYPE_1__ rdk1; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;

 int VAR_27 ;
 int VAR_28 ;
 int FUNC_0 (int ,char*,unsigned int,int,unsigned int,unsigned int) ;
 int FUNC_1 (struct net2272*,int ) ;
 int FUNC_2 (struct net2272*,int ,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(struct net2272 *VAR_29, unsigned VAR_30, u32 VAR_31,
 unsigned VAR_32, unsigned VAR_33)
{
 FUNC_0(VAR_29->dev, "request_dma ep %d buf %08x len %d dir %d\n",
  VAR_30, VAR_31, VAR_32, VAR_33);


 if (VAR_29->dma_busy)
  return -VAR_17;




 if ((VAR_33 == 1) && (VAR_32 > 0x1000000))
  return -VAR_18;

 VAR_29->dma_busy = 1;
 FUNC_2(VAR_29, VAR_7,
  (0 << VAR_9) |
  (1 << VAR_14) |
  (1 << VAR_11) |
  (VAR_29->dma_eot_polarity << VAR_19) |
  (VAR_29->dma_dack_polarity << VAR_0) |
  (VAR_29->dma_dreq_polarity << VAR_16) |
  ((VAR_30 >> 1) << VAR_12));

 (void) FUNC_1(VAR_29, VAR_27);

 return 0;
}
