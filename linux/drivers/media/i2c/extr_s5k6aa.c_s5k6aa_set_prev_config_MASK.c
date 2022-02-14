
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct s5k6aa_preset {int index; scalar_t__ clk_id; } ;
struct s5k6aa {scalar_t__ pclk_fmax; scalar_t__ pclk_fmin; TYPE_1__* fiv; scalar_t__ apply_cfg; int sd; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {scalar_t__ reg_fr_time; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct i2c_client*,int,int) ;
 int FUNC_8 (struct i2c_client*) ;
 int FUNC_9 (struct s5k6aa*,struct s5k6aa_preset*) ;
 int FUNC_10 (struct i2c_client*,int ,scalar_t__) ;
 int FUNC_11 (int,int ,struct i2c_client*,char*,scalar_t__,int) ;
 struct i2c_client* FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct s5k6aa *VAR_5,
      struct s5k6aa_preset *VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_12(&VAR_5->sd);
 int VAR_8 = VAR_6->index;
 u16 VAR_9;
 int VAR_10;

 if (VAR_5->fiv->reg_fr_time >= VAR_3)
  VAR_9 = VAR_1;
 else
  VAR_9 = VAR_2;

 VAR_10 = FUNC_9(VAR_5, VAR_6);
 if (!VAR_10)
  VAR_10 = FUNC_10(VAR_7, FUNC_4(VAR_8),
       VAR_5->pclk_fmax);
 if (!VAR_10)
  VAR_10 = FUNC_10(VAR_7, FUNC_6(VAR_8),
       VAR_5->pclk_fmin);
 if (!VAR_10)
  VAR_10 = FUNC_10(VAR_7, FUNC_0(VAR_8),
       VAR_6->clk_id);
 if (!VAR_10)
  VAR_10 = FUNC_10(VAR_7, FUNC_2(VAR_8),
       VAR_0);
 if (!VAR_10)
  VAR_10 = FUNC_10(VAR_7, FUNC_1(VAR_8),
       VAR_9);
 if (!VAR_10)
  VAR_10 = FUNC_10(VAR_7, FUNC_3(VAR_8),
       VAR_5->fiv->reg_fr_time + 33);
 if (!VAR_10)
  VAR_10 = FUNC_10(VAR_7, FUNC_5(VAR_8),
       VAR_5->fiv->reg_fr_time - 33);
 if (!VAR_10)
  VAR_10 = FUNC_7(VAR_7, 250, VAR_8);
 if (!VAR_10)
  VAR_10 = FUNC_8(VAR_7);
 if (!VAR_10)
  VAR_5->apply_cfg = 0;

 FUNC_11(1, VAR_4, VAR_7, "Frame interval: %d +/- 3.3ms. (%d)\n",
   VAR_5->fiv->reg_fr_time, VAR_10);
 return VAR_10;
}
