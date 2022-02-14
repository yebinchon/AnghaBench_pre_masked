
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct em28xx_button {scalar_t__ role; scalar_t__ reg_r; int reg_clearing; } ;
struct TYPE_3__ {struct em28xx_button* buttons; } ;
struct em28xx {size_t num_button_polling_addresses; scalar_t__* button_polling_addresses; int button_polling_interval; int buttons_query_work; int button_polling_last_values; TYPE_2__* intf; TYPE_1__ board; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct em28xx*,int ) ;
 scalar_t__ FUNC_3 (struct em28xx*) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(struct em28xx *VAR_7)
{
 u8 VAR_8 = 0, VAR_9 = 0;
 bool VAR_10 = 0;

 VAR_7->button_polling_interval = VAR_0;
 while (VAR_7->board.buttons[VAR_8].role >= 0 &&
        VAR_7->board.buttons[VAR_8].role < VAR_6) {
  const struct em28xx_button *VAR_11 = &VAR_7->board.buttons[VAR_8];


  VAR_10 = 1;
  for (VAR_9 = 0; VAR_9 < VAR_7->num_button_polling_addresses; VAR_9++) {
   if (VAR_11->reg_r == VAR_7->button_polling_addresses[VAR_9]) {
    VAR_10 = 0;
    break;
   }
  }

  if (VAR_10 && VAR_7->num_button_polling_addresses
        >= VAR_5) {
   FUNC_0(1, "BUG: maximum number of button polling addresses exceeded.");
   goto next_button;
  }

  if (VAR_11->role == VAR_3) {

   if (FUNC_3(VAR_7) < 0)
    goto next_button;
  } else if (VAR_11->role == VAR_2) {

   if (!FUNC_2(VAR_7, VAR_4)) {
    FUNC_1(&VAR_7->intf->dev,
     "BUG: illumination button defined, but no illumination LED.\n");
    goto next_button;
   }
  }

  if (VAR_10) {
   unsigned int VAR_12 = VAR_7->num_button_polling_addresses;

   VAR_7->button_polling_addresses[VAR_12] = VAR_11->reg_r;
   VAR_7->num_button_polling_addresses++;
  }

  if (!VAR_11->reg_clearing)
   VAR_7->button_polling_interval =
      VAR_1;
next_button:

  VAR_8++;
 }


 if (VAR_7->num_button_polling_addresses) {
  FUNC_4(VAR_7->button_polling_last_values, 0,
         VAR_5);
  FUNC_6(&VAR_7->buttons_query_work,
          FUNC_5(VAR_7->button_polling_interval));
 }
}
