
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct boot_rom_geometry {int stride_size_in_pages; int search_area_stride_exponent; } ;
struct gpmi_nand_data {struct boot_rom_geometry rom_geometry; } ;



__attribute__((used)) static int FUNC_0(struct gpmi_nand_data *VAR_0)
{
 struct boot_rom_geometry *VAR_1 = &VAR_0->rom_geometry;
 VAR_1->stride_size_in_pages = 64;
 VAR_1->search_area_stride_exponent = 2;
 return 0;
}
