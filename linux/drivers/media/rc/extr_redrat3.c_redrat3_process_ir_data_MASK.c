
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {unsigned int* sigdata; int * lens; int sig_size; } ;
struct redrat3_dev {TYPE_2__* rc; TYPE_1__ irdata; scalar_t__ wideband; struct device* dev; } ;
struct ir_raw_event {int carrier_report; int pulse; int timeout; int duration; scalar_t__ carrier; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int timeout; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,...) ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,struct ir_raw_event*) ;
 int FUNC_6 (TYPE_2__*,struct ir_raw_event*) ;
 unsigned int FUNC_7 (unsigned int) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_9(struct redrat3_dev *VAR_1)
{
 struct ir_raw_event VAR_2 = {};
 struct device *VAR_3;
 unsigned int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 u32 VAR_9;

 VAR_3 = VAR_1->dev;

 VAR_9 = FUNC_8(&VAR_1->irdata);
 FUNC_2(VAR_3, "Got mod_freq of %u\n", VAR_9);
 if (VAR_9 && VAR_1->wideband) {
  struct ir_raw_event VAR_10 = {
   .carrier_report = 1,
   .carrier = VAR_9
  };

  FUNC_5(VAR_1->rc, &VAR_10);
 }


 VAR_5 = FUNC_1(VAR_1->irdata.sig_size);
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  VAR_7 = VAR_1->irdata.sigdata[VAR_4];
  VAR_8 = FUNC_3(&VAR_1->irdata.lens[VAR_7]);
  VAR_6 = FUNC_7(VAR_8);


  if (VAR_4 % 2)
   VAR_2.pulse = 0;
  else
   VAR_2.pulse = 1;

  VAR_2.duration = FUNC_0(VAR_6);

  VAR_2.duration = (VAR_2.duration > VAR_0) ?
     VAR_0 : VAR_2.duration;

  FUNC_2(VAR_3, "storing %s with duration %d (i: %d)\n",
   VAR_2.pulse ? "pulse" : "space", VAR_2.duration, VAR_4);
  FUNC_6(VAR_1->rc, &VAR_2);
 }


 VAR_2.pulse = 0;
 VAR_2.timeout = 1;
 VAR_2.duration = VAR_1->rc->timeout;
 FUNC_2(VAR_3, "storing trailing timeout with duration %d\n",
       VAR_2.duration);
 FUNC_6(VAR_1->rc, &VAR_2);

 FUNC_2(VAR_3, "calling ir_raw_event_handle\n");
 FUNC_4(VAR_1->rc);
}
