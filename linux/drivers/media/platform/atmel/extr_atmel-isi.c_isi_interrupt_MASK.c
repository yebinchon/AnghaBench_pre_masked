
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atmel_isi {int irqlock; int complete; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct atmel_isi*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct atmel_isi*,int ) ;
 int FUNC_3 (struct atmel_isi*,int ,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_9, void *VAR_10)
{
 struct atmel_isi *VAR_11 = VAR_10;
 u32 VAR_12, VAR_13, VAR_14;
 irqreturn_t VAR_15 = VAR_1;

 FUNC_5(&VAR_11->irqlock);

 VAR_12 = FUNC_2(VAR_11, VAR_8);
 VAR_13 = FUNC_2(VAR_11, VAR_5);
 VAR_14 = VAR_12 & VAR_13;

 if (VAR_14 & VAR_3) {
  FUNC_1(&VAR_11->complete);
  FUNC_3(VAR_11, VAR_4, VAR_3);
  VAR_15 = VAR_0;
 } else if (VAR_14 & VAR_2) {
  FUNC_1(&VAR_11->complete);
  FUNC_3(VAR_11, VAR_4, VAR_2);
  VAR_15 = VAR_0;
 } else {
  if (FUNC_4(VAR_14 & VAR_6) ||
    FUNC_4(VAR_14 & VAR_7))
   VAR_15 = FUNC_0(VAR_11);
 }

 FUNC_6(&VAR_11->irqlock);
 return VAR_15;
}
