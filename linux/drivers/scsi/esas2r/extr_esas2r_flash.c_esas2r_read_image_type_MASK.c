
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct esas2r_efi_image {int machine_type; } ;
struct esas2r_boot_image {scalar_t__ signature; int header_offset; } ;
struct esas2r_boot_header {scalar_t__ code_type; scalar_t__ indicator; int image_length; } ;
struct esas2r_adapter {int image_type; } ;
typedef int bytes ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct esas2r_adapter*,int *,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;

bool FUNC_4(struct esas2r_adapter *VAR_5)
{
 u8 VAR_6[256];
 struct esas2r_boot_image *VAR_7;
 struct esas2r_boot_header *VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11;


 VAR_9 = sizeof(VAR_6);
 VAR_10 = VAR_2;
 VAR_11 = 0;

 while (1) {
  if (!FUNC_1(VAR_5, VAR_6, VAR_3 +
          VAR_11,
          VAR_9))
   goto invalid_rev;

  VAR_7 = (struct esas2r_boot_image *)VAR_6;
  VAR_8 = (struct esas2r_boot_header *)((u8 *)VAR_7 +
         FUNC_2(
          VAR_7->header_offset));
  if (VAR_7->signature != FUNC_0(0xAA55))
   goto invalid_rev;

  if (VAR_8->code_type == VAR_1) {
   FUNC_3(VAR_5->image_type, "BIOS");

   return 1;
  } else if (VAR_8->code_type == VAR_0) {
   struct esas2r_efi_image *VAR_12;





   VAR_12 = (struct esas2r_efi_image *)VAR_6;

   switch (FUNC_2(VAR_12->machine_type)) {
   case 130:
    FUNC_3(VAR_5->image_type, "EFI 32-bit");
    return 1;

   case 129:
    FUNC_3(VAR_5->image_type, "EFI itanium");
    return 1;

   case 128:
    FUNC_3(VAR_5->image_type, "EFI 64-bit");
    return 1;

   case 131:
    FUNC_3(VAR_5->image_type, "EFI EBC");
    return 1;

   default:
    goto invalid_rev;
   }
  } else {
   u32 VAR_13;


   VAR_13 = (u32)FUNC_2(VAR_8->image_length) * 512;
   if (VAR_13 == 0
       || VAR_13 + VAR_11 > VAR_10
       || VAR_8->indicator == VAR_4)
    break;

   VAR_11 += VAR_13;
  }
 }

invalid_rev:
 FUNC_3(VAR_5->image_type, "no boot images");
 return 0;
}
