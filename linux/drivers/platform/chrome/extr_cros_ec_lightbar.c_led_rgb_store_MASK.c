
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int led; unsigned int red; unsigned int green; unsigned int blue; } ;
struct ec_params_lightbar {TYPE_1__ set_rgb; int cmd; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cros_ec_dev {int ec_dev; } ;
struct cros_ec_command {scalar_t__ result; scalar_t__ data; } ;
typedef size_t ssize_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 struct cros_ec_command* FUNC_0 (struct cros_ec_dev*) ;
 int FUNC_1 (int ,struct cros_ec_command*) ;
 scalar_t__ FUNC_2 (char const) ;
 int FUNC_3 (struct cros_ec_command*) ;
 int FUNC_4 () ;
 int FUNC_5 (char const*,char*,unsigned int*) ;
 struct cros_ec_dev* FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_4, struct device_attribute *VAR_5,
        const char *VAR_6, size_t VAR_7)
{
 struct ec_params_lightbar *VAR_8;
 struct cros_ec_command *VAR_9;
 struct cros_ec_dev *VAR_10 = FUNC_6(VAR_4);
 unsigned int VAR_11[4];
 int VAR_12, VAR_13 = 0, VAR_14 = 0, VAR_15 = 0;

 VAR_9 = FUNC_0(VAR_10);
 if (!VAR_9)
  return -VAR_2;

 do {

  while (*VAR_6 && FUNC_2(*VAR_6))
   VAR_6++;

  if (!*VAR_6)
   break;

  VAR_12 = FUNC_5(VAR_6, "%i", &VAR_11[VAR_13++]);
  if (VAR_12 == 0)
   goto exit;

  if (VAR_13 == 4) {
   VAR_8 = (struct ec_params_lightbar *)VAR_9->data;
   VAR_8->cmd = VAR_3;
   VAR_8->set_rgb.led = VAR_11[0];
   VAR_8->set_rgb.red = VAR_11[1];
   VAR_8->set_rgb.green = VAR_11[2];
   VAR_8->set_rgb.blue = VAR_11[3];




   if ((VAR_14++ % 4) == 0) {
    VAR_12 = FUNC_4();
    if (VAR_12)
     goto exit;
   }

   VAR_12 = FUNC_1(VAR_10->ec_dev, VAR_9);
   if (VAR_12 < 0)
    goto exit;

   if (VAR_9->result != VAR_0)
    goto exit;

   VAR_13 = 0;
   VAR_15 = 1;
  }


  while (*VAR_6 && !FUNC_2(*VAR_6))
   VAR_6++;

 } while (*VAR_6);

exit:
 FUNC_3(VAR_9);
 return (VAR_15 && VAR_13 == 0) ? VAR_7 : -VAR_1;
}
