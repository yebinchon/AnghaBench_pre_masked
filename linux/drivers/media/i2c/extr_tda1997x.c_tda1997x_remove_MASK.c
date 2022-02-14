
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int entity; } ;
struct tda1997x_platform_data {scalar_t__ audout_format; } ;
struct tda1997x_state {int lock; int page_lock; int delayed_work_enable_hpd; int supplies; int hdl; TYPE_1__* client; int audio_lock; struct tda1997x_platform_data pdata; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct v4l2_subdev* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct tda1997x_state*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct tda1997x_state*,int ) ;
 struct tda1997x_state* FUNC_8 (struct v4l2_subdev*) ;
 int FUNC_9 (struct v4l2_subdev*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_1)
{
 struct v4l2_subdev *VAR_2 = FUNC_2(VAR_1);
 struct tda1997x_state *VAR_3 = FUNC_8(VAR_2);
 struct tda1997x_platform_data *VAR_4 = &VAR_3->pdata;

 if (VAR_4->audout_format) {
  FUNC_5(&VAR_3->audio_lock);
 }

 FUNC_1(VAR_3->client->irq);
 FUNC_7(VAR_3, 0);

 FUNC_9(VAR_2);
 FUNC_4(&VAR_2->entity);
 FUNC_10(&VAR_3->hdl);
 FUNC_6(VAR_0, VAR_3->supplies);
 FUNC_0(&VAR_3->delayed_work_enable_hpd);
 FUNC_5(&VAR_3->page_lock);
 FUNC_5(&VAR_3->lock);

 FUNC_3(VAR_3);

 return 0;
}
