
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {struct gpio_ir* priv; } ;
struct gpio_ir {int duty_cycle; int lock; int gpio; int carrier; } ;
typedef int s32 ;
typedef int ktime_t ;


 unsigned int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int ,unsigned int) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int,int) ;

__attribute__((used)) static int FUNC_14(struct rc_dev *VAR_1, unsigned int *VAR_2,
        unsigned int VAR_3)
{
 struct gpio_ir *VAR_4 = VAR_1->priv;
 unsigned long VAR_5;
 ktime_t VAR_6;




 s32 VAR_7;
 int VAR_8;
 unsigned int VAR_9, VAR_10;


 VAR_9 = FUNC_0(VAR_4->duty_cycle * (VAR_0 / 100),
      VAR_4->carrier);
 VAR_10 = FUNC_0((100 - VAR_4->duty_cycle) *
      (VAR_0 / 100), VAR_4->carrier);

 FUNC_10(&VAR_4->lock, VAR_5);

 VAR_6 = FUNC_5();

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  if (VAR_8 % 2) {

   VAR_6 = FUNC_3(VAR_6, VAR_2[VAR_8]);
   VAR_7 = FUNC_8(VAR_6, FUNC_5());
   if (VAR_7 > 10) {
    FUNC_11(&VAR_4->lock, VAR_5);
    FUNC_13(VAR_7, VAR_7 + 10);
    FUNC_10(&VAR_4->lock, VAR_5);
   } else if (VAR_7 > 0) {
    FUNC_12(VAR_7);
   }
  } else {

   ktime_t VAR_11 = FUNC_3(VAR_6, VAR_2[VAR_8]);

   while (FUNC_4(FUNC_5(), VAR_11)) {
    FUNC_1(VAR_4->gpio, 1);
    VAR_6 = FUNC_2(VAR_6, VAR_9);
    VAR_7 = FUNC_7(FUNC_6(VAR_6,
             FUNC_5()));
    if (VAR_7 > 0)
     FUNC_9(VAR_7);
    FUNC_1(VAR_4->gpio, 0);
    VAR_6 = FUNC_2(VAR_6, VAR_10);
    VAR_7 = FUNC_7(FUNC_6(VAR_6,
             FUNC_5()));
    if (VAR_7 > 0)
     FUNC_9(VAR_7);
   }

   VAR_6 = VAR_11;
  }
 }

 FUNC_11(&VAR_4->lock, VAR_5);

 return VAR_3;
}
