
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ir_raw_event {int duration; unsigned int pulse; } ;
struct igorplugusb {unsigned int* buf_in; TYPE_1__* rc; int dev; } ;
struct TYPE_3__ {int timeout; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int*,unsigned int) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 int FUNC_3 (struct igorplugusb*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,struct ir_raw_event*) ;

__attribute__((used)) static void FUNC_6(struct igorplugusb *VAR_2, unsigned VAR_3)
{
 struct ir_raw_event VAR_4 = {};
 unsigned VAR_5, VAR_6, VAR_7;

 FUNC_0(VAR_2->dev, "irdata: %*ph (len=%u)", VAR_3, VAR_2->buf_in, VAR_3);







 VAR_7 = VAR_2->buf_in[2];
 VAR_5 = VAR_6 = VAR_7 + VAR_0;

 if (VAR_6 >= VAR_3) {
  FUNC_1(VAR_2->dev, "receive overflow invalid: %u", VAR_7);
 } else {
  if (VAR_7 > 0)
   FUNC_2(VAR_2->dev, "receive overflow, at least %u lost",
        VAR_7);

  do {
   VAR_4.duration = VAR_2->buf_in[VAR_5] * 85333;
   VAR_4.pulse = VAR_5 & 1;

   FUNC_5(VAR_2->rc, &VAR_4);

   if (++VAR_5 == VAR_3)
    VAR_5 = VAR_0;
  } while (VAR_5 != VAR_6);


  VAR_4.duration = VAR_2->rc->timeout;
  VAR_4.pulse = 0;
  FUNC_5(VAR_2->rc, &VAR_4);

  FUNC_4(VAR_2->rc);
 }

 FUNC_3(VAR_2, VAR_1);
}
