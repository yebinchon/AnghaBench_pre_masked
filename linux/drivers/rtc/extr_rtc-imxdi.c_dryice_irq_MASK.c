
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int head; } ;
struct imxdi_dev {int dsr; int work; TYPE_1__ write_wait; scalar_t__ ioaddr; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct imxdi_dev*,int) ;
 int FUNC_1 (struct imxdi_dev*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_11, void *VAR_12)
{
 struct imxdi_dev *VAR_13 = VAR_12;
 u32 VAR_14, VAR_15;
 irqreturn_t VAR_16 = VAR_10;

 VAR_15 = FUNC_3(VAR_13->ioaddr + VAR_0);
 VAR_14 = FUNC_3(VAR_13->ioaddr + VAR_4);


 if (VAR_15 & VAR_2) {
  if (VAR_14 & VAR_6) {
   FUNC_0(VAR_13, VAR_2);

   FUNC_1(VAR_13, VAR_14);
   VAR_16 = VAR_9;
  }
 }


 if (VAR_15 & VAR_3) {



  if (FUNC_2(&VAR_13->write_wait.head))
   return VAR_16;


  if (VAR_14 & (VAR_7 | VAR_8)) {

   FUNC_0(VAR_13, VAR_3);


   VAR_13->dsr |= VAR_14;

   FUNC_5(&VAR_13->write_wait);
   VAR_16 = VAR_9;
  }
 }


 if (VAR_15 & VAR_1) {

  if (VAR_14 & VAR_5) {

   FUNC_0(VAR_13, VAR_1);


   FUNC_4(&VAR_13->work);
   VAR_16 = VAR_9;
  }
 }
 return VAR_16;
}
