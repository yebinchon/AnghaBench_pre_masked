
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct firmware {scalar_t__ size; scalar_t__ data; } ;
struct carl9170fw_desc_head {int dummy; } ;
struct TYPE_3__ {struct carl9170fw_desc_head const* desc; struct firmware* fw; } ;
struct ar9170 {TYPE_2__* udev; TYPE_1__ fw; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct carl9170fw_desc_head* FUNC_1 (struct ar9170*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct ar9170*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct ar9170*) ;
 int FUNC_4 (struct ar9170*,struct carl9170fw_desc_head const*,scalar_t__) ;
 int FUNC_5 (int *,char*,...) ;

int FUNC_6(struct ar9170 *VAR_2)
{
 const struct carl9170fw_desc_head *VAR_3 = ((void*)0);
 const struct firmware *VAR_4 = VAR_2->fw.fw;
 unsigned long VAR_5 = 0;
 int VAR_6;

 if (FUNC_0(!VAR_4))
  return -VAR_0;

 VAR_3 = FUNC_1(VAR_2, VAR_4->data, VAR_4->size);

 if (!VAR_3) {
  FUNC_5(&VAR_2->udev->dev, "unsupported firmware.\n");
  return -VAR_1;
 }

 VAR_5 = (unsigned long)VAR_3 - (unsigned long)VAR_4->data;

 VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_4->size - VAR_5);
 if (VAR_6) {
  FUNC_5(&VAR_2->udev->dev, "damaged firmware (%d).\n", VAR_6);
  return VAR_6;
 }

 VAR_2->fw.desc = VAR_3;

 FUNC_3(VAR_2);

 VAR_6 = FUNC_2(VAR_2, VAR_4->data, VAR_4->size);
 if (VAR_6) {
  FUNC_5(&VAR_2->udev->dev, "failed to parse firmware (%d).\n",
   VAR_6);
  return VAR_6;
 }

 return 0;
}
