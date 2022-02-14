
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int done; int wait; } ;
struct request_context {int state; TYPE_1__ done; } ;
struct ezusb_priv {int dummy; } ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ezusb_priv *VAR_2,
          struct request_context *VAR_3)
{
 switch (VAR_3->state) {
 case 131:
 case 129:
 case 130:
 case 128:
  if (FUNC_0()) {



   int VAR_4 = VAR_0 * (1000 / VAR_1);
   while (!VAR_3->done.done && VAR_4--)
    FUNC_1(1000);
  } else {
   FUNC_2(VAR_3->done.wait,
       VAR_3->done.done);
  }
  break;
 default:

  break;
 }
}
