
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wilc_sdio {int block_size; } ;
struct wilc {struct wilc_sdio* bus_data; int dev; } ;
struct sdio_func {int dev; } ;
struct sdio_cmd53 {int address; int increment; int count; int block_size; int * buffer; scalar_t__ block_mode; scalar_t__ function; scalar_t__ read_write; } ;
struct sdio_cmd52 {int address; int data; scalar_t__ raw; scalar_t__ function; scalar_t__ read_write; } ;


 int FUNC_0 (int *,char*,int) ;
 struct sdio_func* FUNC_1 (int ) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (struct wilc*,struct sdio_cmd52*) ;
 int FUNC_4 (struct wilc*,struct sdio_cmd53*) ;
 int FUNC_5 (struct wilc*,int) ;

__attribute__((used)) static int FUNC_6(struct wilc *VAR_0, u32 VAR_1, u32 *VAR_2)
{
 struct sdio_func *VAR_3 = FUNC_1(VAR_0->dev);
 struct wilc_sdio *VAR_4 = VAR_0->bus_data;
 int VAR_5;

 if (VAR_1 >= 0xf0 && VAR_1 <= 0xff) {
  struct sdio_cmd52 VAR_6;

  VAR_6.read_write = 0;
  VAR_6.function = 0;
  VAR_6.raw = 0;
  VAR_6.address = VAR_1;
  VAR_5 = FUNC_3(VAR_0, &VAR_6);
  if (VAR_5) {
   FUNC_0(&VAR_3->dev,
    "Failed cmd 52, read reg (%08x) ...\n", VAR_1);
   goto fail;
  }
  *VAR_2 = VAR_6.data;
 } else {
  struct sdio_cmd53 VAR_7;

  if (!FUNC_5(VAR_0, VAR_1))
   goto fail;

  VAR_7.read_write = 0;
  VAR_7.function = 0;
  VAR_7.address = 0x10f;
  VAR_7.block_mode = 0;
  VAR_7.increment = 1;
  VAR_7.count = 4;
  VAR_7.buffer = (u8 *)VAR_2;

  VAR_7.block_size = VAR_4->block_size;
  VAR_5 = FUNC_4(VAR_0, &VAR_7);
  if (VAR_5) {
   FUNC_0(&VAR_3->dev,
    "Failed cmd53, read reg (%08x)...\n", VAR_1);
   goto fail;
  }
 }

 FUNC_2(VAR_2);

 return 1;

fail:

 return 0;
}
