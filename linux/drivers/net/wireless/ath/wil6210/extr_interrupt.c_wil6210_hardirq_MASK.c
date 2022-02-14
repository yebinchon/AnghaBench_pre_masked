
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ (* irq_rx ) (int,void*) ;scalar_t__ (* irq_tx ) (int,void*) ;} ;
struct wil6210_priv {TYPE_1__ txrx_ops; } ;
typedef scalar_t__ irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int,void*) ;
 scalar_t__ FUNC_1 (int,void*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct wil6210_priv*,int) ;
 scalar_t__ FUNC_5 (int,void*) ;
 int FUNC_6 (struct wil6210_priv*) ;
 int FUNC_7 (struct wil6210_priv*) ;
 int FUNC_8 (struct wil6210_priv*,char*,int) ;
 int FUNC_9 (struct wil6210_priv*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_7, void *VAR_8)
{
 irqreturn_t VAR_9 = VAR_3;
 struct wil6210_priv *VAR_10 = VAR_8;
 u32 VAR_11 = FUNC_9(VAR_10, VAR_6);




 if (FUNC_3((VAR_11 == 0) || ((VAR_11 & 0xff) == 0xff)))
  return VAR_4;


 if (FUNC_3(FUNC_4(VAR_10, VAR_11)))
  return VAR_4;

 FUNC_2(VAR_11);
 FUNC_8(VAR_10, "Pseudo IRQ 0x%08x\n", VAR_11);

 FUNC_6(VAR_10);
 if ((VAR_11 & VAR_1) &&
     (VAR_10->txrx_ops.irq_rx(VAR_7, VAR_8) == VAR_5))
  VAR_9 = VAR_5;

 if ((VAR_11 & VAR_2) &&
     (VAR_10->txrx_ops.irq_tx(VAR_7, VAR_8) == VAR_5))
  VAR_9 = VAR_5;

 if ((VAR_11 & VAR_0) &&
     (FUNC_5(VAR_7, VAR_8) == VAR_5))
  VAR_9 = VAR_5;


 if (VAR_9 != VAR_5)
  FUNC_7(VAR_10);

 return VAR_9;
}
