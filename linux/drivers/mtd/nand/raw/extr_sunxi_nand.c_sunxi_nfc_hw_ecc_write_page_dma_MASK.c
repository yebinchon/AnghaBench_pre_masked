
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sunxi_nfc {int dmac; scalar_t__ regs; } ;
struct scatterlist {int dummy; } ;
struct nand_ecc_ctrl {int steps; int bytes; int size; } ;
struct nand_chip {int options; int * oob_poi; int cur_cs; struct nand_ecc_ctrl ecc; int controller; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nand_chip*,int,int ,int *,int ) ;
 int FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct sunxi_nfc*,int ,struct scatterlist*) ;
 int FUNC_5 (struct sunxi_nfc*,int const*,int ,int,int ,struct scatterlist*) ;
 int FUNC_6 (struct nand_chip*) ;
 int FUNC_7 (struct nand_chip*) ;
 int FUNC_8 (struct nand_chip*,int const*,int,int,int) ;
 int FUNC_9 (struct nand_chip*,int *,int *,int) ;
 int FUNC_10 (struct nand_chip*,int const*,int,int) ;
 int FUNC_11 (struct nand_chip*,int,int) ;
 int FUNC_12 (struct nand_chip*) ;
 int FUNC_13 (struct nand_chip*) ;
 int FUNC_14 (struct nand_chip*,int ) ;
 int FUNC_15 (struct sunxi_nfc*) ;
 int FUNC_16 (struct sunxi_nfc*,int ,int,int ) ;
 struct sunxi_nfc* FUNC_17 (int ) ;
 int FUNC_18 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_19(struct nand_chip *VAR_11,
        const u8 *VAR_12,
        int VAR_13,
        int VAR_14)
{
 struct sunxi_nfc *VAR_15 = FUNC_17(VAR_11->controller);
 struct nand_ecc_ctrl *VAR_16 = &VAR_11->ecc;
 struct scatterlist VAR_17;
 int VAR_18, VAR_19;

 FUNC_14(VAR_11, VAR_11->cur_cs);

 VAR_18 = FUNC_15(VAR_15);
 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_5(VAR_15, VAR_12, VAR_16->size, VAR_16->steps,
           VAR_0, &VAR_17);
 if (VAR_18)
  goto pio_fallback;

 for (VAR_19 = 0; VAR_19 < VAR_16->steps; VAR_19++) {
  const u8 *VAR_20 = VAR_11->oob_poi + (VAR_19 * (VAR_16->bytes + 4));

  FUNC_8(VAR_11, VAR_20, VAR_19, !VAR_19, VAR_14);
 }

 FUNC_2(VAR_11, VAR_14, 0, ((void*)0), 0);

 FUNC_7(VAR_11);
 FUNC_11(VAR_11, VAR_14, 0);
 FUNC_13(VAR_11);

 FUNC_18((VAR_2 << 8) | VAR_1,
        VAR_15->regs + VAR_10);

 FUNC_0(VAR_15->dmac);

 FUNC_18(VAR_8 | VAR_6 |
        VAR_7 | VAR_4,
        VAR_15->regs + VAR_9);

 VAR_18 = FUNC_16(VAR_15, VAR_5, 0, 0);
 if (VAR_18)
  FUNC_1(VAR_15->dmac);

 FUNC_12(VAR_11);
 FUNC_6(VAR_11);

 FUNC_4(VAR_15, VAR_0, &VAR_17);

 if (VAR_18)
  return VAR_18;

 if (VAR_13 || (VAR_11->options & VAR_3))

  FUNC_9(VAR_11, VAR_11->oob_poi,
       ((void*)0), VAR_14);

 return FUNC_3(VAR_11);

pio_fallback:
 return FUNC_10(VAR_11, VAR_12, VAR_13, VAR_14);
}
