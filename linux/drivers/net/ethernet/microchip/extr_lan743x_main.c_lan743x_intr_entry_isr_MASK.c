
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lan743x_vector {int flags; int int_mask; int vector_index; int context; int (* handler ) (int ,int,int) ;struct lan743x_adapter* adapter; } ;
struct lan743x_adapter {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
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
 int FUNC_1 (struct lan743x_adapter*,int ) ;
 int FUNC_2 (struct lan743x_adapter*,int ,int) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_17, void *VAR_18)
{
 struct lan743x_vector *VAR_19 = VAR_18;
 struct lan743x_adapter *VAR_20 = VAR_19->adapter;
 irqreturn_t VAR_21 = VAR_8;
 u32 VAR_22;
 u32 VAR_23;

 if (VAR_19->flags & VAR_14) {
  VAR_23 = FUNC_1(VAR_20, VAR_3);
 } else if (VAR_19->flags &
     (VAR_13 |
     VAR_12)) {
  VAR_23 = FUNC_1(VAR_20, VAR_4);
 } else {

  VAR_23 = VAR_19->int_mask | VAR_0;
 }

 if (!(VAR_23 & VAR_0))
  goto irq_done;

 if (VAR_19->flags & VAR_15)

  FUNC_2(VAR_20,
      VAR_5,
      FUNC_0(VAR_19->vector_index));

 if (VAR_19->flags & VAR_9)

  FUNC_2(VAR_20, VAR_1, VAR_0);

 if (VAR_19->flags & VAR_11) {
  VAR_22 = FUNC_1(VAR_20, VAR_2);
 } else {

  VAR_22 = VAR_19->int_mask;
 }

 VAR_23 &= VAR_22;
 VAR_23 &= VAR_19->int_mask;
 if (VAR_23) {
  if (VAR_19->handler) {
   VAR_19->handler(VAR_19->context,
     VAR_23, VAR_19->flags);
  } else {

   FUNC_2(VAR_20, VAR_1,
       VAR_19->int_mask);
  }
  VAR_21 = VAR_7;
 }

 if (VAR_19->flags & VAR_10)

  FUNC_2(VAR_20, VAR_2, VAR_0);

 if (VAR_19->flags & VAR_16)

  FUNC_2(VAR_20,
      VAR_6,
      FUNC_0(VAR_19->vector_index));
irq_done:
 return VAR_21;
}
