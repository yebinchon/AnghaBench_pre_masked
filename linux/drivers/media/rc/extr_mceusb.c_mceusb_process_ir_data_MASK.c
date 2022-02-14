
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ microsoft_gen1; } ;
struct mceusb_dev {int parser_state; int rem; int cmd; int* buf_in; int pulse_tunit; TYPE_2__* rc; int dev; int pulse_count; TYPE_1__ flags; } ;
struct ir_raw_event {int pulse; int duration; int timeout; } ;
struct TYPE_5__ {int timeout; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,struct ir_raw_event*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct mceusb_dev*,int*,int,int,int,int) ;
 int FUNC_6 (struct mceusb_dev*,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct mceusb_dev *VAR_7, int VAR_8)
{
 struct ir_raw_event VAR_9 = {};
 bool VAR_10 = 0;
 int VAR_11 = 0;


 if (VAR_7->flags.microsoft_gen1)
  VAR_11 = 2;


 if (VAR_8 <= VAR_11)
  return;

 for (; VAR_11 < VAR_8; VAR_11++) {
  switch (VAR_7->parser_state) {
  case 128:
   VAR_7->rem = FUNC_4(VAR_7->cmd, VAR_7->buf_in[VAR_11]);
   FUNC_5(VAR_7, VAR_7->buf_in, VAR_8, VAR_11 - 1,
          VAR_7->rem + 2, 0);
   FUNC_6(VAR_7, VAR_11);
   VAR_7->parser_state = 131;
   break;
  case 129:
   VAR_7->rem--;
   VAR_9.pulse = ((VAR_7->buf_in[VAR_11] & VAR_4) != 0);
   VAR_9.duration = (VAR_7->buf_in[VAR_11] & VAR_5);
   if (FUNC_7(!VAR_9.duration)) {
    FUNC_1(VAR_7->dev, "nonsensical irdata %02x with duration 0",
     VAR_7->buf_in[VAR_11]);
    break;
   }
   if (VAR_9.pulse) {
    VAR_7->pulse_tunit += VAR_9.duration;
    VAR_7->pulse_count++;
   }
   VAR_9.duration *= FUNC_0(VAR_6);

   FUNC_1(VAR_7->dev, "Storing %s %u ns (%02x)",
    VAR_9.pulse ? "pulse" : "space",
    VAR_9.duration, VAR_7->buf_in[VAR_11]);

   if (FUNC_3(VAR_7->rc, &VAR_9))
    VAR_10 = 1;
   break;
  case 131:
   VAR_7->rem--;
   break;
  case 130:


   VAR_7->cmd = VAR_7->buf_in[VAR_11];
   if ((VAR_7->cmd == VAR_0) ||
       ((VAR_7->cmd & VAR_3) !=
        VAR_1)) {
    VAR_7->parser_state = 128;
    continue;
   }
   VAR_7->rem = (VAR_7->cmd & VAR_2);
   FUNC_5(VAR_7, VAR_7->buf_in, VAR_8,
          VAR_11, VAR_7->rem + 1, 0);
   if (VAR_7->rem) {
    VAR_7->parser_state = 129;
   } else {
    struct ir_raw_event VAR_12 = {
     .timeout = 1,
     .duration = VAR_7->rc->timeout
    };

    if (FUNC_3(VAR_7->rc,
           &VAR_12))
     VAR_10 = 1;
    VAR_7->pulse_tunit = 0;
    VAR_7->pulse_count = 0;
   }
   break;
  }

  if (VAR_7->parser_state != 130 && !VAR_7->rem)
   VAR_7->parser_state = 130;
 }
 if (VAR_10) {
  FUNC_1(VAR_7->dev, "processed IR data");
  FUNC_2(VAR_7->rc);
 }
}
