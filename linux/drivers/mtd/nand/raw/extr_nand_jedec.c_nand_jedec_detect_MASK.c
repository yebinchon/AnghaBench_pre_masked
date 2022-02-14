
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct nand_memory_organization {int pagesize; int pages_per_eraseblock; int oobsize; int planes_per_lun; int eraseblocks_per_lun; int bits_per_cell; int luns_per_target; } ;
struct nand_jedec_params {int multi_plane_addr; struct jedec_ecc_info* ecc_info; int features; int bits_per_cell; int blocks_per_lun; int lun_count; int spare_bytes_per_page; int pages_per_block; int byte_per_page; int model; int manufacturer; int revision; int crc; } ;
struct TYPE_5__ {int step_size; int strength; } ;
struct TYPE_6__ {TYPE_2__ eccreq; } ;
struct TYPE_4__ {int model; } ;
struct nand_chip {TYPE_3__ base; int options; TYPE_1__ parameters; } ;
struct mtd_info {int writesize; int erasesize; int oobsize; } ;
struct jedec_ecc_info {int codeword_size; int ecc_bits; } ;
typedef int id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct nand_jedec_params*) ;
 int FUNC_2 (int ,int ) ;
 struct nand_jedec_params* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct nand_chip*,struct nand_jedec_params*,int,int) ;
 int FUNC_7 (struct nand_chip*,int,int *,int ) ;
 int FUNC_8 (struct nand_chip*,int,char*,int) ;
 struct mtd_info* FUNC_9 (struct nand_chip*) ;
 struct nand_memory_organization* FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int ,int *,int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ,int) ;
 scalar_t__ FUNC_16 (char*,char*,int) ;

int FUNC_17(struct nand_chip *VAR_5)
{
 struct mtd_info *VAR_6 = FUNC_9(VAR_5);
 struct nand_memory_organization *VAR_7;
 struct nand_jedec_params *VAR_8;
 struct jedec_ecc_info *VAR_9;
 int VAR_10 = 0;
 char VAR_11[5];
 int VAR_12, VAR_13, VAR_14;

 VAR_7 = FUNC_10(&VAR_5->base);


 VAR_14 = FUNC_8(VAR_5, 0x40, VAR_11, sizeof(VAR_11));
 if (VAR_14 || FUNC_16(VAR_11, "JEDEC", sizeof(VAR_11)))
  return 0;


 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_14 = FUNC_7(VAR_5, 0x40, ((void*)0), 0);
 if (VAR_14) {
  VAR_14 = 0;
  goto free_jedec_param_page;
 }

 for (VAR_12 = 0; VAR_12 < 3; VAR_12++) {
  VAR_14 = FUNC_6(VAR_5, VAR_8, sizeof(*VAR_8), 1);
  if (VAR_14) {
   VAR_14 = 0;
   goto free_jedec_param_page;
  }

  if (FUNC_11(VAR_4, (uint8_t *)VAR_8, 510) ==
    FUNC_4(VAR_8->crc))
   break;
 }

 if (VAR_12 == 3) {
  FUNC_12("Could not find valid JEDEC parameter page; aborting\n");
  goto free_jedec_param_page;
 }


 VAR_13 = FUNC_4(VAR_8->revision);
 if (VAR_13 & (1 << 2))
  VAR_10 = 10;
 else if (VAR_13 & (1 << 1))
  VAR_10 = 1;

 if (!VAR_10) {
  FUNC_13("unsupported JEDEC version: %d\n", VAR_13);
  goto free_jedec_param_page;
 }

 FUNC_15(VAR_8->manufacturer, sizeof(VAR_8->manufacturer));
 FUNC_15(VAR_8->model, sizeof(VAR_8->model));
 VAR_5->parameters.model = FUNC_2(VAR_8->model, VAR_1);
 if (!VAR_5->parameters.model) {
  VAR_14 = -VAR_0;
  goto free_jedec_param_page;
 }

 VAR_7->pagesize = FUNC_5(VAR_8->byte_per_page);
 VAR_6->writesize = VAR_7->pagesize;


 VAR_7->pages_per_eraseblock =
   1 << (FUNC_0(FUNC_5(VAR_8->pages_per_block)) - 1);
 VAR_6->erasesize = VAR_7->pages_per_eraseblock * VAR_7->pagesize;

 VAR_7->oobsize = FUNC_4(VAR_8->spare_bytes_per_page);
 VAR_6->oobsize = VAR_7->oobsize;

 VAR_7->luns_per_target = VAR_8->lun_count;
 VAR_7->planes_per_lun = 1 << VAR_8->multi_plane_addr;


 VAR_7->eraseblocks_per_lun =
  1 << (FUNC_0(FUNC_5(VAR_8->blocks_per_lun)) - 1);
 VAR_7->bits_per_cell = VAR_8->bits_per_cell;

 if (FUNC_4(VAR_8->features) & VAR_2)
  VAR_5->options |= VAR_3;


 VAR_9 = &VAR_8->ecc_info[0];

 if (VAR_9->codeword_size >= 9) {
  VAR_5->base.eccreq.strength = VAR_9->ecc_bits;
  VAR_5->base.eccreq.step_size = 1 << VAR_9->codeword_size;
 } else {
  FUNC_14("Invalid codeword size\n");
 }

 VAR_14 = 1;

free_jedec_param_page:
 FUNC_1(VAR_8);
 return VAR_14;
}
