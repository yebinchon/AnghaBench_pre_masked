
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int const u8 ;
typedef int u32 ;
typedef int u16 ;
struct image_hdr {int dummy; } ;
struct TYPE_5__ {int num_images; } ;
struct flash_section_info {TYPE_3__* fsec_entry; TYPE_2__ fsec_hdr; } ;
struct flash_file_hdr_g3 {int dummy; } ;
struct firmware {int size; int const* data; } ;
struct device {int dummy; } ;
struct be_dma_mem {int dummy; } ;
struct be_adapter {TYPE_1__* pdev; } ;
struct TYPE_6__ {int optype; int type; int pad_size; int offset; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct be_adapter*,int const*,int,int,int,int,int*) ;
 int FUNC_3 (struct be_adapter*,int const*,struct be_dma_mem*,int,int,int) ;
 int FUNC_4 (TYPE_3__) ;
 int FUNC_5 (struct device*,char*,...) ;
 struct flash_section_info* FUNC_6 (struct be_adapter*,int,struct firmware const*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct be_adapter *VAR_8,
       const struct firmware *VAR_9,
       struct be_dma_mem *VAR_10, int VAR_11)
{
 int VAR_12 = VAR_11 * sizeof(struct image_hdr);
 bool VAR_13, VAR_14, VAR_15 = 1;
 struct device *VAR_16 = &VAR_8->pdev->dev;
 struct flash_section_info *VAR_17 = ((void*)0);
 u32 VAR_18, VAR_19, VAR_20;
 u16 VAR_21, VAR_22;
 int VAR_23, VAR_24, VAR_25;
 const u8 *VAR_26;

 VAR_25 = sizeof(struct flash_file_hdr_g3);
 VAR_17 = FUNC_6(VAR_8, VAR_25 + VAR_12, VAR_9);
 if (!VAR_17) {
  FUNC_5(VAR_16, "Invalid Cookie. FW image may be corrupted\n");
  return -VAR_2;
 }

retry_flash:
 for (VAR_24 = 0; VAR_24 < FUNC_7(VAR_17->fsec_hdr.num_images); VAR_24++) {
  VAR_18 = FUNC_7(VAR_17->fsec_entry[VAR_24].offset);
  VAR_19 = FUNC_7(VAR_17->fsec_entry[VAR_24].pad_size);
  VAR_20 = FUNC_7(VAR_17->fsec_entry[VAR_24].type);
  VAR_21 = FUNC_4(VAR_17->fsec_entry[VAR_24]);
  VAR_14 = VAR_17->fsec_entry[VAR_24].optype == 0xFFFF;

  if (VAR_21 == 0xFFFF)
   continue;

  if (VAR_15)
   VAR_22 = VAR_6;
  else
   VAR_22 = VAR_21;




  if (VAR_14)
   goto flash;

  VAR_23 = FUNC_2(VAR_8, VAR_9->data, VAR_18,
         VAR_19, VAR_25 +
         VAR_12, VAR_22,
         &VAR_13);
  if (FUNC_1(VAR_23) == VAR_5 ||
      FUNC_1(VAR_23) == VAR_4) {




   if (VAR_22 == VAR_6) {
    VAR_15 = 0;
    goto retry_flash;
   }
   FUNC_5(VAR_16, "Flash incomplete. Reset the server\n");
   FUNC_5(VAR_16, "Download FW image again after reset\n");
   return -VAR_0;
  } else if (VAR_23) {
   FUNC_5(VAR_16, "Could not get CRC for 0x%x region\n",
    VAR_21);
   return -VAR_1;
  }

  if (VAR_13)
   continue;

flash:
  VAR_26 = VAR_9->data + VAR_25 + VAR_18 + VAR_12;
  if (VAR_26 + VAR_19 > VAR_9->data + VAR_9->size)
   return -1;

  VAR_23 = FUNC_3(VAR_8, VAR_26, VAR_10, VAR_22, VAR_19,
      VAR_18);





  if (FUNC_1(VAR_23) == VAR_4 &&
      VAR_22 == VAR_6) {
   VAR_15 = 0;
   goto retry_flash;
  }




  if (VAR_14 &&
      (FUNC_1(VAR_23) == VAR_4 ||
       (VAR_21 == VAR_7 &&
        FUNC_1(VAR_23) == VAR_3))) {
   continue;
  } else if (VAR_23) {
   FUNC_5(VAR_16, "Flashing section type 0x%x failed\n",
    VAR_20);

   switch (FUNC_0(VAR_23)) {
   case 128:
    FUNC_5(VAR_16,
     "Digital signature missing in FW\n");
    return -VAR_2;
   case 129:
    FUNC_5(VAR_16,
     "Invalid digital signature in FW\n");
    return -VAR_2;
   default:
    return -VAR_1;
   }
  }
 }
 return 0;
}
