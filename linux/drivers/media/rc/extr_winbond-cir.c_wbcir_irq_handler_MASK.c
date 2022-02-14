
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wbcir_data {int irqmask; int spinlock; int txstate; scalar_t__ sbase; int dev; int rxstate; } ;
struct pnp_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 struct wbcir_data* FUNC_2 (struct pnp_dev*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct wbcir_data*,struct pnp_dev*) ;
 int FUNC_6 (struct wbcir_data*) ;
 int FUNC_7 (struct wbcir_data*,int ) ;

__attribute__((used)) static irqreturn_t
FUNC_8(int VAR_14, void *VAR_15)
{
 struct pnp_dev *VAR_16 = VAR_15;
 struct wbcir_data *VAR_17 = FUNC_2(VAR_16);
 unsigned long VAR_18;
 u8 VAR_19;

 FUNC_3(&VAR_17->spinlock, VAR_18);
 FUNC_7(VAR_17, VAR_2);
 VAR_19 = FUNC_0(VAR_17->sbase + VAR_8);
 VAR_19 &= VAR_17->irqmask;

 if (!VAR_19) {
  FUNC_4(&VAR_17->spinlock, VAR_18);
  return VAR_1;
 }

 if (VAR_19 & VAR_3) {

  if (FUNC_0(VAR_17->sbase + VAR_9) & VAR_11) {
   VAR_17->rxstate = VAR_10;
   FUNC_1(VAR_17->dev);
  }


  if (FUNC_0(VAR_17->sbase + VAR_7) & VAR_13)
   VAR_17->txstate = VAR_12;
 }

 if (VAR_19 & VAR_4)
  FUNC_5(VAR_17, VAR_16);

 if (VAR_19 & (VAR_6 | VAR_5))
  FUNC_6(VAR_17);

 FUNC_4(&VAR_17->spinlock, VAR_18);
 return VAR_0;
}
