
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ir_raw_event {int pulse; int duration; } ;
struct iguanair {int* buf_in; int version; int bufsize; int cycle_overhead; int tx_overflow; int rc; int dev; int completion; } ;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,struct ir_raw_event*) ;

__attribute__((used)) static void FUNC_6(struct iguanair *VAR_1, unsigned VAR_2)
{
 if (VAR_2 >= 4 && VAR_1->buf_in[0] == 0 && VAR_1->buf_in[1] == 0) {
  switch (VAR_1->buf_in[3]) {
  case 133:
   if (VAR_2 == 6) {
    VAR_1->version = (VAR_1->buf_in[5] << 8) |
       VAR_1->buf_in[4];
    FUNC_1(&VAR_1->completion);
   }
   break;
  case 135:
   if (VAR_2 >= 5) {
    VAR_1->bufsize = VAR_1->buf_in[4];
    FUNC_1(&VAR_1->completion);
   }
   break;
  case 134:
   if (VAR_2 > 5) {
    VAR_1->cycle_overhead = VAR_1->buf_in[5];
    FUNC_1(&VAR_1->completion);
   }
   break;
  case 128:
   VAR_1->tx_overflow = 1;

  case 132:
  case 131:
  case 129:
   FUNC_1(&VAR_1->completion);
   break;
  case 130:
   FUNC_2(VAR_1->dev, "receive overflow\n");
   FUNC_4(VAR_1->rc);
   break;
  default:
   FUNC_2(VAR_1->dev, "control code %02x received\n",
       VAR_1->buf_in[3]);
   break;
  }
 } else if (VAR_2 >= 7) {
  struct ir_raw_event VAR_3 = {};
  unsigned VAR_4;
  bool VAR_5 = 0;

  for (VAR_4 = 0; VAR_4 < 7; VAR_4++) {
   if (VAR_1->buf_in[VAR_4] == 0x80) {
    VAR_3.pulse = 0;
    VAR_3.duration = FUNC_0(21845);
   } else {
    VAR_3.pulse = (VAR_1->buf_in[VAR_4] & 0x80) == 0;
    VAR_3.duration = ((VAR_1->buf_in[VAR_4] & 0x7f) + 1) *
         VAR_0;
   }

   if (FUNC_5(VAR_1->rc, &VAR_3))
    VAR_5 = 1;
  }

  if (VAR_5)
   FUNC_3(VAR_1->rc);
 }
}
