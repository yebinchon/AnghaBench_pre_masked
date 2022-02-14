
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wilc_sdio {int block_size; } ;
struct wilc {struct wilc_sdio* bus_data; int dev; } ;
struct sdio_func {int dev; } ;
struct sdio_cmd53 {int function; int address; int block_mode; int increment; int count; int block_size; int * buffer; scalar_t__ read_write; } ;


 int FUNC_0 (int *,char*,int) ;
 struct sdio_func* FUNC_1 (int ) ;
 int FUNC_2 (struct wilc*,struct sdio_cmd53*) ;
 int FUNC_3 (struct wilc*,int) ;

__attribute__((used)) static int FUNC_4(struct wilc *VAR_0, u32 VAR_1, u8 *VAR_2, u32 VAR_3)
{
 struct sdio_func *VAR_4 = FUNC_1(VAR_0->dev);
 struct wilc_sdio *VAR_5 = VAR_0->bus_data;
 u32 VAR_6 = VAR_5->block_size;
 struct sdio_cmd53 VAR_7;
 int VAR_8, VAR_9, VAR_10;

 VAR_7.read_write = 0;
 if (VAR_1 > 0) {



  if (VAR_3 & 0x3) {
   VAR_3 += 4;
   VAR_3 &= ~0x3;
  }




  VAR_7.function = 0;
  VAR_7.address = 0x10f;
 } else {



  if (VAR_3 & 0x3) {
   VAR_3 += 4;
   VAR_3 &= ~0x3;
  }




  VAR_7.function = 1;
  VAR_7.address = 0;
 }

 VAR_8 = VAR_3 / VAR_6;
 VAR_9 = VAR_3 % VAR_6;

 if (VAR_8 > 0) {
  VAR_7.block_mode = 1;
  VAR_7.increment = 1;
  VAR_7.count = VAR_8;
  VAR_7.buffer = VAR_2;
  VAR_7.block_size = VAR_6;
  if (VAR_1 > 0) {
   if (!FUNC_3(VAR_0, VAR_1))
    goto fail;
  }
  VAR_10 = FUNC_2(VAR_0, &VAR_7);
  if (VAR_10) {
   FUNC_0(&VAR_4->dev,
    "Failed cmd53 [%x], block read...\n", VAR_1);
   goto fail;
  }
  if (VAR_1 > 0)
   VAR_1 += VAR_8 * VAR_6;
  VAR_2 += VAR_8 * VAR_6;
 }

 if (VAR_9 > 0) {
  VAR_7.block_mode = 0;
  VAR_7.increment = 1;
  VAR_7.count = VAR_9;
  VAR_7.buffer = VAR_2;

  VAR_7.block_size = VAR_6;

  if (VAR_1 > 0) {
   if (!FUNC_3(VAR_0, VAR_1))
    goto fail;
  }
  VAR_10 = FUNC_2(VAR_0, &VAR_7);
  if (VAR_10) {
   FUNC_0(&VAR_4->dev,
    "Failed cmd53 [%x], bytes read...\n", VAR_1);
   goto fail;
  }
 }

 return 1;

fail:

 return 0;
}
