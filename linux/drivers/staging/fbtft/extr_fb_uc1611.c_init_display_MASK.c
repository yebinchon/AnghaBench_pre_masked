
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fbtft_par {TYPE_1__* info; TYPE_2__* spi; } ;
struct TYPE_4__ {int mode; } ;
struct TYPE_3__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_2 (struct fbtft_par*,int) ;

__attribute__((used)) static int FUNC_3(struct fbtft_par *VAR_7)
{
 int VAR_8;


 VAR_7->spi->mode |= VAR_0;
 VAR_8 = FUNC_1(VAR_7->spi);
 if (VAR_8) {
  FUNC_0(VAR_7->info->device, "Could not set SPI_CS_HIGH\n");
  return VAR_8;
 }


 FUNC_2(VAR_7, 0xE2);


 FUNC_2(VAR_7, 0xE8 | (VAR_5 & 0x03));


 FUNC_2(VAR_7, 0x81);
 FUNC_2(VAR_7, (VAR_1 & 0x03) << 6 | (VAR_3 & 0x3F));


 FUNC_2(VAR_7, 0x24 | (VAR_6 & 0x03));


 FUNC_2(VAR_7, 0x28 | (VAR_2 & 0x03));


 FUNC_2(VAR_7, 0x2C | (VAR_4 & 0x03));


 FUNC_2(VAR_7, 0xA6 | (0x01 & 0x01));


 FUNC_2(VAR_7, 0xD0 | (0x02 & 0x03));


 FUNC_2(VAR_7, 0xA8 | 0x07);

 return 0;
}
