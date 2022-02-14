
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct media_pad {int index; int * entity; } ;
struct media_entity {int dummy; } ;
struct iss_ipipe_device {int output; int input; } ;
struct TYPE_3__ {int entity; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct iss_device {TYPE_2__ ipipeif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int FUNC_0 (int *) ;
 struct v4l2_subdev* FUNC_1 (struct media_entity*) ;
 struct iss_device* FUNC_2 (struct iss_ipipe_device*) ;
 struct iss_ipipe_device* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct media_entity *VAR_6,
       const struct media_pad *VAR_7,
       const struct media_pad *VAR_8, u32 VAR_9)
{
 struct v4l2_subdev *VAR_10 = FUNC_1(VAR_6);
 struct iss_ipipe_device *VAR_11 = FUNC_3(VAR_10);
 struct iss_device *VAR_12 = FUNC_2(VAR_11);

 if (!FUNC_0(VAR_8->entity))
  return -VAR_1;

 switch (VAR_7->index) {
 case 129:

  if (!(VAR_9 & VAR_5)) {
   VAR_11->input = VAR_3;
   break;
  }

  if (VAR_11->input != VAR_3)
   return -VAR_0;

  if (VAR_8->entity == &VAR_12->ipipeif.subdev.entity)
   VAR_11->input = VAR_2;

  break;

 case 128:

  if (VAR_9 & VAR_5) {
   if (VAR_11->output & ~VAR_4)
    return -VAR_0;
   VAR_11->output |= VAR_4;
  } else {
   VAR_11->output &= ~VAR_4;
  }
  break;

 default:
  return -VAR_1;
 }

 return 0;
}
