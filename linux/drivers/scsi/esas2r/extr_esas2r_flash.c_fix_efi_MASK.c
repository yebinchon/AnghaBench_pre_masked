
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct esas2r_flash_img {struct esas2r_component_header* cmp_hdr; } ;
struct esas2r_efi_image {int header_offset; } ;
struct esas2r_component_header {int length; int image_offset; } ;
struct esas2r_boot_header {int image_length; int device_id; } ;
struct esas2r_adapter {TYPE_1__* pcid; } ;
struct TYPE_2__ {int device; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct esas2r_adapter *VAR_1, struct esas2r_flash_img *VAR_2)
{
 struct esas2r_component_header *VAR_3 = &VAR_2->cmp_hdr[VAR_0];
 u32 VAR_4 = VAR_3->length;
 u32 VAR_5 = VAR_3->image_offset;
 struct esas2r_efi_image *VAR_6;
 struct esas2r_boot_header *VAR_7;

 while (VAR_4) {
  u32 VAR_8;

  VAR_6 = (struct esas2r_efi_image *)((u8 *)VAR_2 + VAR_5);
  VAR_7 = (struct esas2r_boot_header *)((u8 *)VAR_6 +
         FUNC_1(
          VAR_6->header_offset));
  VAR_7->device_id = FUNC_0(VAR_1->pcid->device);
  VAR_8 = (u32)FUNC_1(VAR_7->image_length) * 512;

  if (VAR_8 > VAR_4)
   break;

  VAR_4 -= VAR_8;
  VAR_5 += VAR_8;
 }
}
