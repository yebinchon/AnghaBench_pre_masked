
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct napi_struct {int dev; } ;
struct mvneta_port {int cause_rx_tx; scalar_t__ neta_armada3700; TYPE_1__* dev; int * rxqs; scalar_t__ bm_priv; int ports; } ;
struct mvneta_pcpu_port {int cause_rx_tx; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (struct mvneta_port*) ;
 int FUNC_7 (struct napi_struct*,struct mvneta_port*,int,int *) ;
 int FUNC_8 (struct napi_struct*,struct mvneta_port*,int,int *) ;
 int FUNC_9 (struct mvneta_port*,int) ;
 int FUNC_10 (struct mvneta_port*,int ) ;
 int FUNC_11 (struct mvneta_port*,int ,int) ;
 int FUNC_12 (struct napi_struct*) ;
 int FUNC_13 (struct napi_struct*,int) ;
 struct mvneta_port* FUNC_14 (int ) ;
 int FUNC_15 (TYPE_1__*) ;
 int VAR_7 ;
 struct mvneta_pcpu_port* FUNC_16 (int ) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_17(struct napi_struct *VAR_9, int VAR_10)
{
 int VAR_11 = 0;
 u32 VAR_12;
 int VAR_13;
 struct mvneta_port *VAR_14 = FUNC_14(VAR_9->dev);
 struct mvneta_pcpu_port *VAR_15 = FUNC_16(VAR_14->ports);

 if (!FUNC_15(VAR_14->dev)) {
  FUNC_12(VAR_9);
  return VAR_11;
 }


 VAR_12 = FUNC_10(VAR_14, VAR_3);
 if (VAR_12 & VAR_5) {
  u32 VAR_16 = FUNC_10(VAR_14, VAR_2);

  FUNC_11(VAR_14, VAR_2, 0);

  if (VAR_16 & (VAR_1 |
      VAR_0))
   FUNC_6(VAR_14);
 }


 if (VAR_12 & VAR_6) {
  FUNC_9(VAR_14, (VAR_12 & VAR_6));
  VAR_12 &= ~VAR_6;
 }




 VAR_13 = FUNC_3(((VAR_12 >> 8) & 0xff));

 VAR_12 |= VAR_14->neta_armada3700 ? VAR_14->cause_rx_tx :
  VAR_15->cause_rx_tx;

 if (VAR_13) {
  VAR_13 = VAR_13 - 1;
  if (VAR_14->bm_priv)
   VAR_11 = FUNC_7(VAR_9, VAR_14, VAR_10,
       &VAR_14->rxqs[VAR_13]);
  else
   VAR_11 = FUNC_8(VAR_9, VAR_14, VAR_10,
       &VAR_14->rxqs[VAR_13]);
 }

 if (VAR_11 < VAR_10) {
  VAR_12 = 0;
  FUNC_13(VAR_9, VAR_11);

  if (VAR_14->neta_armada3700) {
   unsigned long VAR_17;

   FUNC_5(VAR_17);
   FUNC_11(VAR_14, VAR_4,
        FUNC_0(VAR_7) |
        FUNC_1(VAR_8) |
        VAR_5);
   FUNC_4(VAR_17);
  } else {
   FUNC_2(VAR_14->dev->irq, 0);
  }
 }

 if (VAR_14->neta_armada3700)
  VAR_14->cause_rx_tx = VAR_12;
 else
  VAR_15->cause_rx_tx = VAR_12;

 return VAR_11;
}
