
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct v4l2_tuner {scalar_t__ index; int rangelow; int rangehigh; int rxsubchans; int capability; int signal; scalar_t__ afc; int audmode; int type; int name; } ;
struct TYPE_3__ {scalar_t__ flag; } ;
struct TYPE_4__ {TYPE_1__ rds; } ;
struct fmdev {scalar_t__ curr_fmmode; TYPE_2__ rx; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
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
 int VAR_14 ;
 int FUNC_0 (struct fmdev*,int*,int*) ;
 int FUNC_1 (struct fmdev*,int*) ;
 int FUNC_2 (struct fmdev*,int*) ;
 int FUNC_3 (int ,char*,int) ;
 struct fmdev* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_15, void *VAR_16,
  struct v4l2_tuner *VAR_17)
{
 struct fmdev *VAR_18 = FUNC_4(VAR_15);
 u32 VAR_19;
 u32 VAR_20;
 u16 VAR_21;
 u16 VAR_22;
 int VAR_23;

 if (VAR_17->index != 0)
  return -VAR_0;

 if (VAR_18->curr_fmmode != VAR_2)
  return -VAR_1;

 VAR_23 = FUNC_0(VAR_18, &VAR_19, &VAR_20);
 if (VAR_23 != 0)
  return VAR_23;

 VAR_23 = FUNC_2(VAR_18, &VAR_21);
 if (VAR_23 != 0)
  return VAR_23;

 VAR_23 = FUNC_1(VAR_18, &VAR_22);
 if (VAR_23 != 0)
  return VAR_23;

 FUNC_3(VAR_17->name, "FM", sizeof(VAR_17->name));
 VAR_17->type = VAR_11;

 VAR_17->rangelow = VAR_19 * 16;
 VAR_17->rangehigh = VAR_20 * 16;
 VAR_17->rxsubchans = VAR_12 | VAR_14 |
 ((VAR_18->rx.rds.flag == VAR_3) ? VAR_13 : 0);
 VAR_17->capability = VAR_8 | VAR_7 |
       VAR_6 |
       VAR_4 |
       VAR_5;
 VAR_17->audmode = (VAR_21 ?
     VAR_9 : VAR_10);





 VAR_22 += 128;





 VAR_17->signal = VAR_22 * 257;
 VAR_17->afc = 0;

 return VAR_23;
}
