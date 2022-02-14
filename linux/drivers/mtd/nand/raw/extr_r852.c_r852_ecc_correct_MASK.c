
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct r852_device {int ctlreg; scalar_t__ dma_error; scalar_t__ card_unstable; } ;
struct nand_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (struct nand_chip*) ;
 struct r852_device* FUNC_2 (int ) ;
 int FUNC_3 (struct r852_device*,int ) ;
 int FUNC_4 (struct r852_device*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct nand_chip *VAR_8, uint8_t *VAR_9,
       uint8_t *VAR_10, uint8_t *VAR_11)
{
 uint32_t VAR_12;
 uint8_t VAR_13, VAR_14;
 int VAR_15, VAR_16 = 0;

 struct r852_device *VAR_17 = FUNC_2(FUNC_1(VAR_8));

 if (VAR_17->card_unstable)
  return 0;

 if (VAR_17->dma_error) {
  VAR_17->dma_error = 0;
  return -VAR_1;
 }

 FUNC_4(VAR_17, VAR_2, VAR_17->ctlreg | VAR_3);
 VAR_12 = FUNC_3(VAR_17, VAR_4);
 FUNC_4(VAR_17, VAR_2, VAR_17->ctlreg);

 for (VAR_15 = 0 ; VAR_15 <= 1 ; VAR_15++) {

  VAR_13 = (VAR_12 >> 8) & 0xFF;


  if (VAR_13 & VAR_7) {
   FUNC_0("ecc: unrecoverable error, in half %d", VAR_15);
   VAR_16 = -VAR_0;
   goto exit;
  }


  if (VAR_13 & VAR_5) {

   VAR_14 = VAR_12 & 0xFF;
   FUNC_0("ecc: recoverable error, "
    "in half %d, byte %d, bit %d", VAR_15,
    VAR_14, VAR_13 & VAR_6);

   VAR_9[VAR_14] ^=
    1 << (VAR_13 & VAR_6);
   VAR_16++;
  }

  VAR_9 += 256;
  VAR_12 >>= 16;
 }
exit:
 return VAR_16;
}
