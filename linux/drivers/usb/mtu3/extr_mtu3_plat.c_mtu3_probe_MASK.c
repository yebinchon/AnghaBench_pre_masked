
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssusb_mtk {int dr_mode; int is_host; struct device* dev; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;



 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*) ;
 struct ssusb_mtk* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,int ) ;
 int FUNC_6 (struct platform_device*,struct ssusb_mtk*) ;
 int FUNC_7 (struct platform_device*,struct ssusb_mtk*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (struct ssusb_mtk*) ;
 int FUNC_13 (struct ssusb_mtk*) ;
 int FUNC_14 (struct ssusb_mtk*) ;
 int FUNC_15 (struct ssusb_mtk*) ;
 int FUNC_16 (struct ssusb_mtk*) ;
 int FUNC_17 (struct ssusb_mtk*,struct device_node*) ;
 int FUNC_18 (struct ssusb_mtk*) ;
 int FUNC_19 (struct ssusb_mtk*) ;
 int FUNC_20 (struct ssusb_mtk*) ;
 int FUNC_21 (struct ssusb_mtk*) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_6)
{
 struct device_node *VAR_7 = VAR_6->dev.of_node;
 struct device *VAR_8 = &VAR_6->dev;
 struct ssusb_mtk *VAR_9;
 int VAR_10 = -VAR_3;


 VAR_9 = FUNC_4(VAR_8, sizeof(*VAR_9), VAR_5);
 if (!VAR_9)
  return -VAR_3;

 VAR_10 = FUNC_5(VAR_8, FUNC_0(32));
 if (VAR_10) {
  FUNC_2(VAR_8, "No suitable DMA config available\n");
  return -VAR_4;
 }

 FUNC_7(VAR_6, VAR_9);
 VAR_9->dev = VAR_8;

 VAR_10 = FUNC_6(VAR_6, VAR_9);
 if (VAR_10)
  return VAR_10;

 FUNC_12(VAR_9);


 FUNC_9(VAR_8);
 FUNC_10(VAR_8);
 FUNC_3(VAR_8);

 VAR_10 = FUNC_21(VAR_9);
 if (VAR_10)
  goto comm_init_err;

 FUNC_18(VAR_9);

 if (FUNC_1(VAR_1))
  VAR_9->dr_mode = 130;
 else if (FUNC_1(VAR_0))
  VAR_9->dr_mode = 128;


 VAR_9->is_host = !(VAR_9->dr_mode == 128);

 switch (VAR_9->dr_mode) {
 case 128:
  VAR_10 = FUNC_15(VAR_9);
  if (VAR_10) {
   FUNC_2(VAR_8, "failed to initialize gadget\n");
   goto comm_exit;
  }
  break;
 case 130:
  VAR_10 = FUNC_17(VAR_9, VAR_7);
  if (VAR_10) {
   FUNC_2(VAR_8, "failed to initialize host\n");
   goto comm_exit;
  }
  break;
 case 129:
  VAR_10 = FUNC_15(VAR_9);
  if (VAR_10) {
   FUNC_2(VAR_8, "failed to initialize gadget\n");
   goto comm_exit;
  }

  VAR_10 = FUNC_17(VAR_9, VAR_7);
  if (VAR_10) {
   FUNC_2(VAR_8, "failed to initialize host\n");
   goto gadget_exit;
  }

  VAR_10 = FUNC_19(VAR_9);
  if (VAR_10) {
   FUNC_2(VAR_8, "failed to initialize switch\n");
   goto host_exit;
  }
  break;
 default:
  FUNC_2(VAR_8, "unsupported mode: %d\n", VAR_9->dr_mode);
  VAR_10 = -VAR_2;
  goto comm_exit;
 }

 return 0;

host_exit:
 FUNC_16(VAR_9);
gadget_exit:
 FUNC_14(VAR_9);
comm_exit:
 FUNC_20(VAR_9);
comm_init_err:
 FUNC_11(VAR_8);
 FUNC_8(VAR_8);
 FUNC_13(VAR_9);

 return VAR_10;
}
