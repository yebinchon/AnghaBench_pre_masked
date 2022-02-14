
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fw_info {int version; } ;
struct firmware {int size; int data; } ;
struct TYPE_4__ {char const* num; } ;
struct allegro_dev {int * m2m_dev; TYPE_2__ video_dev; int v4l2_dev; TYPE_1__* plat_dev; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct allegro_dev*,int ,int ) ;
 int FUNC_2 (struct allegro_dev*,int ,int ) ;
 int FUNC_3 (struct allegro_dev*) ;
 struct fw_info* FUNC_4 (struct allegro_dev*,struct firmware const*,struct firmware const*) ;
 int VAR_0 ;
 int FUNC_5 (struct allegro_dev*) ;
 int FUNC_6 (struct allegro_dev*,struct fw_info const*) ;
 int FUNC_7 (struct allegro_dev*) ;
 int FUNC_8 (struct allegro_dev*) ;
 int VAR_1 ;
 int FUNC_9 (struct firmware const*) ;
 int FUNC_10 (struct firmware const**,char const*,int *) ;
 int FUNC_11 (int,int ,int *,char*,char const*) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *,char*,int ) ;
 int * FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static void FUNC_16(const struct firmware *VAR_2, void *VAR_3)
{
 struct allegro_dev *VAR_4 = VAR_3;
 const char *VAR_5 = "al5e.fw";
 const struct firmware *VAR_6;
 int VAR_7;
 const struct fw_info *VAR_8;

 if (!VAR_2)
  return;

 FUNC_11(1, VAR_1, &VAR_4->v4l2_dev,
   "requesting codec firmware '%s'\n", VAR_5);
 VAR_7 = FUNC_10(&VAR_6, VAR_5, &VAR_4->plat_dev->dev);
 if (VAR_7)
  goto err_release_firmware;

 VAR_8 = FUNC_4(VAR_4, VAR_2, VAR_6);
 if (!VAR_8) {
  FUNC_12(&VAR_4->v4l2_dev, "firmware is not supported\n");
  goto err_release_firmware_codec;
 }

 FUNC_13(&VAR_4->v4l2_dev,
    "using mcu firmware version '%s'\n", VAR_8->version);


 VAR_7 = FUNC_7(VAR_4);
 if (VAR_7) {
  FUNC_12(&VAR_4->v4l2_dev, "failed to reset mcu\n");
  goto err_release_firmware_codec;
 }

 FUNC_1(VAR_4, VAR_2->data, VAR_2->size);
 FUNC_2(VAR_4, VAR_6->data, VAR_6->size);

 VAR_7 = FUNC_6(VAR_4, VAR_8);
 if (VAR_7) {
  FUNC_12(&VAR_4->v4l2_dev, "failed to initialize mcu\n");
  goto err_free_fw_codec;
 }

 VAR_4->m2m_dev = FUNC_14(&VAR_0);
 if (FUNC_0(VAR_4->m2m_dev)) {
  FUNC_12(&VAR_4->v4l2_dev, "failed to init mem2mem device\n");
  goto err_mcu_hw_deinit;
 }

 VAR_7 = FUNC_8(VAR_4);
 if (VAR_7) {
  FUNC_12(&VAR_4->v4l2_dev, "failed to register video device\n");
  goto err_m2m_release;
 }

 FUNC_11(1, VAR_1, &VAR_4->v4l2_dev,
   "allegro codec registered as /dev/video%d\n",
   VAR_4->video_dev.num);

 FUNC_9(VAR_6);
 FUNC_9(VAR_2);

 return;

err_m2m_release:
 FUNC_15(VAR_4->m2m_dev);
 VAR_4->m2m_dev = ((void*)0);
err_mcu_hw_deinit:
 FUNC_5(VAR_4);
err_free_fw_codec:
 FUNC_3(VAR_4);
err_release_firmware_codec:
 FUNC_9(VAR_6);
err_release_firmware:
 FUNC_9(VAR_2);
}
