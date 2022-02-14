
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct s5k6aa {int mclk_frequency; int pclk_fmin; int pclk_fmax; int clk_fop; int sd; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int,char*,unsigned long) ;
 int FUNC_4 (struct i2c_client*,int ,scalar_t__*) ;
 int FUNC_5 (struct i2c_client*,int ,int) ;
 struct i2c_client* FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct s5k6aa *VAR_11)
{
 struct i2c_client *VAR_12 = FUNC_6(&VAR_11->sd);
 unsigned long VAR_13 = VAR_11->mclk_frequency / 1000;
 u16 VAR_14;
 int VAR_15;

 if (FUNC_3(VAR_13 < VAR_2 || VAR_13 > VAR_1,
   "Invalid clock frequency: %ld\n", VAR_13))
  return -VAR_0;

 VAR_11->pclk_fmin = VAR_4;
 VAR_11->pclk_fmax = VAR_3;
 VAR_11->clk_fop = VAR_10;


 VAR_15 = FUNC_5(VAR_12, VAR_6, VAR_13 >> 16);
 if (!VAR_15)
  VAR_15 = FUNC_5(VAR_12, VAR_7, VAR_13 & 0xFFFF);
 if (!VAR_15)
  VAR_15 = FUNC_5(VAR_12, VAR_9, 1);

 if (!VAR_15)
  VAR_15 = FUNC_5(VAR_12, FUNC_2(0), VAR_11->clk_fop);
 if (!VAR_15)
  VAR_15 = FUNC_5(VAR_12, FUNC_1(0),
       VAR_11->pclk_fmin);
 if (!VAR_15)
  VAR_15 = FUNC_5(VAR_12, FUNC_0(0),
       VAR_11->pclk_fmax);
 if (!VAR_15)
  VAR_15 = FUNC_5(VAR_12, VAR_8, 1);
 if (!VAR_15)
  VAR_15 = FUNC_4(VAR_12, VAR_5, &VAR_14);

 return VAR_15 ? VAR_15 : (VAR_14 ? -VAR_0 : 0);
}
