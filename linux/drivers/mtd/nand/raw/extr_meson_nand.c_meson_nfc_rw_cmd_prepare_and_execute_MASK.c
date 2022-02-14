
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct nand_sdr_timings {int tR_max; } ;
struct nand_rw_cmd {int dummy; } ;
struct nand_chip {int options; int data_interface; } ;
struct mtd_info {int writesize; } ;
struct TYPE_8__ {int tadl; } ;
struct TYPE_6__ {size_t* addrs; size_t cmd0; size_t cmd1; } ;
struct TYPE_7__ {TYPE_2__ rw; int * cmd; } ;
struct TYPE_5__ {size_t chip_select; } ;
struct meson_nfc {TYPE_4__ timing; scalar_t__ reg_base; TYPE_3__ cmdfifo; TYPE_1__ param; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (int,int) ;
 int FUNC_2 (struct meson_nfc*,int ) ;
 int FUNC_3 (struct meson_nfc*,int ) ;
 struct meson_nfc* FUNC_4 (struct nand_chip*) ;
 struct nand_sdr_timings* FUNC_5 (int *) ;
 struct mtd_info* FUNC_6 (struct nand_chip*) ;
 int FUNC_7 (size_t,scalar_t__) ;
 int FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct nand_chip *VAR_7,
      int VAR_8, bool VAR_9)
{
 struct mtd_info *VAR_10 = FUNC_6(VAR_7);
 struct meson_nfc *VAR_11 = FUNC_4(VAR_7);
 const struct nand_sdr_timings *VAR_12 =
  FUNC_5(&VAR_7->data_interface);
 u32 *VAR_13 = VAR_11->cmdfifo.rw.addrs;
 u32 VAR_14 = VAR_11->param.chip_select;
 u32 VAR_15, VAR_16, VAR_17;
 int VAR_18 = 0, VAR_19;

 VAR_16 = sizeof(struct nand_rw_cmd) / sizeof(int);

 VAR_15 = VAR_9 ? VAR_0 : VAR_2;
 VAR_11->cmdfifo.rw.cmd0 = VAR_14 | VAR_5 | VAR_15;

 VAR_13[0] = VAR_14 | VAR_4 | 0;
 if (VAR_10->writesize <= 512) {
  VAR_16--;
  VAR_17 = 1;
 } else {
  VAR_13[1] = VAR_14 | VAR_4 | 0;
  VAR_17 = 2;
 }

 VAR_13[VAR_17] = VAR_14 | VAR_4 | FUNC_1(VAR_8, 0);
 VAR_13[VAR_17 + 1] = VAR_14 | VAR_4 | FUNC_1(VAR_8, 1);

 if (VAR_7->options & VAR_3)
  VAR_13[VAR_17 + 2] =
   VAR_14 | VAR_4 | FUNC_1(VAR_8, 2);
 else
  VAR_16--;


 VAR_16--;

 for (VAR_19 = 0; VAR_19 < VAR_16; VAR_19++)
  FUNC_8(VAR_11->cmdfifo.cmd[VAR_19],
          VAR_11->reg_base + VAR_6);

 if (VAR_9) {
  VAR_11->cmdfifo.rw.cmd1 = VAR_14 | VAR_5 | VAR_1;
  FUNC_7(VAR_11->cmdfifo.rw.cmd1, VAR_11->reg_base + VAR_6);
  FUNC_3(VAR_11, FUNC_0(VAR_12->tR_max));
 } else {
  FUNC_2(VAR_11, VAR_11->timing.tadl);
 }

 return VAR_18;
}
