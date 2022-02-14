
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; int capability; int type; int rangehigh; int rangelow; int name; } ;
struct saa7164_port {struct saa7164_dev* dev; } ;
struct saa7164_encoder_fh {struct saa7164_port* port; } ;
struct saa7164_dev {int dummy; } ;
struct file {struct saa7164_encoder_fh* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int) ;

int FUNC_2(struct file *VAR_6, void *VAR_7, struct v4l2_tuner *VAR_8)
{
 struct saa7164_encoder_fh *VAR_9 = VAR_6->private_data;
 struct saa7164_port *VAR_10 = VAR_9->port;
 struct saa7164_dev *VAR_11 = VAR_10->dev;

 if (0 != VAR_8->index)
  return -VAR_1;

 FUNC_1(VAR_8->name, "tuner", sizeof(VAR_8->name));
 VAR_8->capability = VAR_4 | VAR_5;
 VAR_8->rangelow = VAR_3;
 VAR_8->rangehigh = VAR_2;

 FUNC_0(VAR_0, "VIDIOC_G_TUNER: tuner type %d\n", VAR_8->type);

 return 0;
}
