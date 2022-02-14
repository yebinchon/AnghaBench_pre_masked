
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct v4l2_rect {int height; int width; } ;
struct s5k5baf {size_t pixfmt; int req_fiv; struct v4l2_rect crop_source; } ;
struct TYPE_2__ {int reg_p_fmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_1 (struct s5k5baf*) ;
 int FUNC_2 (struct s5k5baf*) ;
 int FUNC_3 (struct s5k5baf*,int ,int ,int ,int ,int,int,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct s5k5baf *VAR_8)
{
 u16 VAR_9 = VAR_7[VAR_8->pixfmt].reg_p_fmt;
 struct v4l2_rect *VAR_10 = &VAR_8->crop_source;

 FUNC_3(VAR_8, FUNC_0(0),
     VAR_10->width, VAR_10->height, VAR_9,
     VAR_3 >> 2, VAR_4 >> 2,
     VAR_5, VAR_0,
     VAR_1, VAR_2,
     VAR_8->req_fiv, VAR_6);
 FUNC_1(VAR_8);
 FUNC_2(VAR_8);
}
