
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_tuner {scalar_t__ index; int capability; int signal; int audmode; int rxsubchans; int rangehigh; int rangelow; int type; int name; } ;
struct radio_tea5777 {size_t band; int read_reg; int audmode; scalar_t__ has_am; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int rangehigh; int rangelow; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
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
 int VAR_12 ;
 int VAR_13 ;
 TYPE_1__* VAR_14 ;
 int FUNC_0 (struct v4l2_tuner*,int ,int) ;
 int FUNC_1 (struct radio_tea5777*,int ) ;
 int FUNC_2 (int ,char*,int) ;
 struct radio_tea5777* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_15, void *VAR_16,
     struct v4l2_tuner *VAR_17)
{
 struct radio_tea5777 *VAR_18 = FUNC_3(VAR_15);
 int VAR_19;

 if (VAR_17->index > 0)
  return -VAR_2;

 VAR_19 = FUNC_1(VAR_18, 0);
 if (VAR_19)
  return VAR_19;

 FUNC_0(VAR_17, 0, sizeof(*VAR_17));
 if (VAR_18->has_am)
  FUNC_2(VAR_17->name, "AM/FM", sizeof(VAR_17->name));
 else
  FUNC_2(VAR_17->name, "FM", sizeof(VAR_17->name));
 VAR_17->type = VAR_11;
 VAR_17->capability = VAR_9 | VAR_10 |
   VAR_6 |
   VAR_7 |
   VAR_8;
 VAR_17->rangelow = VAR_18->has_am ? VAR_14[VAR_0].rangelow :
          VAR_14[VAR_1].rangelow;
 VAR_17->rangehigh = VAR_14[VAR_1].rangehigh;
 if (VAR_18->band == VAR_1 &&
   (VAR_18->read_reg & VAR_3))
  VAR_17->rxsubchans = VAR_13;
 else
  VAR_17->rxsubchans = VAR_12;
 VAR_17->audmode = VAR_18->audmode;

 VAR_17->signal = (VAR_18->read_reg & VAR_4) >>
      (VAR_5 - 12);


 VAR_18->read_reg = -1;

 return 0;
}
