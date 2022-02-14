
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct rc_dev {int keypressed; int last_protocol; scalar_t__ last_scancode; scalar_t__ last_toggle; scalar_t__ allowed_protocols; TYPE_1__* input_dev; int timer_repeat; int device_name; int dev; scalar_t__ last_keycode; } ;
struct lirc_scancode {scalar_t__ scancode; int rc_proto; scalar_t__ keycode; int flags; } ;
typedef enum rc_proto { ____Placeholder_rc_proto } rc_proto ;
struct TYPE_4__ {scalar_t__* rep; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (int *,char*,int ,scalar_t__,int,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ,scalar_t__,int) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct rc_dev*,int) ;
 int FUNC_5 (struct rc_dev*,struct lirc_scancode*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct rc_dev *VAR_11, enum rc_proto VAR_12,
     u32 VAR_13, u32 VAR_14, u8 VAR_15)
{
 bool VAR_16 = (!VAR_11->keypressed ||
     VAR_11->last_protocol != VAR_12 ||
     VAR_11->last_scancode != VAR_13 ||
     VAR_11->last_toggle != VAR_15);
 struct lirc_scancode VAR_17 = {
  .scancode = VAR_13, .rc_proto = VAR_12,
  .flags = VAR_15 ? VAR_4 : 0,
  .keycode = VAR_14
 };

 if (VAR_11->allowed_protocols != VAR_6)
  FUNC_5(VAR_11, &VAR_17);

 if (VAR_16 && VAR_11->keypressed)
  FUNC_4(VAR_11, 0);

 FUNC_1(VAR_11->input_dev, VAR_1, VAR_5, VAR_13);

 VAR_11->last_protocol = VAR_12;
 VAR_11->last_scancode = VAR_13;
 VAR_11->last_toggle = VAR_15;
 VAR_11->last_keycode = VAR_14;

 if (VAR_16 && VAR_14 != VAR_2) {

  VAR_11->keypressed = 1;

  FUNC_0(&VAR_11->dev, "%s: key down event, key 0x%04x, protocol 0x%04x, scancode 0x%08x\n",
   VAR_11->device_name, VAR_14, VAR_12, VAR_13);
  FUNC_2(VAR_11->input_dev, VAR_14, 1);

  FUNC_6(VAR_10, VAR_3);
 }







 if (!VAR_16 && VAR_14 != VAR_2 &&
     VAR_11->allowed_protocols == VAR_6 &&
     !FUNC_9(&VAR_11->timer_repeat) &&
     VAR_11->input_dev->rep[VAR_8] &&
     !VAR_11->input_dev->rep[VAR_7]) {
  FUNC_1(VAR_11->input_dev, VAR_0, VAR_14, 2);
  FUNC_7(&VAR_11->timer_repeat, VAR_9 +
     FUNC_8(VAR_11->input_dev->rep[VAR_8]));
 }

 FUNC_3(VAR_11->input_dev);
}
