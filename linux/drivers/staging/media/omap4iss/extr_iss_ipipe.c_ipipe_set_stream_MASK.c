
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int entity; } ;
struct iss_ipipe_device {int state; int stopping; int wait; } ;
struct iss_device {int dummy; } ;


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
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct iss_ipipe_device*) ;
 int FUNC_2 (struct iss_ipipe_device*,int) ;
 int FUNC_3 (struct iss_ipipe_device*) ;
 int FUNC_4 (struct iss_device*,int ,int ,int) ;
 int FUNC_5 (struct iss_device*,int ) ;
 int FUNC_6 (struct iss_device*,int ) ;
 int FUNC_7 (int *,int *,int *) ;
 struct iss_device* FUNC_8 (struct iss_ipipe_device*) ;
 struct iss_ipipe_device* FUNC_9 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_10(struct v4l2_subdev *VAR_10, int VAR_11)
{
 struct iss_ipipe_device *VAR_12 = FUNC_9(VAR_10);
 struct iss_device *VAR_13 = FUNC_8(VAR_12);
 int VAR_14 = 0;

 if (VAR_12->state == 128) {
  if (VAR_11 == 128)
   return 0;

  FUNC_6(VAR_13, VAR_8);


  FUNC_4(VAR_13, VAR_9, VAR_1,
         VAR_2);


  FUNC_4(VAR_13, VAR_9, VAR_3,
         VAR_7 | VAR_6 |
         VAR_5 | VAR_4);
 }

 switch (VAR_11) {
 case 129:

  FUNC_1(VAR_12);
  FUNC_3(VAR_12);

  FUNC_0(&VAR_12->stopping, 0);
  FUNC_2(VAR_12, 1);
  break;

 case 128:
  if (VAR_12->state == 128)
   return 0;
  if (FUNC_7(&VAR_10->entity, &VAR_12->wait,
           &VAR_12->stopping))
   VAR_14 = -VAR_0;

  FUNC_2(VAR_12, 0);
  FUNC_5(VAR_13, VAR_8);
  break;
 }

 VAR_12->state = VAR_11;
 return VAR_14;
}
