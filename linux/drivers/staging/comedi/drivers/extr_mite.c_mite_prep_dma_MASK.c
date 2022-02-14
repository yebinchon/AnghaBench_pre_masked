
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mite_channel {scalar_t__ dir; int channel; TYPE_1__* ring; struct mite* mite; } ;
struct mite {scalar_t__ mmio; } ;
struct TYPE_2__ {unsigned int dma_addr; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct mite_channel*) ;
 unsigned int FUNC_7 (int ) ;
 unsigned int FUNC_8 (int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (unsigned int,scalar_t__) ;

void FUNC_11(struct mite_channel *VAR_15,
     unsigned int VAR_16, unsigned int VAR_17)
{
 struct mite *VAR_18 = VAR_15->mite;
 unsigned int VAR_19, VAR_20, VAR_21, VAR_22;

 FUNC_6(VAR_15);


 VAR_19 = VAR_5 | VAR_4 | VAR_6 |
     VAR_0;
 VAR_19 |= VAR_7;
 if (VAR_17 == 32 && VAR_16 == 16) {







  VAR_19 |= VAR_1 | VAR_2;
 }
 if (VAR_15->dir == VAR_8)
  VAR_19 |= VAR_3;

 FUNC_10(VAR_19, VAR_18->mmio + FUNC_0(VAR_15->channel));


 VAR_20 = FUNC_8(64) | VAR_10;
 switch (VAR_17) {
 case 8:
  VAR_20 |= VAR_14;
  break;
 case 16:
  VAR_20 |= VAR_12;
  break;
 case 32:
  VAR_20 |= VAR_13;
  break;
 default:
  FUNC_9("bug! invalid mem bit width for dma transfer\n");
  break;
 }
 FUNC_10(VAR_20, VAR_18->mmio + FUNC_5(VAR_15->channel));


 VAR_21 = FUNC_8(64) | VAR_10;
 VAR_21 |= VAR_11 | VAR_9 | FUNC_7(VAR_15->channel);
 switch (VAR_16) {
 case 8:
  VAR_21 |= VAR_14;
  break;
 case 16:
  VAR_21 |= VAR_12;
  break;
 case 32:
  VAR_21 |= VAR_13;
  break;
 default:
  FUNC_9("bug! invalid dev bit width for dma transfer\n");
  break;
 }
 FUNC_10(VAR_21, VAR_18->mmio + FUNC_2(VAR_15->channel));


 FUNC_10(0, VAR_18->mmio + FUNC_1(VAR_15->channel));


 VAR_22 = FUNC_8(64) | VAR_10 | VAR_13;
 FUNC_10(VAR_22, VAR_18->mmio + FUNC_4(VAR_15->channel));


 FUNC_10(VAR_15->ring->dma_addr,
        VAR_18->mmio + FUNC_3(VAR_15->channel));
}
