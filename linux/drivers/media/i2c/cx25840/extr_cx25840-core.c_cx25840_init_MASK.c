
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct cx25840_state {int generic_mode; int vid_config; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cx25840_state*,int ) ;
 scalar_t__ FUNC_2 (struct cx25840_state*) ;
 struct cx25840_state* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_12, u32 VAR_13)
{
 struct cx25840_state *VAR_14 = FUNC_3(VAR_12);

 VAR_14->generic_mode = 1;

 if (FUNC_2(VAR_14)) {

  VAR_14->vid_config = VAR_4 |
        VAR_7 |
        VAR_10 |
        VAR_1 |
        VAR_8 |
        VAR_0 |
        VAR_9 |
        VAR_5 |
        VAR_2 |
        VAR_3 |
        VAR_6 |
        VAR_11;


  FUNC_1(VAR_14, VAR_13);
 } else {

  FUNC_0(1);
 }

 return 0;
}
