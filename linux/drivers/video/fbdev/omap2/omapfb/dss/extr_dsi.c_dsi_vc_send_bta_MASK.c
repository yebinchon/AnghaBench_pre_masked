
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct dsi_data {scalar_t__ debug_read; scalar_t__ debug_write; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct platform_device*,int ,int,int,int) ;
 scalar_t__ FUNC_4 (struct platform_device*,int ,int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct platform_device*) ;
 struct dsi_data* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (struct platform_device*,int) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_0, int VAR_1)
{
 struct dsi_data *VAR_2 = FUNC_7(VAR_0);

 if (VAR_2->debug_write || VAR_2->debug_read)
  FUNC_1("dsi_vc_send_bta %d\n", VAR_1);

 FUNC_5(!FUNC_6(VAR_0));


 if (FUNC_4(VAR_0, FUNC_0(VAR_1), 20, 20)) {
  FUNC_2("rx fifo not empty when sending BTA, dumping data:\n");
  FUNC_9(VAR_0, VAR_1);
 }

 FUNC_3(VAR_0, FUNC_0(VAR_1), 1, 6, 6);


 FUNC_8(VAR_0, FUNC_0(VAR_1));

 return 0;
}
