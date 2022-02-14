
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpu_run {int signaled; int fw_ver; int wq; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct mtk_vpu {int fw_loaded; int vpu_mutex; int dev; struct vpu_run run; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*,int ) ;
 int FUNC_3 (struct mtk_vpu*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct mtk_vpu* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (struct mtk_vpu*,int,int ) ;
 int FUNC_9 (struct mtk_vpu*) ;
 int FUNC_10 (struct mtk_vpu*) ;
 int FUNC_11 (int ,int,int ) ;

int FUNC_12(struct platform_device *VAR_9)
{
 struct mtk_vpu *VAR_10;
 struct device *VAR_11 = &VAR_9->dev;
 struct vpu_run *VAR_12;
 int VAR_13;

 if (!VAR_9) {
  FUNC_1(VAR_11, "VPU platform device is invalid\n");
  return -VAR_1;
 }

 VAR_10 = FUNC_7(VAR_9);
 VAR_12 = &VAR_10->run;

 FUNC_5(&VAR_10->vpu_mutex);
 if (VAR_10->fw_loaded) {
  FUNC_6(&VAR_10->vpu_mutex);
  return 0;
 }
 FUNC_6(&VAR_10->vpu_mutex);

 VAR_13 = FUNC_10(VAR_10);
 if (VAR_13) {
  FUNC_1(VAR_11, "enable clock failed %d\n", VAR_13);
  return VAR_13;
 }

 FUNC_5(&VAR_10->vpu_mutex);

 VAR_12->signaled = 0;
 FUNC_0(VAR_10->dev, "firmware request\n");

 VAR_13 = FUNC_3(VAR_10, VAR_5);
 if (VAR_13 < 0) {
  FUNC_1(VAR_11, "Failed to request %s, %d\n", VAR_7, VAR_13);
  goto OUT_LOAD_FW;
 }


 VAR_13 = FUNC_3(VAR_10, VAR_0);
 if (VAR_13 < 0) {
  FUNC_1(VAR_11, "Failed to request %s, %d\n", VAR_6, VAR_13);
  goto OUT_LOAD_FW;
 }

 VAR_10->fw_loaded = 1;

 FUNC_8(VAR_10, 0x1, VAR_8);

 VAR_13 = FUNC_11(VAR_12->wq,
            VAR_12->signaled,
            FUNC_4(VAR_4)
            );
 if (VAR_13 == 0) {
  VAR_13 = -VAR_3;
  FUNC_1(VAR_11, "wait vpu initialization timeout!\n");
  goto OUT_LOAD_FW;
 } else if (-VAR_2 == VAR_13) {
  FUNC_1(VAR_11, "wait vpu interrupted by a signal!\n");
  goto OUT_LOAD_FW;
 }

 VAR_13 = 0;
 FUNC_2(VAR_11, "vpu is ready. Fw version %s\n", VAR_12->fw_ver);

OUT_LOAD_FW:
 FUNC_6(&VAR_10->vpu_mutex);
 FUNC_9(VAR_10);

 return VAR_13;
}
