
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
struct wilc {int dev; } ;
struct sdio_func {int dev; } ;
struct sdio_cmd52 {int read_write; int address; void* data; scalar_t__ raw; scalar_t__ function; } ;


 int FUNC_0 (int *,char*) ;
 struct sdio_func* FUNC_1 (int ) ;
 int FUNC_2 (struct wilc*,struct sdio_cmd52*) ;

__attribute__((used)) static int FUNC_3(struct wilc *VAR_0, u32 VAR_1)
{
 struct sdio_func *VAR_2 = FUNC_1(VAR_0->dev);
 struct sdio_cmd52 VAR_3;
 int VAR_4;




 VAR_3.read_write = 1;
 VAR_3.function = 0;
 VAR_3.raw = 0;
 VAR_3.address = 0x10c;
 VAR_3.data = (u8)VAR_1;
 VAR_4 = FUNC_2(VAR_0, &VAR_3);
 if (VAR_4) {
  FUNC_0(&VAR_2->dev, "Failed cmd52, set 0x10c data...\n");
  goto fail;
 }

 VAR_3.address = 0x10d;
 VAR_3.data = (u8)(VAR_1 >> 8);
 VAR_4 = FUNC_2(VAR_0, &VAR_3);
 if (VAR_4) {
  FUNC_0(&VAR_2->dev, "Failed cmd52, set 0x10d data...\n");
  goto fail;
 }

 VAR_3.address = 0x10e;
 VAR_3.data = (u8)(VAR_1 >> 16);
 VAR_4 = FUNC_2(VAR_0, &VAR_3);
 if (VAR_4) {
  FUNC_0(&VAR_2->dev, "Failed cmd52, set 0x10e data...\n");
  goto fail;
 }

 return 1;
fail:
 return 0;
}
