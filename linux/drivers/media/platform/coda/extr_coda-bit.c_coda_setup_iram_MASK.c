
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int width; } ;
struct coda_q_data {int width; TYPE_2__ rect; } ;
struct coda_iram_info {int search_ram_size; int axi_sram_use; void* buf_ip_ac_dc_use; void* buf_bit_use; void* buf_dbk_c_use; void* buf_dbk_y_use; void* search_ram_paddr; int remaining; int next_paddr; } ;
struct TYPE_4__ {int vaddr; int size; int paddr; } ;
struct coda_dev {TYPE_3__* devtype; TYPE_1__ iram; } ;
struct coda_ctx {scalar_t__ inst_type; struct coda_dev* dev; struct coda_iram_info iram_info; } ;
struct TYPE_6__ {int product; } ;


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



 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int ,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int,struct coda_ctx*,char*) ;
 void* FUNC_2 (struct coda_iram_info*,int) ;
 struct coda_q_data* FUNC_3 (struct coda_ctx*,int ) ;
 int FUNC_4 (struct coda_iram_info*,int ,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(struct coda_ctx *VAR_16)
{
 struct coda_iram_info *VAR_17 = &VAR_16->iram_info;
 struct coda_dev *VAR_18 = VAR_16->dev;
 int VAR_19, VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25;

 FUNC_4(VAR_17, 0, sizeof(*VAR_17));
 VAR_17->next_paddr = VAR_18->iram.paddr;
 VAR_17->remaining = VAR_18->iram.size;

 if (!VAR_18->iram.vaddr)
  return;

 switch (VAR_18->devtype->product) {
 case 128:
  VAR_22 = VAR_3;
  VAR_23 = VAR_2;
  VAR_24 = VAR_4;
  VAR_25 = VAR_5;
  break;
 case 130:
  VAR_22 = VAR_3 | VAR_1;
  VAR_23 = VAR_2 | VAR_0;
  VAR_24 = VAR_4 | VAR_6;
  VAR_25 = VAR_5 | VAR_7;
  break;
 case 129:
  VAR_22 = VAR_10 | VAR_8;
  VAR_23 = VAR_9 | VAR_0;
  VAR_24 = VAR_11 | VAR_6;
  VAR_25 = 0;
  break;
 default:
  return;
 }

 if (VAR_16->inst_type == VAR_13) {
  struct coda_q_data *VAR_26;

  VAR_26 = FUNC_3(VAR_16, VAR_15);
  VAR_21 = FUNC_0(VAR_26->rect.width, 16);
  VAR_20 = VAR_21 * 128;
  VAR_19 = VAR_21 * 64;


  if (VAR_18->devtype->product == 128 ||
      VAR_18->devtype->product == 130) {
   VAR_17->search_ram_size = FUNC_6(VAR_21 * 16 *
             36 + 2048, 1024);
   VAR_17->search_ram_paddr = FUNC_2(VAR_17,
      VAR_17->search_ram_size);
   if (!VAR_17->search_ram_paddr) {
    FUNC_5("IRAM is smaller than the search ram size\n");
    goto out;
   }
   VAR_17->axi_sram_use |= VAR_25;
  }


  VAR_17->buf_dbk_y_use = FUNC_2(VAR_17, VAR_19);
  VAR_17->buf_dbk_c_use = FUNC_2(VAR_17, VAR_19);
  if (!VAR_17->buf_dbk_c_use)
   goto out;
  VAR_17->axi_sram_use |= VAR_22;

  VAR_17->buf_bit_use = FUNC_2(VAR_17, VAR_20);
  if (!VAR_17->buf_bit_use)
   goto out;
  VAR_17->axi_sram_use |= VAR_23;

  VAR_17->buf_ip_ac_dc_use = FUNC_2(VAR_17, VAR_20);
  if (!VAR_17->buf_ip_ac_dc_use)
   goto out;
  VAR_17->axi_sram_use |= VAR_24;


 } else if (VAR_16->inst_type == VAR_12) {
  struct coda_q_data *VAR_27;

  VAR_27 = FUNC_3(VAR_16, VAR_14);
  VAR_21 = FUNC_0(VAR_27->width, 16);
  VAR_20 = VAR_21 * 128;

  VAR_17->buf_dbk_y_use = FUNC_2(VAR_17, VAR_20);
  VAR_17->buf_dbk_c_use = FUNC_2(VAR_17, VAR_20);
  if (!VAR_17->buf_dbk_c_use)
   goto out;
  VAR_17->axi_sram_use |= VAR_22;

  VAR_17->buf_bit_use = FUNC_2(VAR_17, VAR_20);
  if (!VAR_17->buf_bit_use)
   goto out;
  VAR_17->axi_sram_use |= VAR_23;

  VAR_17->buf_ip_ac_dc_use = FUNC_2(VAR_17, VAR_20);
  if (!VAR_17->buf_ip_ac_dc_use)
   goto out;
  VAR_17->axi_sram_use |= VAR_24;


 }

out:
 if (!(VAR_17->axi_sram_use & VAR_4))
  FUNC_1(1, VAR_16, "IRAM smaller than needed\n");

 if (VAR_18->devtype->product == 128 ||
     VAR_18->devtype->product == 130) {

  if (VAR_16->inst_type == VAR_12) {

   VAR_17->axi_sram_use &= ~(VAR_4 |
           VAR_6);
  } else {

   VAR_17->axi_sram_use &= ~(VAR_4 |
           VAR_3 |
           VAR_6 |
           VAR_1);
  }
 }
}
