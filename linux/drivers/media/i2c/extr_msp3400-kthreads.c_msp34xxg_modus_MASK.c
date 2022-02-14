
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msp_state {int v4l2_std; scalar_t__ radio; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int ,char*) ;
 int FUNC_1 (struct i2c_client*) ;
 int VAR_4 ;
 struct msp_state* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_5)
{
 struct msp_state *VAR_6 = FUNC_2(FUNC_1(VAR_5));

 if (VAR_6->radio) {
  FUNC_0(&VAR_5->dev, 1, VAR_4, "selected radio modus\n");
  return 0x0001;
 }
 if (VAR_6->v4l2_std == VAR_1) {
  FUNC_0(&VAR_5->dev, 1, VAR_4, "selected M (EIA-J) modus\n");
  return 0x4001;
 }
 if (VAR_6->v4l2_std == VAR_2) {
  FUNC_0(&VAR_5->dev, 1, VAR_4, "selected M (A2) modus\n");
  return 0x0001;
 }
 if (VAR_6->v4l2_std == VAR_3) {
  FUNC_0(&VAR_5->dev, 1, VAR_4, "selected SECAM-L modus\n");
  return 0x6001;
 }
 if (VAR_6->v4l2_std & VAR_0) {
  FUNC_0(&VAR_5->dev, 1, VAR_4, "selected M (BTSC) modus\n");
  return 0x2001;
 }
 return 0x7001;
}
