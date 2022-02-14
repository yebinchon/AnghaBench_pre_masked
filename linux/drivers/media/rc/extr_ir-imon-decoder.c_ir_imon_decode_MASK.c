
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rc_dev {int dev; TYPE_1__* raw; } ;
struct ir_raw_event {scalar_t__ duration; int pulse; scalar_t__ reset; } ;
struct imon_dec {int state; int bits; int last_chk; int count; } ;
struct TYPE_2__ {struct imon_dec imon; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;


 int VAR_4 ;


 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct ir_raw_event*,int) ;
 int FUNC_5 (int *,char*,int,int ,int ,int ) ;
 int FUNC_6 (scalar_t__,int,int) ;
 int FUNC_7 (struct rc_dev*) ;
 int FUNC_8 (struct ir_raw_event) ;

__attribute__((used)) static int FUNC_9(struct rc_dev *VAR_5, struct ir_raw_event VAR_6)
{
 struct imon_dec *VAR_7 = &VAR_5->raw->imon;

 if (!FUNC_8(VAR_6)) {
  if (VAR_6.reset)
   VAR_7->state = 128;
  return 0;
 }

 FUNC_5(&VAR_5->dev,
  "iMON decode started at state %d bitno %d (%uus %s)\n",
  VAR_7->state, VAR_7->count, FUNC_3(VAR_6.duration),
  FUNC_2(VAR_6.pulse));
 if (VAR_7->state == VAR_4) {
  if (!VAR_6.pulse && VAR_6.duration > FUNC_1(10))
   VAR_7->state = 128;
  return 0;
 }

 for (;;) {
  if (!FUNC_6(VAR_6.duration, VAR_3, VAR_3 / 2))
   return 0;

  FUNC_4(&VAR_6, VAR_3);

  switch (VAR_7->state) {
  case 128:
   if (VAR_6.pulse) {
    VAR_7->state = 131;
    VAR_7->bits = 0;
    VAR_7->count = VAR_1;
   }
   break;
  case 131:
   if (VAR_2 & FUNC_0(VAR_7->count))
    VAR_7->last_chk = VAR_6.pulse;
   else if (VAR_6.pulse)
    goto err_out;
   VAR_7->state = 130;
   break;
  case 130:
   VAR_7->bits <<= 1;
   if (!VAR_6.pulse)
    VAR_7->bits |= 1;

   if (VAR_2 & FUNC_0(VAR_7->count)) {
    if (VAR_7->last_chk != !(VAR_7->bits & 3))
     goto err_out;
   }

   if (!VAR_7->count--)
    VAR_7->state = 129;
   else
    VAR_7->state = 131;
   break;
  case 129:
   if (VAR_6.pulse)
    goto err_out;
   FUNC_7(VAR_5);
   VAR_7->state = 128;
   break;
  }
 }

err_out:
 FUNC_5(&VAR_5->dev,
  "iMON decode failed at state %d bitno %d (%uus %s)\n",
  VAR_7->state, VAR_7->count, FUNC_3(VAR_6.duration),
  FUNC_2(VAR_6.pulse));

 VAR_7->state = VAR_4;

 return -VAR_0;
}
