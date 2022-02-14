
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct platform_device {int dummy; } ;
struct dsi_data {scalar_t__ debug_read; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dsi_data* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*,int,int,int,int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_4,
  int VAR_5, u8 *VAR_6, int VAR_7)
{
 struct dsi_data *VAR_8 = FUNC_3(VAR_4);
 u16 VAR_9;
 u8 VAR_10;
 int VAR_11;

 if (VAR_8->debug_read)
  FUNC_1("dsi_vc_generic_send_read_request(ch %d, reqlen %d)\n",
   VAR_5, VAR_7);

 if (VAR_7 == 0) {
  VAR_10 = VAR_1;
  VAR_9 = 0;
 } else if (VAR_7 == 1) {
  VAR_10 = VAR_2;
  VAR_9 = VAR_6[0];
 } else if (VAR_7 == 2) {
  VAR_10 = VAR_3;
  VAR_9 = VAR_6[0] | (VAR_6[1] << 8);
 } else {
  FUNC_0();
  return -VAR_0;
 }

 VAR_11 = FUNC_4(VAR_4, VAR_5, VAR_10, VAR_9, 0);
 if (VAR_11) {
  FUNC_2("dsi_vc_generic_send_read_request(ch %d, reqlen %d)"
   " failed\n", VAR_5, VAR_7);
  return VAR_11;
 }

 return 0;
}
