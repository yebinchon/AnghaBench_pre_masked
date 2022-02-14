
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct driver_data {int mask_sr; scalar_t__ tx; scalar_t__ tx_end; int rx_end; int rx; int n_bytes; scalar_t__ (* read ) (struct driver_data*) ;scalar_t__ (* write ) (struct driver_data*) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct driver_data*,char*) ;
 int FUNC_1 (struct driver_data*) ;
 scalar_t__ FUNC_2 (struct driver_data*) ;
 int FUNC_3 (struct driver_data*,int*) ;
 int FUNC_4 (struct driver_data*) ;
 int FUNC_5 (struct driver_data*,int ) ;
 int FUNC_6 (struct driver_data*,int*,int) ;
 int FUNC_7 (struct driver_data*,int ,int) ;
 scalar_t__ FUNC_8 (struct driver_data*) ;
 scalar_t__ FUNC_9 (struct driver_data*) ;
 scalar_t__ FUNC_10 (struct driver_data*) ;
 scalar_t__ FUNC_11 (struct driver_data*) ;

__attribute__((used)) static irqreturn_t FUNC_12(struct driver_data *VAR_8)
{
 u32 VAR_9 = (FUNC_5(VAR_8, VAR_1) & VAR_2) ?
         VAR_8->mask_sr : VAR_8->mask_sr & ~VAR_5;

 u32 VAR_10 = FUNC_5(VAR_8, VAR_3) & VAR_9;

 if (VAR_10 & VAR_4) {
  FUNC_0(VAR_8, "interrupt_transfer: fifo overrun");
  return VAR_0;
 }

 if (VAR_10 & VAR_7) {
  FUNC_0(VAR_8, "interrupt_transfer: fifo underrun");
  return VAR_0;
 }

 if (VAR_10 & VAR_6) {
  FUNC_7(VAR_8, VAR_3, VAR_6);
  if (VAR_8->read(VAR_8)) {
   FUNC_1(VAR_8);
   return VAR_0;
  }
 }


 do {
  if (VAR_8->read(VAR_8)) {
   FUNC_1(VAR_8);
   return VAR_0;
  }
 } while (VAR_8->write(VAR_8));

 if (VAR_8->read(VAR_8)) {
  FUNC_1(VAR_8);
  return VAR_0;
 }

 if (VAR_8->tx == VAR_8->tx_end) {
  u32 VAR_11;
  u32 VAR_12;

  VAR_12 = FUNC_5(VAR_8, VAR_1);
  VAR_12 &= ~VAR_2;





  if (FUNC_2(VAR_8)) {
   u32 VAR_13;

   FUNC_3(VAR_8, &VAR_12);

   VAR_11 = VAR_8->rx_end - VAR_8->rx;
   switch (VAR_8->n_bytes) {
   case 4:
    VAR_11 >>= 2;
    break;
   case 2:
    VAR_11 >>= 1;
    break;
   }

   VAR_13 = FUNC_4(VAR_8);
   if (VAR_13 > VAR_11)
    VAR_13 = VAR_11;

   FUNC_6(VAR_8, &VAR_12, VAR_13);
  }
  FUNC_7(VAR_8, VAR_1, VAR_12);
 }


 return VAR_0;
}
