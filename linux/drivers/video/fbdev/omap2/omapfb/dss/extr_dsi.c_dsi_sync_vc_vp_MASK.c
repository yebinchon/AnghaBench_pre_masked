
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct platform_device {int dummy; } ;
struct dsi_packet_sent_handler_data {int * completion; struct platform_device* dsidev; } ;
struct dsi_data {scalar_t__ te_enabled; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct platform_device*,int ,int,int) ;
 int VAR_2 ;
 struct dsi_data* FUNC_4 (struct platform_device*) ;
 int VAR_3 ;
 int FUNC_5 (struct platform_device*,int,int ,struct dsi_packet_sent_handler_data*,int ) ;
 int FUNC_6 (struct platform_device*,int,int ,struct dsi_packet_sent_handler_data*,int ) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_4, int VAR_5)
{
 struct dsi_data *VAR_6 = FUNC_4(VAR_4);
 FUNC_0(VAR_2);
 struct dsi_packet_sent_handler_data VAR_7 = {
  .dsidev = VAR_4,
  .completion = &VAR_2
 };
 int VAR_8 = 0;
 u8 VAR_9;

 VAR_9 = VAR_6->te_enabled ? 30 : 31;

 VAR_8 = FUNC_5(VAR_4, VAR_5, VAR_3,
  &VAR_7, VAR_0);
 if (VAR_8)
  goto err0;


 if (FUNC_3(VAR_4, FUNC_1(VAR_5), VAR_9, VAR_9)) {
  if (FUNC_8(&VAR_2,
    FUNC_7(10)) == 0) {
   FUNC_2("Failed to complete previous frame transfer\n");
   VAR_8 = -VAR_1;
   goto err1;
  }
 }

 FUNC_6(VAR_4, VAR_5, VAR_3,
  &VAR_7, VAR_0);

 return 0;
err1:
 FUNC_6(VAR_4, VAR_5, VAR_3,
  &VAR_7, VAR_0);
err0:
 return VAR_8;
}
