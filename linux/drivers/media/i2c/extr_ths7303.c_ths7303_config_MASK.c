
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int pixelclock; } ;
struct ths7303_state {scalar_t__ std_id; TYPE_1__ bt; int stream_on; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 int FUNC_1 (struct v4l2_subdev*,int ) ;
 int FUNC_2 (struct v4l2_subdev*,int ,int) ;
 struct ths7303_state* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_8)
{
 struct ths7303_state *VAR_9 = FUNC_3(VAR_8);
 int VAR_10;

 if (!VAR_9->stream_on) {
  FUNC_2(VAR_8, VAR_0,
         (FUNC_0(VAR_8, VAR_0) & 0xf8) |
         0x00);
  FUNC_2(VAR_8, VAR_1,
         (FUNC_0(VAR_8, VAR_1) & 0xf8) |
         0x00);
  FUNC_2(VAR_8, VAR_2,
         (FUNC_0(VAR_8, VAR_2) & 0xf8) |
         0x00);
  return 0;
 }

 if (VAR_9->bt.pixelclock > 120000000)
  VAR_10 = FUNC_1(VAR_8, VAR_3);
 else if (VAR_9->bt.pixelclock > 70000000)
  VAR_10 = FUNC_1(VAR_8, VAR_6);
 else if (VAR_9->bt.pixelclock > 20000000)
  VAR_10 = FUNC_1(VAR_8, VAR_5);
 else if (VAR_9->std_id)
  VAR_10 = FUNC_1(VAR_8, VAR_4);
 else

  VAR_10 = FUNC_1(VAR_8, VAR_7);

 return VAR_10;

}
