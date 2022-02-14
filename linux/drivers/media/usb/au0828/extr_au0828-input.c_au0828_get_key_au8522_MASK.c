
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ir_raw_event {int pulse; int duration; } ;
struct au0828_rc {int rc; TYPE_1__* dev; } ;
typedef int buf ;
struct TYPE_2__ {int dev_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct au0828_rc*,int,int) ;
 int FUNC_1 (struct au0828_rc*,int,int,unsigned char*,int) ;
 int FUNC_2 (struct au0828_rc*,int,int) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct ir_raw_event*) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct au0828_rc *VAR_5)
{
 unsigned char VAR_6[40];
 struct ir_raw_event VAR_7 = {};
 int VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13;
 bool VAR_14 = 1;


 if (FUNC_6(VAR_1, &VAR_5->dev->dev_state))
  return 0;


 VAR_10 = FUNC_1(VAR_5, 0xe1, -1, VAR_6, 1);
 if (VAR_10 < 0 || !(VAR_6[0] & (1 << 4))) {

  FUNC_2(VAR_5, 0xe0, 1 << 4);
  return 0;
 }


 VAR_10 = FUNC_1(VAR_5, 0xe3, 0x11, VAR_6, sizeof(VAR_6));


 if (VAR_10 < 0)
  return VAR_10;


 FUNC_0(VAR_5, 0xe0, 1 << 4);


 FUNC_2(VAR_5, 0xe0, 1 << 4);

 FUNC_3(16, "RC data received: %*ph\n", 40, VAR_6);

 VAR_11 = (VAR_6[0] >> 7) & 0x01;
 VAR_13 = 0;
 for (VAR_8 = 0; VAR_8 < sizeof(VAR_6); VAR_8++) {
  for (VAR_9 = 7; VAR_9 >= 0; VAR_9--) {
   VAR_12 = (VAR_6[VAR_8] >> VAR_9) & 0x01;
   if (VAR_12 == VAR_11) {
    VAR_13++;
    continue;
   }
   if (VAR_14) {
    VAR_14 = 0;

    VAR_7.pulse = 1;
    if (VAR_13 > VAR_3 - 2 &&
        VAR_13 < VAR_3 + 2) {

     VAR_7.duration = VAR_2;
     FUNC_3(16, "Storing NEC start %s with duration %d",
      VAR_7.pulse ? "pulse" : "space",
      VAR_7.duration);
    } else {

     VAR_7.duration = VAR_4;
     FUNC_3(16, "Storing RC5 start %s with duration %d",
      VAR_7.pulse ? "pulse" : "space",
      VAR_7.duration);
    }
    FUNC_5(VAR_5->rc, &VAR_7);
   }

   VAR_7.pulse = VAR_11 ? 0 : 1;
   VAR_7.duration = VAR_0 * VAR_13;
   FUNC_3(16, "Storing %s with duration %d",
    VAR_7.pulse ? "pulse" : "space",
    VAR_7.duration);
   FUNC_5(VAR_5->rc, &VAR_7);

   VAR_13 = 1;
   VAR_11 = VAR_12;
  }
 }

 VAR_7.pulse = VAR_11 ? 0 : 1;
 VAR_7.duration = VAR_0 * VAR_13;
 FUNC_3(16, "Storing end %s with duration %d",
  VAR_7.pulse ? "pulse" : "space",
  VAR_7.duration);
 FUNC_5(VAR_5->rc, &VAR_7);

 FUNC_4(VAR_5->rc);

 return 1;
}
