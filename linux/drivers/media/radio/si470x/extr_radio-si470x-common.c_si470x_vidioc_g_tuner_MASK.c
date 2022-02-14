
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; int capability; int rangelow; int rangehigh; int signal; int afc; int audmode; int rxsubchans; int type; int name; } ;
struct si470x_device {int (* get_register ) (struct si470x_device*,size_t) ;int* registers; int status_rssi_auto_update; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct si470x_device*,size_t) ;
 struct si470x_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_20, void *VAR_21,
  struct v4l2_tuner *VAR_22)
{
 struct si470x_device *VAR_23 = FUNC_2(VAR_20);
 int VAR_24 = 0;

 if (VAR_22->index != 0)
  return -VAR_0;

 if (!VAR_23->status_rssi_auto_update) {
  VAR_24 = VAR_23->get_register(VAR_23, VAR_4);
  if (VAR_24 < 0)
   return VAR_24;
 }


 FUNC_0(VAR_22->name, "FM", sizeof(VAR_22->name));
 VAR_22->type = VAR_16;
 VAR_22->capability = VAR_10 | VAR_13 |
       VAR_11 | VAR_12 |
       VAR_8 |
       VAR_9;
 VAR_22->rangelow = 76 * VAR_1;
 VAR_22->rangehigh = 108 * VAR_1;


 if ((VAR_23->registers[VAR_4] & VAR_7) == 0)
  VAR_22->rxsubchans = VAR_17;
 else
  VAR_22->rxsubchans = VAR_19;



 VAR_22->rxsubchans |= VAR_18;


 if ((VAR_23->registers[VAR_2] & VAR_3) == 0)
  VAR_22->audmode = VAR_15;
 else
  VAR_22->audmode = VAR_14;



 VAR_22->signal = (VAR_23->registers[VAR_4] & VAR_6);

 VAR_22->signal = (VAR_22->signal * 873) + (8 * VAR_22->signal / 10);
 if (VAR_22->signal > 0xffff)
  VAR_22->signal = 0xffff;



 VAR_22->afc = (VAR_23->registers[VAR_4] & VAR_5) ? 1 : 0;

 return VAR_24;
}
