
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef struct v4l2_frequency {int frequency; scalar_t__ tuner; int type; } const v4l2_frequency ;
struct file {int dummy; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct cx231xx {int ctl_freq; scalar_t__ tuner_type; int norm; int dev; } ;


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
 int FUNC_0 (struct cx231xx*,int ,int ,struct v4l2_frequency const*) ;
 int FUNC_1 (struct cx231xx*) ;
 int FUNC_2 (struct cx231xx*,int,int,int) ;
 int FUNC_3 (struct cx231xx*) ;
 int FUNC_4 (struct cx231xx*) ;
 int FUNC_5 (int ,char*,int,...) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (struct cx231xx*) ;

int FUNC_7(struct file *VAR_14, void *VAR_15,
         const struct v4l2_frequency *VAR_16)
{
 struct cx231xx_fh *VAR_17 = VAR_15;
 struct cx231xx *VAR_18 = VAR_17->dev;
 struct v4l2_frequency VAR_19 = *VAR_16;
 int VAR_20;
 u32 VAR_21 = 5400000;

 FUNC_5(VAR_18->dev,
  "Enter vidioc_s_frequency()f->frequency=%d;f->type=%d\n",
  VAR_16->frequency, VAR_16->type);

 VAR_20 = FUNC_1(VAR_18);
 if (VAR_20 < 0)
  return VAR_20;

 if (0 != VAR_16->tuner)
  return -VAR_0;


 VAR_20 = FUNC_4(VAR_18);

 FUNC_0(VAR_18, VAR_13, VAR_12, VAR_16);
 FUNC_0(VAR_18, VAR_13, VAR_11, &VAR_19);
 VAR_18->ctl_freq = VAR_19.frequency;


 VAR_20 = FUNC_3(VAR_18);

 if (VAR_18->tuner_type == VAR_1) {
  if (VAR_18->norm & (VAR_4 | VAR_5))
   VAR_21 = 5400000;
  else if (VAR_18->norm & VAR_2)
   VAR_21 = 6000000;
  else if (VAR_18->norm & (VAR_6 | VAR_8))
   VAR_21 = 6900000;
  else if (VAR_18->norm & VAR_3)
   VAR_21 = 7100000;
  else if (VAR_18->norm & VAR_7)
   VAR_21 = 7250000;
  else if (VAR_18->norm & VAR_9)
   VAR_21 = 6900000;
  else if (VAR_18->norm & VAR_10)
   VAR_21 = 1250000;

  FUNC_5(VAR_18->dev,
   "if_frequency is set to %d\n", VAR_21);
  FUNC_2(VAR_18, VAR_21, 1, 1);

  FUNC_6(VAR_18);
 }

 FUNC_5(VAR_18->dev, "Set New FREQUENCY to %d\n", VAR_16->frequency);

 return VAR_20;
}
