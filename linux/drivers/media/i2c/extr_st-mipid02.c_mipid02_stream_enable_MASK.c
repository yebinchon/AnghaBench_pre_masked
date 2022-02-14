
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int clk_lane_reg1; int data_lane0_reg1; int data_lane1_reg1; int mode_reg1; int mode_reg2; int data_id_rreg; int data_selection_ctrl; int pix_width_ctrl; int pix_width_ctrl_emb; } ;
struct mipid02_dev {TYPE_1__ r; int s_subdev; struct i2c_client* i2c_client; } ;
struct i2c_client {int dev; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (struct mipid02_dev*) ;
 int FUNC_3 (struct mipid02_dev*) ;
 int FUNC_4 (struct mipid02_dev*) ;
 int FUNC_5 (struct mipid02_dev*) ;
 int FUNC_6 (struct mipid02_dev*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct mipid02_dev *VAR_16)
{
 struct i2c_client *VAR_17 = VAR_16->i2c_client;
 int VAR_18 = -VAR_2;

 if (!VAR_16->s_subdev)
  goto error;

 FUNC_1(&VAR_16->r, 0, sizeof(VAR_16->r));

 VAR_18 = FUNC_3(VAR_16);
 if (VAR_18)
  goto error;
 VAR_18 = FUNC_4(VAR_16);
 if (VAR_18)
  goto error;
 VAR_18 = FUNC_2(VAR_16);
 if (VAR_18)
  goto error;


 VAR_18 = FUNC_6(VAR_16, VAR_3,
  VAR_16->r.clk_lane_reg1);
 if (VAR_18)
  goto error;
 VAR_18 = FUNC_6(VAR_16, VAR_4, VAR_0);
 if (VAR_18)
  goto error;
 VAR_18 = FUNC_6(VAR_16, VAR_6,
  VAR_16->r.data_lane0_reg1);
 if (VAR_18)
  goto error;
 VAR_18 = FUNC_6(VAR_16, VAR_7,
  VAR_1);
 if (VAR_18)
  goto error;
 VAR_18 = FUNC_6(VAR_16, VAR_8,
  VAR_16->r.data_lane1_reg1);
 if (VAR_18)
  goto error;
 VAR_18 = FUNC_6(VAR_16, VAR_9,
  VAR_1);
 if (VAR_18)
  goto error;
 VAR_18 = FUNC_6(VAR_16, VAR_11,
  VAR_15 | VAR_16->r.mode_reg1);
 if (VAR_18)
  goto error;
 VAR_18 = FUNC_6(VAR_16, VAR_12,
  VAR_16->r.mode_reg2);
 if (VAR_18)
  goto error;
 VAR_18 = FUNC_6(VAR_16, VAR_5,
  VAR_16->r.data_id_rreg);
 if (VAR_18)
  goto error;
 VAR_18 = FUNC_6(VAR_16, VAR_10,
  VAR_16->r.data_selection_ctrl);
 if (VAR_18)
  goto error;
 VAR_18 = FUNC_6(VAR_16, VAR_13,
  VAR_16->r.pix_width_ctrl);
 if (VAR_18)
  goto error;
 VAR_18 = FUNC_6(VAR_16, VAR_14,
  VAR_16->r.pix_width_ctrl_emb);
 if (VAR_18)
  goto error;

 return 0;

error:
 FUNC_0(&VAR_17->dev, "failed to stream on %d", VAR_18);
 FUNC_5(VAR_16);

 return VAR_18;
}
