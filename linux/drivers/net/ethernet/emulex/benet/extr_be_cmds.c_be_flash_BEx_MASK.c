
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int const u8 ;
struct image_hdr {int dummy; } ;
struct flash_section_info {int dummy; } ;
struct flash_file_hdr_g3 {int dummy; } ;
struct flash_file_hdr_g2 {int dummy; } ;
struct flash_comp {scalar_t__ member_1; scalar_t__ const img_type; scalar_t__ const optype; int offset; int size; int const member_3; int const member_2; int member_0; } ;
struct firmware {int size; int const* data; } ;
struct device {int dummy; } ;
struct be_dma_mem {int dummy; } ;
struct be_adapter {int fw_ver; TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct flash_comp const*) ;
 scalar_t__ FUNC_1 (struct be_adapter*) ;
 int VAR_0 ;
 int FUNC_2 (struct be_adapter*,int const*,int,int,int,scalar_t__ const,int*) ;
 int FUNC_3 (struct be_adapter*,int const*,struct be_dma_mem*,scalar_t__ const,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device*,char*,...) ;
 int FUNC_6 (struct device*,int ,int ) ;
 struct flash_section_info* FUNC_7 (struct be_adapter*,int,struct firmware const*) ;
 int FUNC_8 (struct be_adapter*,struct flash_section_info*,scalar_t__ const) ;
 int FUNC_9 (struct be_adapter*) ;

__attribute__((used)) static int FUNC_10(struct be_adapter *VAR_1,
   const struct firmware *VAR_2,
   struct be_dma_mem *VAR_3, int VAR_4)
{
 int VAR_5 = (VAR_4 * sizeof(struct image_hdr));
 struct device *VAR_6 = &VAR_1->pdev->dev;
 struct flash_section_info *VAR_7 = ((void*)0);
 int VAR_8, VAR_9, VAR_10, VAR_11;
 const struct flash_comp *VAR_12;
 bool VAR_13;
 const u8 *VAR_14;

 static const struct flash_comp VAR_15[] = {
  { 155, 133,
   161, 143},
  { 148, 128,
   149, 147},
  { 156, 137,
   162, 139},
  { 150, 129,
   162, 138},
  { 159, 136,
   162, 140},
  { 157, 132,
   161, 145},
  { 158, 135,
   161, 144},
  { 160, 134,
   161, 146},
  { 153, 131,
   154, 141},
  { 151, 130,
   152, 142}
 };

 static const struct flash_comp VAR_16[] = {
  { 166, 133,
   172, 143},
  { 163, 128,
   164, 147},
  { 167, 137,
   173, 139},
  { 165, 129,
   173, 138},
  { 170, 136,
   173, 140},
  { 168, 132,
   172, 145},
  { 169, 135,
   172, 144},
  { 171, 134,
    172, 146}
 };

 if (FUNC_1(VAR_1)) {
  VAR_12 = VAR_15;
  VAR_10 = sizeof(struct flash_file_hdr_g3);
  VAR_11 = FUNC_0(VAR_15);
 } else {
  VAR_12 = VAR_16;
  VAR_10 = sizeof(struct flash_file_hdr_g2);
  VAR_11 = FUNC_0(VAR_16);
  VAR_5 = 0;
 }


 VAR_7 = FUNC_7(VAR_1, VAR_10 + VAR_5, VAR_2);
 if (!VAR_7) {
  FUNC_5(VAR_6, "Invalid Cookie. FW image may be corrupted\n");
  return -1;
 }
 for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
  if (!FUNC_8(VAR_1, VAR_7, VAR_12[VAR_9].img_type))
   continue;

  if ((VAR_12[VAR_9].optype == 131) &&
      !FUNC_4(VAR_1->fw_ver)) {
   FUNC_6(VAR_6, VAR_0, VAR_1->fw_ver);
   continue;
  }

  if (VAR_12[VAR_9].optype == 130 &&
      !FUNC_9(VAR_1))
   continue;

  if (VAR_12[VAR_9].optype == 128) {
   VAR_8 = FUNC_2(VAR_1, VAR_2->data,
          VAR_12[VAR_9].offset,
          VAR_12[VAR_9].size,
          VAR_10 +
          VAR_5,
          128, &VAR_13);
   if (VAR_8) {
    FUNC_5(VAR_6,
     "Could not get CRC for 0x%x region\n",
     VAR_12[VAR_9].optype);
    continue;
   }

   if (VAR_13)
    continue;
  }

  VAR_14 = VAR_2->data + VAR_10 + VAR_12[VAR_9].offset +
   VAR_5;
  if (VAR_14 + VAR_12[VAR_9].size > VAR_2->data + VAR_2->size)
   return -1;

  VAR_8 = FUNC_3(VAR_1, VAR_14, VAR_3, VAR_12[VAR_9].optype,
      VAR_12[VAR_9].size, 0);
  if (VAR_8) {
   FUNC_5(VAR_6, "Flashing section type 0x%x failed\n",
    VAR_12[VAR_9].img_type);
   return VAR_8;
  }
 }
 return 0;
}
