
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int write_vmem; int (* reset ) (struct fbtft_par*) ;} ;
struct fbtft_par {TYPE_2__ fbtftops; TYPE_1__* info; TYPE_3__* spi; } ;
struct TYPE_6__ {int mode; } ;
struct TYPE_4__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,struct fbtft_par*,char*,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (struct fbtft_par*) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct fbtft_par*) ;
 int FUNC_6 (struct fbtft_par*,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(struct fbtft_par *VAR_4)
{
 int VAR_5;
 unsigned int VAR_6;
 u8 VAR_7;


 VAR_7 = VAR_4->spi->mode;
 VAR_4->spi->mode |= VAR_1;
 VAR_5 = FUNC_4(VAR_4->spi);
 if (VAR_5) {
  FUNC_0(VAR_4->info->device, "Could not set SPI_CS_HIGH\n");
  return VAR_5;
 }
 FUNC_6(VAR_4, 0x00);

 FUNC_3(50);
 VAR_4->fbtftops.reset(VAR_4);
 FUNC_3(1000);
 VAR_4->spi->mode = VAR_7;
 VAR_5 = FUNC_4(VAR_4->spi);
 if (VAR_5) {
  FUNC_0(VAR_4->info->device, "Could not restore SPI mode\n");
  return VAR_5;
 }
 FUNC_6(VAR_4, 0x00);

 VAR_6 = FUNC_2(VAR_4);
 FUNC_1(VAR_0, VAR_4, "Firmware version: %x.%02x\n",
        VAR_6 >> 8, VAR_6 & 0xFF);

 if (VAR_2 == 332)
  VAR_4->fbtftops.write_vmem = VAR_3;
 return 0;
}
