
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ v4l2_std_id ;
struct TYPE_3__ {int width; int height; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct em28xx_v4l2 {scalar_t__ norm; scalar_t__ streaming_users; int width; int height; int v4l2_dev; int vscale; int hscale; } ;
struct em28xx {struct em28xx_v4l2* v4l2; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct em28xx*) ;
 int VAR_2 ;
 int FUNC_1 (struct em28xx*,int,int,int *,int *) ;
 int FUNC_2 (int *,int ,int ,int ,scalar_t__) ;
 int VAR_3 ;
 struct em28xx* FUNC_3 (struct file*) ;
 int FUNC_4 (struct file*,void*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_4, void *VAR_5, v4l2_std_id VAR_6)
{
 struct em28xx *VAR_7 = FUNC_3(VAR_4);
 struct em28xx_v4l2 *VAR_8 = VAR_7->v4l2;
 struct v4l2_format VAR_9;

 if (VAR_6 == VAR_8->norm)
  return 0;

 if (VAR_8->streaming_users > 0)
  return -VAR_0;

 VAR_8->norm = VAR_6;


 VAR_9.fmt.pix.width = 720;
 VAR_9.fmt.pix.height = (VAR_6 & VAR_1) ? 480 : 576;
 FUNC_4(VAR_4, VAR_5, &VAR_9);


 VAR_8->width = VAR_9.fmt.pix.width;
 VAR_8->height = VAR_9.fmt.pix.height;
 FUNC_1(VAR_7, VAR_8->width, VAR_8->height,
        &VAR_8->hscale, &VAR_8->vscale);

 FUNC_0(VAR_7);
 FUNC_2(&VAR_8->v4l2_dev, 0, VAR_3, VAR_2, VAR_8->norm);

 return 0;
}
