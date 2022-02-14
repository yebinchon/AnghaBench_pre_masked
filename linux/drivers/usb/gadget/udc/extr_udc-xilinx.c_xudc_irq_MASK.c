
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct xusb_udc {int (* read_fn ) (scalar_t__) ;int lock; scalar_t__ addr; int (* write_fn ) (scalar_t__,scalar_t__,int) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__,int) ;
 int FUNC_7 (struct xusb_udc*,int) ;
 int FUNC_8 (struct xusb_udc*,int,int) ;
 int FUNC_9 (struct xusb_udc*,int) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_8, void *VAR_9)
{
 struct xusb_udc *VAR_10 = VAR_9;
 u32 VAR_11;
 u32 VAR_12;
 u8 VAR_13;
 u32 VAR_14;
 unsigned long VAR_15;

 FUNC_0(&VAR_10->lock, VAR_15);





 VAR_12 = VAR_10->read_fn(VAR_10->addr + VAR_1);
 VAR_12 &= ~VAR_6;
 VAR_10->write_fn(VAR_10->addr, VAR_1, VAR_12);


 VAR_11 = VAR_10->read_fn(VAR_10->addr + VAR_7);


 if (VAR_11 & VAR_6) {







  FUNC_9(VAR_10, VAR_11);
 }


 if (VAR_11 & VAR_5) {

  VAR_12 = VAR_10->read_fn(VAR_10->addr + VAR_1);
  VAR_12 |= VAR_6;
  VAR_10->write_fn(VAR_10->addr, VAR_1, VAR_12);

  if (VAR_11 & VAR_2)
   FUNC_7(VAR_10, VAR_11);

  for (VAR_13 = 1; VAR_13 < 8; VAR_13++) {
   VAR_14 = ((VAR_11 &
      (VAR_3 <<
      (VAR_13 - 1))) || (VAR_11 &
      (VAR_4 <<
      (VAR_13 - 1))));
   if (VAR_14) {
    FUNC_8(VAR_10, VAR_13,
       VAR_11);
   }
  }
 }

 FUNC_1(&VAR_10->lock, VAR_15);
 return VAR_0;
}
