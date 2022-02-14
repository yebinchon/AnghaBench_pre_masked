
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct em28xx {scalar_t__ em28xx_sensor; size_t model; scalar_t__ hash; scalar_t__ i2c_hash; TYPE_1__* intf; int tuner_type; int def_i2c_bus; scalar_t__ is_webcam; } ;
struct TYPE_8__ {scalar_t__ name; } ;
struct TYPE_7__ {scalar_t__ hash; size_t model; int tuner; } ;
struct TYPE_6__ {int dev; } ;


 int FUNC_0 (TYPE_2__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,char*,...) ;
 int VAR_5 ;
 TYPE_4__* VAR_6 ;
 int FUNC_2 (struct em28xx*,int ) ;
 TYPE_2__* VAR_7 ;
 TYPE_2__* VAR_8 ;

__attribute__((used)) static int FUNC_3(struct em28xx *VAR_9)
{
 int VAR_10;

 if (VAR_9->is_webcam) {
  if (VAR_9->em28xx_sensor == VAR_4) {
   VAR_9->model = VAR_1;
  } else if (VAR_9->em28xx_sensor == VAR_2 ||
      VAR_9->em28xx_sensor == VAR_3) {
   VAR_9->model = VAR_0;
  }


  return 0;
 }
 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_7); VAR_10++) {
  if (VAR_9->hash == VAR_7[VAR_10].hash) {
   VAR_9->model = VAR_7[VAR_10].model;
   VAR_9->tuner_type = VAR_7[VAR_10].tuner;

   FUNC_1(&VAR_9->intf->dev,
    "Your board has no unique USB ID.\n"
    "A hint were successfully done, based on eeprom hash.\n"
    "This method is not 100%% failproof.\n"
    "If the board were misdetected, please email this log to:\n"
    "\tV4L Mailing List  <linux-media@vger.kernel.org>\n"
    "Board detected as %s\n",
          VAR_6[VAR_9->model].name);

   return 0;
  }
 }
 if (!VAR_9->i2c_hash)
  FUNC_2(VAR_9, VAR_9->def_i2c_bus);

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_8); VAR_10++) {
  if (VAR_9->i2c_hash == VAR_8[VAR_10].hash) {
   VAR_9->model = VAR_8[VAR_10].model;
   VAR_9->tuner_type = VAR_8[VAR_10].tuner;
   FUNC_1(&VAR_9->intf->dev,
    "Your board has no unique USB ID.\n"
    "A hint were successfully done, based on i2c devicelist hash.\n"
    "This method is not 100%% failproof.\n"
    "If the board were misdetected, please email this log to:\n"
    "\tV4L Mailing List  <linux-media@vger.kernel.org>\n"
    "Board detected as %s\n",
    VAR_6[VAR_9->model].name);

   return 0;
  }
 }

 FUNC_1(&VAR_9->intf->dev,
  "Your board has no unique USB ID and thus need a hint to be detected.\n"
  "You may try to use card=<n> insmod option to workaround that.\n"
  "Please send an email with this log to:\n"
  "\tV4L Mailing List <linux-media@vger.kernel.org>\n"
  "Board eeprom hash is 0x%08lx\n"
  "Board i2c devicelist hash is 0x%08lx\n",
  VAR_9->hash, VAR_9->i2c_hash);

 FUNC_1(&VAR_9->intf->dev,
  "Here is a list of valid choices for the card=<n> insmod option:\n");
 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  FUNC_1(&VAR_9->intf->dev,
   "    card=%d -> %s\n", VAR_10, VAR_6[VAR_10].name);
 }
 return -1;
}
