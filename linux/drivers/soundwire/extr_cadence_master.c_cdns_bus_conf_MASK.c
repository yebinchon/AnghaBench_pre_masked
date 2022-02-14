
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdw_master_prop {int mclk_freq; } ;
struct sdw_cdns {int dev; } ;
struct sdw_bus_params {int curr_dr_freq; scalar_t__ next_bank; } ;
struct sdw_bus {struct sdw_master_prop prop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sdw_cdns* FUNC_0 (struct sdw_bus*) ;
 int FUNC_1 (struct sdw_cdns*,int,int ,int) ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(struct sdw_bus *VAR_5, struct sdw_bus_params *VAR_6)
{
 struct sdw_master_prop *VAR_7 = &VAR_5->prop;
 struct sdw_cdns *VAR_8 = FUNC_0(VAR_5);
 int VAR_9;
 int VAR_10;

 if (!VAR_6->curr_dr_freq) {
  FUNC_2(VAR_8->dev, "NULL curr_dr_freq\n");
  return -VAR_3;
 }

 VAR_10 = VAR_7->mclk_freq * VAR_4 /
  VAR_6->curr_dr_freq;
 VAR_10--;

 if (VAR_6->next_bank)
  VAR_9 = VAR_1;
 else
  VAR_9 = VAR_0;

 FUNC_1(VAR_8, VAR_9, VAR_2, VAR_10);

 return 0;
}
