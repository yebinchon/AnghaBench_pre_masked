
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef int u32 ;
struct smsc9420_pdata {int software_irq_signal; int int_lock; int napi; int dev; int ioaddr; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct smsc9420_pdata*) ;
 int FUNC_6 (struct smsc9420_pdata*,int ) ;
 int FUNC_7 (struct smsc9420_pdata*,int ,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_16, void *VAR_17)
{
 struct smsc9420_pdata *VAR_18 = VAR_17;
 u32 VAR_19, VAR_20, VAR_21;
 irqreturn_t VAR_22 = VAR_15;
 ulong VAR_23;

 FUNC_0(!VAR_18);
 FUNC_0(!VAR_18->ioaddr);

 VAR_19 = FUNC_6(VAR_18, VAR_6);


 if ((VAR_19 & (VAR_7 | VAR_8)) !=
     (VAR_7 | VAR_8))
  return VAR_15;

 VAR_20 = FUNC_6(VAR_18, VAR_11);

 if (FUNC_1(VAR_12 & VAR_20)) {
  u32 VAR_24 = FUNC_6(VAR_18, VAR_2);
  u32 VAR_25 = 0;

  if (VAR_24 & VAR_5) {
   VAR_25 |= (VAR_5 | VAR_3);
   FUNC_3(VAR_18->dev);
  }

  if (VAR_24 & VAR_4) {

   u32 VAR_26 = FUNC_6(VAR_18, VAR_0);
   VAR_26 &= (~VAR_1);
   FUNC_7(VAR_18, VAR_0, VAR_26);
   FUNC_5(VAR_18);

   VAR_25 |= (VAR_4 | VAR_3);
   FUNC_2(&VAR_18->napi);
  }

  if (VAR_25)
   FUNC_7(VAR_18, VAR_2, VAR_25);

  VAR_22 = VAR_14;
 }

 if (FUNC_10(VAR_13 & VAR_20)) {

  FUNC_8(&VAR_18->int_lock, VAR_23);
  VAR_21 = FUNC_6(VAR_18, VAR_9);
  VAR_21 &= (~VAR_10);
  FUNC_7(VAR_18, VAR_9, VAR_21);
  FUNC_9(&VAR_18->int_lock, VAR_23);

  FUNC_7(VAR_18, VAR_11, VAR_13);
  VAR_18->software_irq_signal = 1;
  FUNC_4();

  VAR_22 = VAR_14;
 }


 FUNC_5(VAR_18);

 return VAR_22;
}
