
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct esas2r_boot_image {int header_offset; scalar_t__ signature; } ;
struct esas2r_boot_header {char* signature; int struct_length; int* class_code; scalar_t__ code_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static u8 FUNC_1(u8 *VAR_3, u32 VAR_4)
{
 struct esas2r_boot_image *VAR_5 = (struct esas2r_boot_image *)VAR_3;
 u16 VAR_6 = FUNC_0(VAR_5->header_offset);
 struct esas2r_boot_header *VAR_7;

 if (VAR_5->signature != FUNC_0(0xaa55)
     || (long)VAR_6 >
     (long)(65536L - sizeof(struct esas2r_boot_header))
     || (VAR_6 & 3)
     || (VAR_6 < sizeof(struct esas2r_boot_image))
     || ((u32)VAR_6 + sizeof(struct esas2r_boot_header) > VAR_4))
  return 0xff;

 VAR_7 = (struct esas2r_boot_header *)((char *)VAR_5 + VAR_6);

 if (VAR_7->signature[0] != 'P'
     || VAR_7->signature[1] != 'C'
     || VAR_7->signature[2] != 'I'
     || VAR_7->signature[3] != 'R'
     || FUNC_0(VAR_7->struct_length) <
     (u16)sizeof(struct esas2r_boot_header)
     || VAR_7->class_code[2] != 0x01
     || VAR_7->class_code[1] != 0x04
     || VAR_7->class_code[0] != 0x00
     || (VAR_7->code_type != VAR_2
  && VAR_7->code_type != VAR_1
  && VAR_7->code_type != VAR_0))
  return 0xff;

 return VAR_7->code_type;
}
