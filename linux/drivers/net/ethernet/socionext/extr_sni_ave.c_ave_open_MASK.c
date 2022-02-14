
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int phydev; int name; } ;
struct TYPE_4__ {int ndesc; scalar_t__ done_idx; scalar_t__ proc_idx; void* desc; } ;
struct TYPE_3__ {int ndesc; scalar_t__ done_idx; scalar_t__ proc_idx; void* desc; } ;
struct ave_private {int desc_size; int irq; int napi_tx; int napi_rx; scalar_t__ base; TYPE_2__ rx; TYPE_1__ tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,int ,int,int ) ;
 int FUNC_2 (struct net_device*,int ,int,int ) ;
 int VAR_28 ;
 int FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,struct net_device*) ;
 void* FUNC_9 (int,int,int ) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (int *) ;
 struct ave_private* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (int ,int ,int ,int ,struct net_device*) ;
 int FUNC_18 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_19(struct net_device *VAR_29)
{
 struct ave_private *VAR_30 = FUNC_12(VAR_29);
 int VAR_31;
 int VAR_32;
 u32 VAR_33;

 VAR_32 = FUNC_17(VAR_30->irq, VAR_28, VAR_27, VAR_29->name,
     VAR_29);
 if (VAR_32)
  return VAR_32;

 VAR_30->tx.desc = FUNC_9(VAR_30->tx.ndesc, sizeof(*VAR_30->tx.desc),
    VAR_26);
 if (!VAR_30->tx.desc) {
  VAR_32 = -VAR_25;
  goto out_free_irq;
 }

 VAR_30->rx.desc = FUNC_9(VAR_30->rx.ndesc, sizeof(*VAR_30->rx.desc),
    VAR_26);
 if (!VAR_30->rx.desc) {
  FUNC_10(VAR_30->tx.desc);
  VAR_32 = -VAR_25;
  goto out_free_irq;
 }


 VAR_30->tx.proc_idx = 0;
 VAR_30->tx.done_idx = 0;
 for (VAR_31 = 0; VAR_31 < VAR_30->tx.ndesc; VAR_31++) {
  FUNC_2(VAR_29, VAR_0, VAR_31, 0);
  FUNC_1(VAR_29, VAR_0, VAR_31, 0);
 }
 FUNC_18(VAR_23 |
        (((VAR_30->tx.ndesc * VAR_30->desc_size) << 16) & VAR_24),
        VAR_30->base + VAR_22);


 VAR_30->rx.proc_idx = 0;
 VAR_30->rx.done_idx = 0;
 for (VAR_31 = 0; VAR_31 < VAR_30->rx.ndesc; VAR_31++) {
  if (FUNC_6(VAR_29, VAR_31))
   break;
 }
 FUNC_18(VAR_18 |
        (((VAR_30->rx.ndesc * VAR_30->desc_size) << 16) & VAR_19),
        VAR_30->base + VAR_17);

 FUNC_0(VAR_29, VAR_1);

 FUNC_5(VAR_29);
 FUNC_4(VAR_29);



 VAR_33 = VAR_16 | VAR_13 | VAR_12 |
  VAR_14 | (VAR_10 & VAR_15);
 FUNC_18(VAR_33, VAR_30->base + VAR_11);



 FUNC_18(VAR_21, VAR_30->base + VAR_20);


 VAR_33 = FUNC_16(VAR_30->base + VAR_6) & VAR_7;
 VAR_33 |= VAR_8 | (VAR_9 << 16);
 FUNC_18(VAR_33, VAR_30->base + VAR_6);

 VAR_33 = VAR_3 | VAR_4 | VAR_5 | VAR_2;
 FUNC_3(VAR_29, VAR_33);

 FUNC_11(&VAR_30->napi_rx);
 FUNC_11(&VAR_30->napi_tx);

 FUNC_14(VAR_29->phydev);
 FUNC_15(VAR_29->phydev);
 FUNC_13(VAR_29);

 return 0;

out_free_irq:
 FUNC_7(VAR_30->irq);
 FUNC_8(VAR_30->irq, VAR_29);

 return VAR_32;
}
