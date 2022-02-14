
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct qed_nvm_image_att {int start_addr; int length; } ;
struct TYPE_4__ {int num_images; TYPE_1__* image_att; } ;
struct qed_hwfn {TYPE_2__ nvm_info; } ;
struct qed_dev {int dummy; } ;
typedef int __le32 ;
struct TYPE_3__ {scalar_t__ image_type; int nvm_start_addr; int len; } ;


 scalar_t__ const FUNC_0 (int ) ;
 int FUNC_1 (struct qed_dev*,char*,scalar_t__,...) ;
 int FUNC_2 (struct qed_dev*,int ,char*,scalar_t__ const,scalar_t__,scalar_t__,scalar_t__,...) ;
 int VAR_0 ;
 int VAR_1 ;
 struct qed_hwfn* FUNC_3 (struct qed_dev*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct qed_dev*,scalar_t__,scalar_t__*,int) ;
 int FUNC_6 (struct qed_dev*,int ,scalar_t__,scalar_t__*,int) ;
 int FUNC_7 (struct qed_dev*,struct qed_nvm_image_att*,scalar_t__*) ;

__attribute__((used)) static int FUNC_8(struct qed_dev *VAR_3, const u8 **VAR_4,
          bool *VAR_5)
{
 struct qed_nvm_image_att VAR_6;
 struct qed_hwfn *VAR_7;
 bool VAR_8 = 0;
 u32 VAR_9;
 int VAR_10 = 0, VAR_11;
 u16 VAR_12;

 *VAR_4 += 4;
 VAR_9 = **VAR_4;
 VAR_7 = FUNC_3(VAR_3);
 for (VAR_11 = 0; VAR_11 < VAR_7->nvm_info.num_images; VAR_11++)
  if (VAR_9 == VAR_7->nvm_info.image_att[VAR_11].image_type)
   break;
 if (VAR_11 == VAR_7->nvm_info.num_images) {
  FUNC_1(VAR_3, "Failed to find nvram image of type %08x\n",
         VAR_9);
  return -VAR_0;
 }

 VAR_6.start_addr = VAR_7->nvm_info.image_att[VAR_11].nvm_start_addr;
 VAR_6.length = VAR_7->nvm_info.image_att[VAR_11].len;

 FUNC_2(VAR_3, VAR_1,
     "Read image %02x; type = %08x; NVM [%08x,...,%08x]\n",
     **VAR_4, VAR_9, VAR_6.start_addr,
     VAR_6.start_addr + VAR_6.length - 1);
 (*VAR_4)++;
 VAR_8 = !!(**VAR_4 & FUNC_0(0));
 (*VAR_4)++;
 VAR_12 = *((u16 *)*VAR_4);
 *VAR_4 += 2;
 if (VAR_8) {
  u32 VAR_13 = 0;

  VAR_10 = FUNC_7(VAR_3, &VAR_6, &VAR_13);
  if (VAR_10) {
   FUNC_1(VAR_3, "Failed calculating CRC, rc = %d\n", VAR_10);
   goto exit;
  }

  VAR_10 = FUNC_6(VAR_3, VAR_2,
           (VAR_6.start_addr +
     VAR_6.length - 4), (u8 *)&VAR_13, 4);
  if (VAR_10)
   FUNC_1(VAR_3, "Failed writing to %08x, rc = %d\n",
          VAR_6.start_addr + VAR_6.length - 4, VAR_10);
  goto exit;
 }


 while (VAR_12) {
  u32 VAR_14, VAR_15, VAR_16, VAR_17;
  u8 VAR_18[4];

  VAR_16 = *((u32 *)*VAR_4);
  *VAR_4 += 4;
  VAR_15 = *((u32 *)*VAR_4);
  *VAR_4 += 4;
  VAR_14 = *((u32 *)*VAR_4);
  *VAR_4 += 4;

  VAR_10 = FUNC_5(VAR_3, VAR_6.start_addr + VAR_14, VAR_18,
          4);
  if (VAR_10) {
   FUNC_1(VAR_3, "Failed reading from %08x\n",
          VAR_6.start_addr + VAR_14);
   goto exit;
  }

  VAR_17 = FUNC_4(*((__le32 *)VAR_18));
  FUNC_2(VAR_3, VAR_1,
      "NVM %08x: %08x -> %08x [Value %08x Mask %08x]\n",
      VAR_6.start_addr + VAR_14, VAR_17,
      (VAR_17 & ~VAR_15) | (VAR_16 & VAR_15), VAR_16, VAR_15);
  VAR_16 = (VAR_16 & VAR_15) | (VAR_17 & ~VAR_15);
  VAR_10 = FUNC_6(VAR_3, VAR_2,
           VAR_6.start_addr + VAR_14,
           (u8 *)&VAR_16, 4);
  if (VAR_10) {
   FUNC_1(VAR_3, "Failed writing to %08x\n",
          VAR_6.start_addr + VAR_14);
   goto exit;
  }

  VAR_12--;
 }
exit:
 return VAR_10;
}
