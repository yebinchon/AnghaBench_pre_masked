
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wilc_sdio {int has_thrpt_enh3; int block_size; int irq_gpio; } ;
struct wilc {int dev_irq_num; struct wilc_sdio* bus_data; int dev; } ;
struct sdio_func {int dev; } ;
struct sdio_cmd52 {int read_write; int raw; int address; int data; scalar_t__ function; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int) ;
 struct sdio_func* FUNC_2 (int ) ;
 int FUNC_3 (struct wilc*,struct sdio_cmd52*) ;
 int FUNC_4 (struct wilc*,int,int*) ;
 int FUNC_5 (struct wilc*,int ) ;
 int FUNC_6 (struct wilc*,int ) ;

__attribute__((used)) static int FUNC_7(struct wilc *VAR_1, bool VAR_2)
{
 struct sdio_func *VAR_3 = FUNC_2(VAR_1->dev);
 struct wilc_sdio *VAR_4 = VAR_1->bus_data;
 struct sdio_cmd52 VAR_5;
 int VAR_6, VAR_7;
 u32 VAR_8;

 if (!VAR_2)
  VAR_4->irq_gpio = VAR_1->dev_irq_num;




 VAR_5.read_write = 1;
 VAR_5.function = 0;
 VAR_5.raw = 1;
 VAR_5.address = 0x100;
 VAR_5.data = 0x80;
 VAR_7 = FUNC_3(VAR_1, &VAR_5);
 if (VAR_7) {
  FUNC_0(&VAR_3->dev, "Fail cmd 52, enable csa...\n");
  goto fail;
 }




 if (!FUNC_5(VAR_1, VAR_0)) {
  FUNC_0(&VAR_3->dev, "Fail cmd 52, set func 0 block size...\n");
  goto fail;
 }
 VAR_4->block_size = VAR_0;




 VAR_5.read_write = 1;
 VAR_5.function = 0;
 VAR_5.raw = 1;
 VAR_5.address = 0x2;
 VAR_5.data = 0x2;
 VAR_7 = FUNC_3(VAR_1, &VAR_5);
 if (VAR_7) {
  FUNC_0(&VAR_3->dev,
   "Fail cmd 52, set IOE register...\n");
  goto fail;
 }




 VAR_5.read_write = 0;
 VAR_5.function = 0;
 VAR_5.raw = 0;
 VAR_5.address = 0x3;
 VAR_6 = 3;
 do {
  VAR_5.data = 0;
  VAR_7 = FUNC_3(VAR_1, &VAR_5);
  if (VAR_7) {
   FUNC_0(&VAR_3->dev,
    "Fail cmd 52, get IOR register...\n");
   goto fail;
  }
  if (VAR_5.data == 0x2)
   break;
 } while (VAR_6--);

 if (VAR_6 <= 0) {
  FUNC_0(&VAR_3->dev, "Fail func 1 is not ready...\n");
  goto fail;
 }




 if (!FUNC_6(VAR_1, VAR_0)) {
  FUNC_0(&VAR_3->dev, "Fail set func 1 block size...\n");
  goto fail;
 }




 VAR_5.read_write = 1;
 VAR_5.function = 0;
 VAR_5.raw = 1;
 VAR_5.address = 0x4;
 VAR_5.data = 0x3;
 VAR_7 = FUNC_3(VAR_1, &VAR_5);
 if (VAR_7) {
  FUNC_0(&VAR_3->dev, "Fail cmd 52, set IEN register...\n");
  goto fail;
 }




 if (!VAR_2) {
  if (!FUNC_4(VAR_1, 0x1000, &VAR_8)) {
   FUNC_0(&VAR_3->dev, "Fail cmd read chip id...\n");
   goto fail;
  }
  FUNC_0(&VAR_3->dev, "chipid (%08x)\n", VAR_8);
  if ((VAR_8 & 0xfff) > 0x2a0)
   VAR_4->has_thrpt_enh3 = 1;
  else
   VAR_4->has_thrpt_enh3 = 0;
  FUNC_1(&VAR_3->dev, "has_thrpt_enh3 = %d...\n",
    VAR_4->has_thrpt_enh3);
 }

 return 1;

fail:

 return 0;
}
