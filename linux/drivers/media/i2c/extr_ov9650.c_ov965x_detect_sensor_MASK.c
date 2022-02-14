
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct ov965x {scalar_t__ id; int lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ov965x*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ov965x*,int ,int *) ;
 struct ov965x* FUNC_6 (struct v4l2_subdev*) ;
 int FUNC_7 (struct v4l2_subdev*,char*,scalar_t__,int) ;
 int FUNC_8 (struct v4l2_subdev*,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct v4l2_subdev *VAR_5)
{
 struct ov965x *VAR_6 = FUNC_6(VAR_5);
 u8 VAR_7, VAR_8;
 int VAR_9;

 FUNC_3(&VAR_6->lock);
 VAR_9 = FUNC_1(VAR_6, 1);
 if (VAR_9)
  goto out;

 FUNC_2(25);


 VAR_9 = FUNC_5(VAR_6, VAR_3, &VAR_7);
 if (!VAR_9)
  VAR_9 = FUNC_5(VAR_6, VAR_4, &VAR_8);

 FUNC_1(VAR_6, 0);

 if (!VAR_9) {
  VAR_6->id = FUNC_0(VAR_7, VAR_8);
  if (VAR_6->id == VAR_1 || VAR_6->id == VAR_2) {
   FUNC_8(VAR_5, "Found OV%04X sensor\n", VAR_6->id);
  } else {
   FUNC_7(VAR_5, "Sensor detection failed (%04X, %d)\n",
     VAR_6->id, VAR_9);
   VAR_9 = -VAR_0;
  }
 }
out:
 FUNC_4(&VAR_6->lock);

 return VAR_9;
}
