
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;
struct msp_state {int detected_std; int std; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,int,int ,char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct msp_state* FUNC_2 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_1, v4l2_std_id *VAR_2)
{
 struct msp_state *VAR_3 = FUNC_2(VAR_1);
 struct i2c_client *VAR_4 = FUNC_3(VAR_1);

 *VAR_2 &= VAR_3->detected_std;

 FUNC_0(&VAR_4->dev, 2, VAR_0,
  "detected standard: %s(0x%08Lx)\n",
  FUNC_1(VAR_3->std), VAR_3->detected_std);

 return 0;
}
