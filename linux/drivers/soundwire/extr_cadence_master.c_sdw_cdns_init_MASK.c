
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdw_master_prop {int mclk_freq; int max_clk_freq; int default_col; int default_row; } ;
struct sdw_bus {struct sdw_master_prop prop; } ;
struct sdw_cdns {int dev; struct sdw_bus bus; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sdw_cdns*,int ,int ) ;
 int FUNC_2 (struct sdw_cdns*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct sdw_cdns*,int ,int,int) ;
 int FUNC_5 (struct sdw_cdns*,int ,int) ;
 int FUNC_6 (int ,char*) ;

int FUNC_7(struct sdw_cdns *VAR_18)
{
 struct sdw_bus *VAR_19 = &VAR_18->bus;
 struct sdw_master_prop *VAR_20 = &VAR_19->prop;
 u32 VAR_21;
 int VAR_22;
 int VAR_23;


 VAR_23 = FUNC_1(VAR_18, VAR_12,
        VAR_13);
 if (VAR_23 < 0) {
  FUNC_6(VAR_18->dev, "Couldn't exit from clock stop\n");
  return VAR_23;
 }


 VAR_22 = (VAR_20->mclk_freq / VAR_20->max_clk_freq) - 1;

 FUNC_4(VAR_18, VAR_1,
       VAR_3, VAR_22);
 FUNC_4(VAR_18, VAR_2,
       VAR_3, VAR_22);





 VAR_21 = FUNC_3(VAR_20->default_row,
        VAR_20->default_col);
 FUNC_5(VAR_18, VAR_15, VAR_21);


 FUNC_5(VAR_18, VAR_16, VAR_0);
 FUNC_5(VAR_18, VAR_17, VAR_0);


 FUNC_4(VAR_18, VAR_12, VAR_14,
       VAR_14);


 VAR_21 = FUNC_2(VAR_18, VAR_4);


 VAR_21 |= VAR_7;


 VAR_21 |= 0xF << FUNC_0(VAR_8);


 VAR_21 &= ~VAR_5;


 VAR_21 &= ~VAR_11;


 VAR_21 &= ~VAR_6;


 VAR_21 &= ~VAR_9;
 VAR_21 |= VAR_10;

 FUNC_5(VAR_18, VAR_4, VAR_21);

 return 0;
}
