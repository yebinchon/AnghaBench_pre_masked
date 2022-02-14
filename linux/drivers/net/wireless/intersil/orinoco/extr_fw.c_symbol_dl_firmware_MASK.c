
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orinoco_private {struct device* dev; } ;
struct fw_info {int sta_fw; int pri_fw; } ;
struct firmware {scalar_t__ size; scalar_t__ data; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,...) ;
 struct firmware* FUNC_1 (struct orinoco_private*,int) ;
 int FUNC_2 (struct firmware const*) ;
 scalar_t__ FUNC_3 (struct firmware const**,int ,struct device*) ;
 int FUNC_4 (struct orinoco_private*,struct fw_info const*,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_5(struct orinoco_private *VAR_1,
     const struct fw_info *VAR_2)
{
 struct device *VAR_3 = VAR_1->dev;
 int VAR_4;
 const struct firmware *VAR_5;

 if (!FUNC_1(VAR_1, 1)) {
  if (FUNC_3(&VAR_5, VAR_2->pri_fw, VAR_1->dev) != 0) {
   FUNC_0(VAR_3, "Cannot find firmware: %s\n", VAR_2->pri_fw);
   return -VAR_0;
  }
 } else
  VAR_5 = FUNC_1(VAR_1, 1);


 VAR_4 = FUNC_4(VAR_1, VAR_2, VAR_5->data,
         VAR_5->data + VAR_5->size, 0);

 if (!FUNC_1(VAR_1, 1))
  FUNC_2(VAR_5);
 if (VAR_4) {
  FUNC_0(VAR_3, "Primary firmware download failed\n");
  return VAR_4;
 }

 if (!FUNC_1(VAR_1, 0)) {
  if (FUNC_3(&VAR_5, VAR_2->sta_fw, VAR_1->dev) != 0) {
   FUNC_0(VAR_3, "Cannot find firmware: %s\n", VAR_2->sta_fw);
   return -VAR_0;
  }
 } else
  VAR_5 = FUNC_1(VAR_1, 0);


 VAR_4 = FUNC_4(VAR_1, VAR_2, VAR_5->data,
         VAR_5->data + VAR_5->size, 1);
 if (!FUNC_1(VAR_1, 0))
  FUNC_2(VAR_5);
 if (VAR_4)
  FUNC_0(VAR_3, "Secondary firmware download failed\n");

 return VAR_4;
}
