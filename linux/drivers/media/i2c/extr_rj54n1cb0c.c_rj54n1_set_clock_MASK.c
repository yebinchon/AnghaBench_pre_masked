
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ratio_tg; int ratio_t; int ratio_r; int ratio_op; int ratio_o; } ;
struct rj54n1 {TYPE_1__ clk_div; } ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int,int) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;
 struct rj54n1* FUNC_5 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_20)
{
 struct rj54n1 *VAR_21 = FUNC_5(VAR_20);
 int VAR_22;


 VAR_22 = FUNC_4(VAR_20, VAR_16, VAR_1 | VAR_19);

 if (!VAR_22)
  VAR_22 = FUNC_4(VAR_20, VAR_16, VAR_1);

 if (!VAR_22)
  VAR_22 = FUNC_4(VAR_20, VAR_8, VAR_2);
 if (!VAR_22)
  VAR_22 = FUNC_4(VAR_20, VAR_9, VAR_3);


 if (!VAR_22)
  VAR_22 = FUNC_4(VAR_20, VAR_15,
    VAR_21->clk_div.ratio_tg);
 if (!VAR_22)
  VAR_22 = FUNC_4(VAR_20, VAR_14,
    VAR_21->clk_div.ratio_t);
 if (!VAR_22)
  VAR_22 = FUNC_4(VAR_20, VAR_13,
    VAR_21->clk_div.ratio_r);


 if (!VAR_22)
  VAR_22 = FUNC_4(VAR_20, VAR_10, 3);


 if (!VAR_22)
  VAR_22 = FUNC_4(VAR_20, VAR_5, 0);


 if (!VAR_22)
  VAR_22 = FUNC_4(VAR_20, VAR_12,
    VAR_21->clk_div.ratio_op);
 if (!VAR_22)
  VAR_22 = FUNC_4(VAR_20, VAR_11,
    VAR_21->clk_div.ratio_o);


 if (!VAR_22)
  VAR_22 = FUNC_4(VAR_20, VAR_6, 1);


 if (!VAR_22)
  VAR_22 = FUNC_4(VAR_20, VAR_17, 2);


 if (!VAR_22)
  VAR_22 = FUNC_4(VAR_20, VAR_16,
    VAR_1 | VAR_18);

 if (!VAR_22)
  VAR_22 = FUNC_4(VAR_20, VAR_7, 1);


 FUNC_1(10);


 if (!VAR_22)
  VAR_22 = FUNC_4(VAR_20, VAR_4, 1);

 if (!VAR_22)
  VAR_22 = FUNC_2(VAR_20, VAR_4);
 if (VAR_22 != 1) {
  FUNC_0(&VAR_20->dev,
   "Resetting RJ54N1CB0C clock failed: %d!\n", VAR_22);
  return -VAR_0;
 }


 VAR_22 = FUNC_3(VAR_20, VAR_5, 1, 1);


 if (!VAR_22)
  VAR_22 = FUNC_4(VAR_20, VAR_6, 1);

 return VAR_22;
}
