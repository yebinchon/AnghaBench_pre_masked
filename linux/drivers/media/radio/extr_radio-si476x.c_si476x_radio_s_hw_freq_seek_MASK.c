
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct v4l2_hw_freq_seek {scalar_t__ rangelow; scalar_t__ rangehigh; scalar_t__ tuner; scalar_t__ type; scalar_t__ spacing; int wrap_around; int seek_upward; } ;
struct si476x_radio {TYPE_2__* core; TYPE_1__* ops; } ;
struct file {int f_flags; } ;
typedef enum si476x_func { ____Placeholder_si476x_func } si476x_func ;
struct TYPE_9__ {int regmap; } ;
struct TYPE_8__ {int (* seek_start ) (TYPE_2__*,int ,int ) ;} ;


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
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ,int ,scalar_t__*) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct si476x_radio*,int) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*,scalar_t__) ;
 int FUNC_8 (TYPE_2__*,int ,int ) ;
 int FUNC_9 (TYPE_2__*,scalar_t__) ;
 struct si476x_radio* FUNC_10 (struct file*) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_11, void *VAR_12,
           const struct v4l2_hw_freq_seek *VAR_13)
{
 int VAR_14;
 enum si476x_func VAR_15;
 u32 VAR_16 = VAR_13->rangelow, VAR_17 = VAR_13->rangehigh;
 struct si476x_radio *VAR_18 = FUNC_10(VAR_11);

 if (VAR_11->f_flags & VAR_2)
  return -VAR_0;

 if (VAR_13->tuner != 0 ||
     VAR_13->type != VAR_10)
  return -VAR_1;

 FUNC_3(VAR_18->core);

 if (!VAR_16) {
  VAR_14 = FUNC_0(VAR_18->core->regmap,
      VAR_7,
      &VAR_16);
  if (VAR_14)
   goto unlock;
  VAR_16 = FUNC_7(VAR_18->core, VAR_16);
 }
 if (!VAR_17) {
  VAR_14 = FUNC_0(VAR_18->core->regmap,
      VAR_8,
      &VAR_17);
  if (VAR_14)
   goto unlock;
  VAR_17 = FUNC_7(VAR_18->core, VAR_17);
 }

 if (VAR_16 > VAR_17) {
  VAR_14 = -VAR_1;
  goto unlock;
 }

 if (FUNC_6(VAR_16, VAR_17,
           VAR_4)) {
  VAR_15 = VAR_6;

 } else if (FUNC_2(VAR_18->core) &&
     FUNC_6(VAR_16, VAR_17,
           VAR_3)) {
  VAR_15 = VAR_5;
 } else {
  VAR_14 = -VAR_1;
  goto unlock;
 }

 VAR_14 = FUNC_5(VAR_18, VAR_15);
 if (VAR_14 < 0)
  goto unlock;

 if (VAR_13->rangehigh) {
  VAR_14 = FUNC_1(VAR_18->core->regmap,
       VAR_8,
       FUNC_9(VAR_18->core,
        VAR_13->rangehigh));
  if (VAR_14)
   goto unlock;
 }
 if (VAR_13->rangelow) {
  VAR_14 = FUNC_1(VAR_18->core->regmap,
       VAR_7,
       FUNC_9(VAR_18->core,
        VAR_13->rangelow));
  if (VAR_14)
   goto unlock;
 }
 if (VAR_13->spacing) {
  VAR_14 = FUNC_1(VAR_18->core->regmap,
         VAR_9,
         FUNC_9(VAR_18->core,
          VAR_13->spacing));
  if (VAR_14)
   goto unlock;
 }

 VAR_14 = VAR_18->ops->seek_start(VAR_18->core,
         VAR_13->seek_upward,
         VAR_13->wrap_around);
unlock:
 FUNC_4(VAR_18->core);



 return VAR_14;
}
