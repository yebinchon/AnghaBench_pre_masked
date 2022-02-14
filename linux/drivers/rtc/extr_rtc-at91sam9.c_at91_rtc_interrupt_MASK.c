
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sam9_rtc {int lock; scalar_t__ suspended; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sam9_rtc*) ;
 int FUNC_1 (struct sam9_rtc*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct sam9_rtc*,int ) ;
 int FUNC_4 (struct sam9_rtc*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_3, void *VAR_4)
{
 struct sam9_rtc *VAR_5 = VAR_4;
 int VAR_6;

 FUNC_5(&VAR_5->lock);

 VAR_6 = FUNC_0(VAR_5);


 if (VAR_5->suspended) {

  FUNC_4(VAR_5, VAR_2,
      FUNC_3(VAR_5, VAR_2) &
      ~(VAR_0 | VAR_1));

  FUNC_2();
 } else {
  FUNC_1(VAR_5);
 }

 FUNC_6(&VAR_5->lock);

 return VAR_6;
}
