
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct platform_device {int dummy; } ;
struct dsi_data {scalar_t__ debug_read; } ;


 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*,int,int ) ;
 int VAR_0 ;
 struct dsi_data* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1,
  int VAR_2, u8 VAR_3)
{
 struct dsi_data *VAR_4 = FUNC_2(VAR_1);
 int VAR_5;

 if (VAR_4->debug_read)
  FUNC_0("dsi_vc_dcs_send_read_request(ch%d, dcs_cmd %x)\n",
   VAR_2, VAR_3);

 VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_0, VAR_3, 0);
 if (VAR_5) {
  FUNC_1("dsi_vc_dcs_send_read_request(ch %d, cmd 0x%02x)"
   " failed\n", VAR_2, VAR_3);
  return VAR_5;
 }

 return 0;
}
