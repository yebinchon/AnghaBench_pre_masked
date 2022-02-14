
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_4__ {scalar_t__ kbdlight; } ;
struct TYPE_3__ {int led_classdev; } ;




 unsigned int const VAR_0 ;



 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_2__ VAR_5 ;
 int FUNC_4 () ;
 TYPE_1__ VAR_6 ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(const unsigned int VAR_7)
{
 if (VAR_2) {
  switch (VAR_7) {
  case 131:
  case 132:
   FUNC_4();
  }
 }
 if (VAR_1) {
  switch (VAR_7) {
  case 128:
  case 130:
  case 129:
   FUNC_5();
  }
 }
 if (VAR_5.kbdlight && VAR_7 == VAR_0) {
  enum led_brightness VAR_8;

  FUNC_2(&VAR_4);





  VAR_8 = FUNC_0(((void*)0));
  if (VAR_3 != VAR_8) {
   VAR_3 = VAR_8;
   FUNC_1(
    &VAR_6.led_classdev, VAR_8);
  }

  FUNC_3(&VAR_4);
 }
}
