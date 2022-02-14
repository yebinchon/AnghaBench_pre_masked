
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_rect {int dummy; } ;
struct s5k4ecgx {TYPE_1__* curr_frmsize; int sd; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {struct v4l2_rect input_window; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct i2c_client*,struct v4l2_rect const*) ;
 int FUNC_9 (struct s5k4ecgx*) ;
 int FUNC_10 (struct i2c_client*,struct v4l2_rect const*) ;
 int FUNC_11 (struct i2c_client*,int,int) ;
 struct i2c_client* FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct s5k4ecgx *VAR_7)
{
 struct i2c_client *VAR_8 = FUNC_12(&VAR_7->sd);
 const struct v4l2_rect *VAR_9 = &VAR_7->curr_frmsize->input_window;
 int VAR_10;

 VAR_10 = FUNC_8(VAR_8, VAR_9);
 if (!VAR_10)
  VAR_10 = FUNC_10(VAR_8, VAR_9);
 if (!VAR_10)
  VAR_10 = FUNC_11(VAR_8, VAR_3, 1);
 if (!VAR_10)
  VAR_10 = FUNC_11(VAR_8, 0x70000a1e, 0x28);
 if (!VAR_10)
  VAR_10 = FUNC_11(VAR_8, 0x70000ad4, 0x3c);
 if (!VAR_10)
  VAR_10 = FUNC_9(VAR_7);
 if (!VAR_10)
  VAR_10 = FUNC_11(VAR_8, FUNC_6(0), 0x52);
 if (!VAR_10)
  VAR_10 = FUNC_11(VAR_8, FUNC_2(0),
         VAR_0);
 if (!VAR_10)
  VAR_10 = FUNC_11(VAR_8, FUNC_1(0),
         VAR_1);
 if (!VAR_10)
  VAR_10 = FUNC_11(VAR_8, FUNC_4(0),
         FUNC_7(33300));
 if (!VAR_10)
  VAR_10 = FUNC_11(VAR_8, FUNC_3(0),
         FUNC_7(66600));
 if (!VAR_10)
  VAR_10 = FUNC_11(VAR_8, FUNC_5(0), 0);
 if (!VAR_10)
  VAR_10 = FUNC_11(VAR_8, FUNC_0(0), 0);
 if (!VAR_10)
  VAR_10 = FUNC_11(VAR_8, VAR_2, 0);
 if (!VAR_10)
  VAR_10 = FUNC_11(VAR_8, VAR_6, 1);
 if (!VAR_10)
  VAR_10 = FUNC_11(VAR_8, VAR_4, 1);
 if (!VAR_10)
  VAR_10 = FUNC_11(VAR_8, VAR_5, 1);

 return VAR_10;
}
