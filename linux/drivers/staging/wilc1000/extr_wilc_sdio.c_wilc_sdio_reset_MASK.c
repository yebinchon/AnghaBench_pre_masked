
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilc {int dev; } ;
struct sdio_func {int dev; } ;
struct sdio_cmd52 {int read_write; int address; int data; scalar_t__ raw; scalar_t__ function; } ;


 int FUNC_0 (int *,char*) ;
 struct sdio_func* FUNC_1 (int ) ;
 int FUNC_2 (struct wilc*,struct sdio_cmd52*) ;

__attribute__((used)) static int FUNC_3(struct wilc *VAR_0)
{
 struct sdio_cmd52 VAR_1;
 int VAR_2;
 struct sdio_func *VAR_3 = FUNC_1(VAR_0->dev);

 VAR_1.read_write = 1;
 VAR_1.function = 0;
 VAR_1.raw = 0;
 VAR_1.address = 0x6;
 VAR_1.data = 0x8;
 VAR_2 = FUNC_2(VAR_0, &VAR_1);
 if (VAR_2) {
  FUNC_0(&VAR_3->dev, "Fail cmd 52, reset cmd ...\n");
  return VAR_2;
 }
 return 0;
}
