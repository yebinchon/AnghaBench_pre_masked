
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ast_vhub {int lock; int ep0; TYPE_1__* ports; int * epns; scalar_t__ regs; int ep0_bufs; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ast_vhub*,char*,int,int,int) ;
 int FUNC_1 (int) ;
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
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ast_vhub*) ;
 int FUNC_7 (struct ast_vhub*) ;
 int FUNC_8 (struct ast_vhub*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_13(int VAR_18, void *VAR_19)
{
 struct ast_vhub *VAR_20 = VAR_19;
 irqreturn_t VAR_21 = VAR_5;
 u32 VAR_22;


 if (!VAR_20->ep0_bufs)
  return VAR_5;

 FUNC_10(&VAR_20->lock);


 VAR_22 = FUNC_9(VAR_20->regs + VAR_2);
 if (!VAR_22)
  goto bail;
 FUNC_12(VAR_22, VAR_20->regs + VAR_2);
 VAR_21 = VAR_4;

 FUNC_0(VAR_20, "irq status=%08x, ep_acks=%08x ep_nacks=%08x\n",
        VAR_22,
        FUNC_9(VAR_20->regs + VAR_0),
        FUNC_9(VAR_20->regs + VAR_1));


 if (VAR_22 & VAR_14) {
  u32 VAR_23, VAR_24 = FUNC_9(VAR_20->regs + VAR_0);
  FUNC_12(VAR_24, VAR_20->regs + VAR_0);

  for (VAR_23 = 0; VAR_24 && VAR_23 < VAR_3; VAR_23++) {
   u32 VAR_25 = FUNC_1(VAR_23);
   if (VAR_24 & VAR_25) {
    FUNC_5(&VAR_20->epns[VAR_23]);
    VAR_24 &= ~VAR_25;
   }
  }
 }


 if (VAR_22 & (VAR_9 |
       VAR_10 |
       VAR_11 |
       VAR_12 |
       VAR_13)) {
  if (VAR_22 & VAR_9)
   FUNC_2(&VAR_20->ports[0].dev);
  if (VAR_22 & VAR_10)
   FUNC_2(&VAR_20->ports[1].dev);
  if (VAR_22 & VAR_11)
   FUNC_2(&VAR_20->ports[2].dev);
  if (VAR_22 & VAR_12)
   FUNC_2(&VAR_20->ports[3].dev);
  if (VAR_22 & VAR_13)
   FUNC_2(&VAR_20->ports[4].dev);
 }


 if (VAR_22 & (VAR_16 |
       VAR_15 |
       VAR_17)) {
  if (VAR_22 & VAR_15)
   FUNC_3(&VAR_20->ep0, 1);
  if (VAR_22 & VAR_16)
   FUNC_3(&VAR_20->ep0, 0);
  if (VAR_22 & VAR_17)
   FUNC_4(&VAR_20->ep0);
 }


 if (VAR_22 & (VAR_7 |
       VAR_8 |
       VAR_6)) {
  if (VAR_22 & VAR_7)
   FUNC_7(VAR_20);
  if (VAR_22 & VAR_8)
   FUNC_8(VAR_20);
  if (VAR_22 & VAR_6)
   FUNC_6(VAR_20);
 }

 bail:
 FUNC_11(&VAR_20->lock);
 return VAR_21;
}
