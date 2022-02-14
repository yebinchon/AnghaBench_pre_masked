
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_frequency {int frequency; int type; scalar_t__ tuner; } ;
struct TYPE_2__ {scalar_t__ has_tda9874; } ;
struct tm6000_core {int width; int height; int freq; int lock; int i2c_adap; int v4l2_dev; TYPE_1__ caps; struct v4l2_frequency* norm; int model; } ;


 int VAR_0 ;
 struct v4l2_frequency* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tm6000_core*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tm6000_core*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct tm6000_core*) ;
 int FUNC_7 (struct tm6000_core*) ;
 int FUNC_8 (struct tm6000_core*) ;
 int FUNC_9 (struct tm6000_core*) ;
 int FUNC_10 (struct tm6000_core*) ;
 int FUNC_11 (struct tm6000_core*) ;
 int VAR_5 ;
 int FUNC_12 (struct tm6000_core*) ;
 int FUNC_13 (int *,int ,int ,int ,struct v4l2_frequency*) ;
 int FUNC_14 (int *,int *,char*,int ,int *) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_15(struct tm6000_core *VAR_7)
{
 struct v4l2_frequency VAR_8;
 int VAR_9 = 0;

 FUNC_2(&VAR_7->lock);
 FUNC_3(&VAR_7->lock);

 if (!FUNC_1(VAR_7->model)) {
  VAR_9 = FUNC_0(VAR_7);
  if (VAR_9 < 0)
   goto err;


  VAR_9 = FUNC_8(VAR_7);
  if (VAR_9 < 0)
   goto err;
 } else {

  VAR_9 = FUNC_8(VAR_7);
  if (VAR_9 < 0)
   goto err;

  FUNC_12(VAR_7);

  VAR_9 = FUNC_0(VAR_7);
  if (VAR_9 < 0)
   goto err;
 }


 VAR_7->width = 720;
 VAR_7->height = 480;
 VAR_7->norm = VAR_1;


 FUNC_7(VAR_7);


 FUNC_13(&VAR_7->v4l2_dev, 0, VAR_6, VAR_4, VAR_7->norm);


 VAR_8.tuner = 0;
 VAR_8.type = VAR_2;
 VAR_8.frequency = 3092;
 VAR_7->freq = VAR_8.frequency;
 FUNC_13(&VAR_7->v4l2_dev, 0, VAR_5, VAR_3, &VAR_8);

 if (VAR_7->caps.has_tda9874)
  FUNC_14(&VAR_7->v4l2_dev, &VAR_7->i2c_adap,
   "tvaudio", VAR_0, ((void*)0));


 VAR_9 = FUNC_11(VAR_7);
 if (VAR_9 < 0)
  goto err;

 FUNC_6(VAR_7);
 FUNC_9(VAR_7);

 FUNC_10(VAR_7);

 FUNC_5(VAR_7);

 FUNC_4(&VAR_7->lock);
 return 0;

err:
 FUNC_4(&VAR_7->lock);
 return VAR_9;
}
