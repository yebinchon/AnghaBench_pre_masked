
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct qlcnic_adapter {TYPE_1__* pdev; TYPE_2__* ahw; } ;
struct qlc_83xx_fw_info {struct firmware* fw; } ;
struct firmware {int size; scalar_t__ data; } ;
typedef int __le32 ;
struct TYPE_4__ {struct qlc_83xx_fw_info* fw_info; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct qlcnic_adapter*,scalar_t__,scalar_t__*,int) ;
 int FUNC_4 (struct firmware const*) ;
 int FUNC_5 (scalar_t__*) ;
 scalar_t__* FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct qlcnic_adapter *VAR_3)
{
 struct qlc_83xx_fw_info *VAR_4 = VAR_3->ahw->fw_info;
 const struct firmware *VAR_5 = VAR_4->fw;
 u32 VAR_6, *VAR_7, *VAR_8;
 int VAR_9, VAR_10 = -VAR_0;
 __le32 *VAR_11;
 u8 VAR_12[16];
 size_t VAR_13;
 u64 VAR_14;

 VAR_8 = FUNC_6(VAR_5->size);
 if (!VAR_8) {
  FUNC_4(VAR_5);
  VAR_4->fw = ((void*)0);
  return -VAR_1;
 }

 VAR_11 = (__le32 *)VAR_5->data;




 for (VAR_9 = 0; VAR_9 < VAR_5->size / sizeof(u32); VAR_9++)
  VAR_8[VAR_9] = FUNC_1(VAR_11[VAR_9]);

 VAR_6 = FUNC_0(VAR_3->ahw, VAR_2);
 VAR_13 = (VAR_5->size & ~0xF);
 VAR_7 = VAR_8;
 VAR_14 = (u64)VAR_6;

 VAR_10 = FUNC_3(VAR_3, VAR_14,
         VAR_7, VAR_13 / 16);
 if (VAR_10) {
  FUNC_2(&VAR_3->pdev->dev, "MS memory write failed\n");
  goto exit;
 }


 if (VAR_5->size & 0xF) {
  VAR_14 = VAR_6 + VAR_13;
  for (VAR_9 = 0; VAR_9 < (VAR_5->size & 0xF); VAR_9++)
   VAR_12[VAR_9] = ((u8 *)VAR_8)[VAR_13 + VAR_9];
  for (; VAR_9 < 16; VAR_9++)
   VAR_12[VAR_9] = 0;
  VAR_10 = FUNC_3(VAR_3, VAR_14,
          (u32 *)VAR_12, 1);
  if (VAR_10) {
   FUNC_2(&VAR_3->pdev->dev,
    "MS memory write failed\n");
   goto exit;
  }
 }

exit:
 FUNC_4(VAR_5);
 VAR_4->fw = ((void*)0);
 FUNC_5(VAR_8);

 return VAR_10;
}
