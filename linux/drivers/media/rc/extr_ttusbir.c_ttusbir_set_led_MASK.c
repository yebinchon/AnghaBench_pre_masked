
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttusbir {scalar_t__ led_on; scalar_t__ is_led_on; scalar_t__* bulk_buffer; int led_complete; int dev; int bulk_urb; scalar_t__ udev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct ttusbir *VAR_1)
{
 int VAR_2;

 FUNC_3();

 if (VAR_1->led_on != VAR_1->is_led_on && VAR_1->udev &&
    FUNC_0(&VAR_1->led_complete, 1, 1)) {
  VAR_1->bulk_buffer[4] = VAR_1->is_led_on = VAR_1->led_on;
  VAR_2 = FUNC_4(VAR_1->bulk_urb, VAR_0);
  if (VAR_2) {
   FUNC_2(VAR_1->dev, "failed to submit bulk urb: %d\n",
         VAR_2);
   FUNC_1(&VAR_1->led_complete);
  }
 }
}
