
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct v4l2_subdev {scalar_t__ grp_id; } ;
struct i2c_adapter {int dummy; } ;
struct cx18 {int v4l2_dev; TYPE_1__* card_i2c; struct i2c_adapter* i2c_adap; } ;
struct TYPE_2__ {int * tv; int * demod; int * radio; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cx18*,struct i2c_adapter*,scalar_t__,char const*,int ) ;
 int * VAR_2 ;
 int* VAR_3 ;
 char** VAR_4 ;
 struct v4l2_subdev* FUNC_1 (int *,struct i2c_adapter*,char const*,int ,int *) ;

int FUNC_2(struct cx18 *VAR_5, unsigned VAR_6)
{
 struct v4l2_subdev *VAR_7;
 int VAR_8 = VAR_3[VAR_6];
 struct i2c_adapter *VAR_9 = &VAR_5->i2c_adap[VAR_8];
 const char *VAR_10 = VAR_4[VAR_6];
 u32 VAR_11 = 1 << VAR_6;

 if (VAR_11 == VAR_0) {

  VAR_7 = FUNC_1(&VAR_5->v4l2_dev,
    VAR_9, VAR_10, 0, VAR_5->card_i2c->radio);
  if (VAR_7 != ((void*)0))
   VAR_7->grp_id = VAR_11;
  VAR_7 = FUNC_1(&VAR_5->v4l2_dev,
    VAR_9, VAR_10, 0, VAR_5->card_i2c->demod);
  if (VAR_7 != ((void*)0))
   VAR_7->grp_id = VAR_11;
  VAR_7 = FUNC_1(&VAR_5->v4l2_dev,
    VAR_9, VAR_10, 0, VAR_5->card_i2c->tv);
  if (VAR_7 != ((void*)0))
   VAR_7->grp_id = VAR_11;
  return VAR_7 != ((void*)0) ? 0 : -1;
 }

 if (VAR_11 == VAR_1)
  return FUNC_0(VAR_5, VAR_9, VAR_11, VAR_10, VAR_2[VAR_6]);


 if (!VAR_2[VAR_6])
  return -1;


 VAR_7 = FUNC_1(&VAR_5->v4l2_dev, VAR_9, VAR_10, VAR_2[VAR_6],
     ((void*)0));
 if (VAR_7 != ((void*)0))
  VAR_7->grp_id = VAR_11;
 return VAR_7 != ((void*)0) ? 0 : -1;
}
