
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wilc_sdio {int nint; int irq_gpio; } ;
struct wilc {struct wilc_sdio* bus_data; int dev; } ;
struct sdio_func {int dev; } ;
struct sdio_cmd52 {int function; int address; int data; scalar_t__ raw; scalar_t__ read_write; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,char*,int,int) ;
 struct sdio_func* FUNC_2 (int ) ;
 int FUNC_3 (struct wilc*,struct sdio_cmd52*) ;
 int FUNC_4 (struct wilc*,int*) ;

__attribute__((used)) static int FUNC_5(struct wilc *VAR_8, u32 *VAR_9)
{
 struct sdio_func *VAR_10 = FUNC_2(VAR_8->dev);
 struct wilc_sdio *VAR_11 = VAR_8->bus_data;
 u32 VAR_12;
 struct sdio_cmd52 VAR_13;

 FUNC_4(VAR_8, &VAR_12);




 if (!VAR_11->irq_gpio) {
  int VAR_14;

  VAR_13.read_write = 0;
  VAR_13.function = 1;
  VAR_13.address = 0x04;
  VAR_13.data = 0;
  FUNC_3(VAR_8, &VAR_13);

  if (VAR_13.data & FUNC_0(0))
   VAR_12 |= VAR_0;
  if (VAR_13.data & FUNC_0(2))
   VAR_12 |= VAR_1;
  if (VAR_13.data & FUNC_0(3))
   VAR_12 |= VAR_2;
  if (VAR_13.data & FUNC_0(4))
   VAR_12 |= VAR_3;
  if (VAR_13.data & FUNC_0(5))
   VAR_12 |= VAR_4;
  if (VAR_13.data & FUNC_0(6))
   VAR_12 |= VAR_5;
  for (VAR_14 = VAR_11->nint; VAR_14 < VAR_7; VAR_14++) {
   if ((VAR_12 >> (VAR_6 + VAR_14)) & 0x1) {
    FUNC_1(&VAR_10->dev,
     "Unexpected interrupt (1) : tmp=%x, data=%x\n",
     VAR_12, VAR_13.data);
    break;
   }
  }
 } else {
  u32 VAR_15;

  VAR_13.read_write = 0;
  VAR_13.function = 0;
  VAR_13.raw = 0;
  VAR_13.address = 0xf7;
  VAR_13.data = 0;
  FUNC_3(VAR_8, &VAR_13);
  VAR_15 = VAR_13.data & 0x1f;
  VAR_12 |= ((VAR_15 >> 0) << VAR_6);
 }

 *VAR_9 = VAR_12;

 return 1;
}
