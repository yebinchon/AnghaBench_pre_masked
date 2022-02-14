
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; } ;
struct spi_nor {int addr_width; int flags; int dev; TYPE_1__ mtd; TYPE_2__* info; } ;
struct TYPE_4__ {int addr_width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct spi_nor*) ;

__attribute__((used)) static int FUNC_2(struct spi_nor *VAR_4)
{
 if (VAR_4->addr_width) {

 } else if (VAR_4->info->addr_width) {
  VAR_4->addr_width = VAR_4->info->addr_width;
 } else if (VAR_4->mtd.size > 0x1000000) {

  VAR_4->addr_width = 4;
 } else {
  VAR_4->addr_width = 3;
 }

 if (VAR_4->addr_width > VAR_3) {
  FUNC_0(VAR_4->dev, "address width is too large: %u\n",
   VAR_4->addr_width);
  return -VAR_0;
 }


 if (VAR_4->addr_width == 4 && VAR_4->flags & VAR_1 &&
     !(VAR_4->flags & VAR_2))
  FUNC_1(VAR_4);

 return 0;
}
