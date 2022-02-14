
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_tuner {scalar_t__ index; int rxsubchans; int signal; int audmode; int capability; int rangehigh; int rangelow; int type; int name; } ;
struct radio_isa_ops {int (* g_rxsubchans ) (struct radio_isa_card*) ;int (* g_signal ) (struct radio_isa_card*) ;} ;
struct radio_isa_card {scalar_t__ stereo; TYPE_1__* drv; } ;
struct file {int dummy; } ;
struct TYPE_2__ {scalar_t__ has_stereo; struct radio_isa_ops* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct radio_isa_card*) ;
 int FUNC_2 (struct radio_isa_card*) ;
 struct radio_isa_card* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_10, void *VAR_11,
    struct v4l2_tuner *VAR_12)
{
 struct radio_isa_card *VAR_13 = FUNC_3(VAR_10);
 const struct radio_isa_ops *VAR_14 = VAR_13->drv->ops;

 if (VAR_12->index > 0)
  return -VAR_0;

 FUNC_0(VAR_12->name, "FM", sizeof(VAR_12->name));
 VAR_12->type = VAR_7;
 VAR_12->rangelow = VAR_2;
 VAR_12->rangehigh = VAR_1;
 VAR_12->capability = VAR_3;
 if (VAR_13->drv->has_stereo)
  VAR_12->capability |= VAR_4;

 if (VAR_14->g_rxsubchans)
  VAR_12->rxsubchans = VAR_14->g_rxsubchans(VAR_13);
 else
  VAR_12->rxsubchans = VAR_8 | VAR_9;
 VAR_12->audmode = VAR_13->stereo ? VAR_6 : VAR_5;
 if (VAR_14->g_signal)
  VAR_12->signal = VAR_14->g_signal(VAR_13);
 else
  VAR_12->signal = (VAR_12->rxsubchans & VAR_9) ?
        0xffff : 0;
 return 0;
}
