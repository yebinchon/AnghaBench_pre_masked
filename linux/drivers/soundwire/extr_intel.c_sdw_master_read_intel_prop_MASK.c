
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdw_master_prop {int mclk_freq; int hw_disabled; } ;
struct sdw_bus {int link_id; int dev; struct sdw_master_prop prop; } ;
struct fwnode_handle {int dummy; } ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 struct fwnode_handle* FUNC_1 (int ,char*) ;
 int FUNC_2 (struct fwnode_handle*,char*,int*) ;
 int FUNC_3 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_4(struct sdw_bus *VAR_2)
{
 struct sdw_master_prop *VAR_3 = &VAR_2->prop;
 struct fwnode_handle *VAR_4;
 char VAR_5[32];
 u32 VAR_6;


 FUNC_3(VAR_5, sizeof(VAR_5),
   "mipi-sdw-link-%d-subproperties", VAR_2->link_id);

 VAR_4 = FUNC_1(VAR_2->dev, VAR_5);
 if (!VAR_4) {
  FUNC_0(VAR_2->dev, "Master node %s not found\n", VAR_5);
  return -VAR_0;
 }

 FUNC_2(VAR_4,
     "intel-sdw-ip-clock",
     &VAR_3->mclk_freq);

 FUNC_2(VAR_4,
     "intel-quirk-mask",
     &VAR_6);

 if (VAR_6 & VAR_1)
  VAR_3->hw_disabled = 1;

 return 0;
}
