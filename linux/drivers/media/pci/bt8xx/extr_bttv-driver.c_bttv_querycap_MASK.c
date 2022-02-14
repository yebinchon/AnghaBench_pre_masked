
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_capability {int capabilities; int bus_info; int card; int driver; } ;
struct file {int dummy; } ;
struct bttv_fh {struct bttv* btv; } ;
struct TYPE_4__ {int pci; } ;
struct TYPE_3__ {char* name; } ;
struct bttv {scalar_t__ tuner_type; scalar_t__ has_saa6588; scalar_t__ has_tea575x; int radio_dev; int vbi_dev; TYPE_2__ c; TYPE_1__ video_dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int,char*,char*) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_14, void *VAR_15,
    struct v4l2_capability *VAR_16)
{
 struct bttv_fh *VAR_17 = VAR_15;
 struct bttv *VAR_18 = VAR_17->btv;

 if (0 == VAR_13)
  return -VAR_0;

 FUNC_2(VAR_16->driver, "bttv", sizeof(VAR_16->driver));
 FUNC_2(VAR_16->card, VAR_18->video_dev.name, sizeof(VAR_16->card));
 FUNC_1(VAR_16->bus_info, sizeof(VAR_16->bus_info),
   "PCI:%s", FUNC_0(VAR_18->c.pci));
 VAR_16->capabilities = VAR_10 | VAR_6 |
       VAR_7 | VAR_2;
 if (VAR_12 <= 0)
  VAR_16->capabilities |= VAR_11;
 if (FUNC_3(&VAR_18->vbi_dev))
  VAR_16->capabilities |= VAR_9;
 if (FUNC_3(&VAR_18->radio_dev)) {
  VAR_16->capabilities |= VAR_4;
  if (VAR_18->has_tea575x)
   VAR_16->capabilities |= VAR_3;
 }





 if (VAR_18->has_saa6588)
  VAR_16->capabilities |= VAR_5;
 if (VAR_18->tuner_type != VAR_1)
  VAR_16->capabilities |= VAR_8;
 return 0;
}
