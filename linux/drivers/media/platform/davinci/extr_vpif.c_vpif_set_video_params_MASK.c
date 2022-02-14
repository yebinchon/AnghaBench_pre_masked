
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct vpif_channel_config_params {int ycmux_mode; } ;
struct vpif_params {struct vpif_channel_config_params std_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vpif_params*,scalar_t__,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct vpif_channel_config_params const*,scalar_t__,scalar_t__) ;

int FUNC_3(struct vpif_params *VAR_2, u8 VAR_3)
{
 const struct vpif_channel_config_params *VAR_4 = &VAR_2->std_info;
 int VAR_5 = 1;

 FUNC_2(VAR_4, VAR_3, VAR_3);
 if (!VAR_4->ycmux_mode) {

  FUNC_2(VAR_4, VAR_3 + 1, VAR_3);
  VAR_5 = 2;
 }

 FUNC_0(VAR_2, VAR_3, VAR_5);

 FUNC_1(0x80, VAR_1);
 FUNC_1(0x01, VAR_0);

 return VAR_5;
}
