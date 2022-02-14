
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int speed; } ;
struct net2272 {int dma_eot_polarity; int dma_dack_polarity; int dma_dreq_polarity; TYPE_1__ gadget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct net2272*) ;
 int FUNC_1 (struct net2272*,int ) ;
 int FUNC_2 (struct net2272*,int) ;
 int FUNC_3 (struct net2272*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct net2272 *VAR_21)
{
 VAR_21->gadget.speed = VAR_17;

 FUNC_0(VAR_21);

 FUNC_3(VAR_21, VAR_10, 0);
 FUNC_3(VAR_21, VAR_11, 0);


 FUNC_3(VAR_21, VAR_12, 0xff);
 FUNC_3(VAR_21, VAR_13, ~(1 << VAR_16));

 FUNC_3(VAR_21, VAR_2,
  (0 << VAR_3) |
  (0 << VAR_7) |
  (1 << VAR_4) |
  (VAR_21->dma_eot_polarity << VAR_9) |
  (VAR_21->dma_dack_polarity << VAR_0) |
  (VAR_21->dma_dreq_polarity << VAR_8) |
  ((VAR_18 >> 1) << VAR_5));

 FUNC_0(VAR_21);
 FUNC_2(VAR_21, (VAR_20 <= 3) ? VAR_20 : 0);





 FUNC_3(VAR_21, VAR_14, FUNC_1(VAR_21, VAR_14) | (1 << VAR_1));
 FUNC_3(VAR_21, VAR_15, (VAR_19 << VAR_6));
}
