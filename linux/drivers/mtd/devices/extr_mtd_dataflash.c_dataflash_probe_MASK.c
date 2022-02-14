
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct flash_info {int flags; int pageoffset; int pagesize; int nr_pages; int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct flash_info*) ;
 int FUNC_1 (struct flash_info*) ;
 int VAR_1 ;
 int FUNC_2 (struct spi_device*,char*,int,int,int) ;
 int FUNC_3 (struct spi_device*,int ,int ,int ,int ,char) ;
 int FUNC_4 (struct spi_device*) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *,char*,int) ;
 struct flash_info* FUNC_7 (struct spi_device*) ;

__attribute__((used)) static int FUNC_8(struct spi_device *VAR_2)
{
 int VAR_3;
 struct flash_info *VAR_4;
 VAR_4 = FUNC_7(VAR_2);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);
 if (VAR_4 != ((void*)0))
  return FUNC_3(VAR_2, VAR_4->name, VAR_4->nr_pages,
    VAR_4->pagesize, VAR_4->pageoffset,
    (VAR_4->flags & VAR_1) ? 'd' : 'c');





 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3 <= 0 || VAR_3 == 0xff) {
  FUNC_5(&VAR_2->dev, "status error %d\n", VAR_3);
  if (VAR_3 == 0 || VAR_3 == 0xff)
   VAR_3 = -VAR_0;
  return VAR_3;
 }





 switch (VAR_3 & 0x3c) {
 case 0x0c:
  VAR_3 = FUNC_2(VAR_2, "AT45DB011B", 512, 264, 9);
  break;
 case 0x14:
  VAR_3 = FUNC_2(VAR_2, "AT45DB021B", 1024, 264, 9);
  break;
 case 0x1c:
  VAR_3 = FUNC_2(VAR_2, "AT45DB041x", 2048, 264, 9);
  break;
 case 0x24:
  VAR_3 = FUNC_2(VAR_2, "AT45DB081B", 4096, 264, 9);
  break;
 case 0x2c:
  VAR_3 = FUNC_2(VAR_2, "AT45DB161x", 4096, 528, 10);
  break;
 case 0x34:
  VAR_3 = FUNC_2(VAR_2, "AT45DB321x", 8192, 528, 10);
  break;
 case 0x38:
 case 0x3c:
  VAR_3 = FUNC_2(VAR_2, "AT45DB642x", 8192, 1056, 11);
  break;

 default:
  FUNC_6(&VAR_2->dev, "unsupported device (%x)\n",
    VAR_3 & 0x3c);
  VAR_3 = -VAR_0;
 }

 if (VAR_3 < 0)
  FUNC_5(&VAR_2->dev, "add_dataflash --> %d\n", VAR_3);

 return VAR_3;
}
