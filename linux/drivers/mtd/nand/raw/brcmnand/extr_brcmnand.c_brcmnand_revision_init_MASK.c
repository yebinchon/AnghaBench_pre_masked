
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmnand_controller {int nand_version; int reg_spacing; int max_page_size; int max_block_size; unsigned int const* page_sizes; unsigned int const* block_sizes; int max_oob; int features; TYPE_1__* dev; int cs0_offsets; int cs_offsets; int reg_offsets; } ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (struct brcmnand_controller*,int ) ;
 scalar_t__ FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct brcmnand_controller *VAR_13)
{
 static const unsigned int VAR_14[] = { 8, 16, 128, 256, 512, 1024, 2048, 0 };
 static const unsigned int VAR_15[] = { 16, 128, 8, 512, 256, 1024, 2048, 0 };
 static const unsigned int VAR_16[] = { 512, 2048, 4096, 8192, 0 };

 VAR_13->nand_version = FUNC_1(VAR_13, 0) & 0xffff;


 if (VAR_13->nand_version < 0x0400) {
  FUNC_0(VAR_13->dev, "version %#x not supported\n",
   VAR_13->nand_version);
  return -VAR_4;
 }


 if (VAR_13->nand_version >= 0x0702)
  VAR_13->reg_offsets = VAR_12;
 else if (VAR_13->nand_version == 0x0701)
  VAR_13->reg_offsets = VAR_11;
 else if (VAR_13->nand_version >= 0x0600)
  VAR_13->reg_offsets = VAR_10;
 else if (VAR_13->nand_version >= 0x0500)
  VAR_13->reg_offsets = VAR_9;
 else if (VAR_13->nand_version >= 0x0400)
  VAR_13->reg_offsets = VAR_8;


 if (VAR_13->nand_version >= 0x0701)
  VAR_13->reg_spacing = 0x14;
 else
  VAR_13->reg_spacing = 0x10;


 if (VAR_13->nand_version >= 0x0701) {
  VAR_13->cs_offsets = VAR_7;
 } else {
  VAR_13->cs_offsets = VAR_5;


  if (VAR_13->nand_version <= 0x0500)
   VAR_13->cs0_offsets = VAR_6;
 }


 if (VAR_13->nand_version >= 0x0701) {

  VAR_13->max_page_size = 16 * 1024;
  VAR_13->max_block_size = 2 * 1024 * 1024;
 } else {
  VAR_13->page_sizes = VAR_16;
  if (VAR_13->nand_version >= 0x0600)
   VAR_13->block_sizes = VAR_14;
  else
   VAR_13->block_sizes = VAR_15;

  if (VAR_13->nand_version < 0x0400) {
   VAR_13->max_page_size = 4096;
   VAR_13->max_block_size = 512 * 1024;
  }
 }


 if (VAR_13->nand_version == 0x0702)
  VAR_13->max_oob = 128;
 else if (VAR_13->nand_version >= 0x0600)
  VAR_13->max_oob = 64;
 else if (VAR_13->nand_version >= 0x0500)
  VAR_13->max_oob = 32;
 else
  VAR_13->max_oob = 16;


 if (VAR_13->nand_version >= 0x0600 && VAR_13->nand_version != 0x0601)
  VAR_13->features |= VAR_2;





 if (VAR_13->nand_version >= 0x0700)
  VAR_13->features |= VAR_1;

 if (VAR_13->nand_version >= 0x0500)
  VAR_13->features |= VAR_0;

 if (VAR_13->nand_version >= 0x0700)
  VAR_13->features |= VAR_3;
 else if (FUNC_2(VAR_13->dev->of_node, "brcm,nand-has-wp"))
  VAR_13->features |= VAR_3;

 return 0;
}
