
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fotg210_ep {TYPE_1__* fotg210; scalar_t__ epnum; } ;
struct TYPE_2__ {scalar_t__ reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct fotg210_ep *VAR_9)
{
 u32 VAR_10;

 do {
  VAR_10 = FUNC_1(VAR_9->fotg210->reg + VAR_7);
  if ((VAR_10 & VAR_3) ||
      (VAR_10 & VAR_2))
   goto dma_reset;
 } while (!(VAR_10 & VAR_1));

 VAR_10 &= ~VAR_1;
 FUNC_2(VAR_10, VAR_9->fotg210->reg + VAR_7);
 return;

dma_reset:
 VAR_10 = FUNC_1(VAR_9->fotg210->reg + VAR_8);
 VAR_10 |= VAR_4;
 FUNC_2(VAR_10, VAR_9->fotg210->reg + VAR_8);


 if (VAR_9->epnum) {
  VAR_10 = FUNC_1(VAR_9->fotg210->reg +
    FUNC_0(VAR_9->epnum - 1));
  VAR_10 |= VAR_5;
  FUNC_2(VAR_10, VAR_9->fotg210->reg +
    FUNC_0(VAR_9->epnum - 1));
 } else {
  VAR_10 = FUNC_1(VAR_9->fotg210->reg + VAR_6);
  VAR_10 |= VAR_0;
  FUNC_2(VAR_10, VAR_9->fotg210->reg + VAR_6);
 }
}
