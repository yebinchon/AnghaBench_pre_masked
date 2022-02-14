
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct fsl_dspi {int bits_per_word; TYPE_2__* cur_chip; TYPE_1__* devtype_data; int tx_cmd; } ;
struct TYPE_4__ {int ctar_val; } ;
struct TYPE_3__ {scalar_t__ xspi_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fsl_dspi*) ;
 int FUNC_1 (struct fsl_dspi*) ;
 int FUNC_2 (struct fsl_dspi*) ;
 int FUNC_3 (struct fsl_dspi*,int) ;

__attribute__((used)) static void FUNC_4(struct fsl_dspi *VAR_2)
{

 VAR_2->tx_cmd |= VAR_1;

 if (VAR_2->devtype_data->xspi_mode && VAR_2->bits_per_word > 16) {



  u32 VAR_3 = FUNC_1(VAR_2);

  if (VAR_2->cur_chip->ctar_val & VAR_0) {

   FUNC_3(VAR_2, VAR_3 & 0xFFFF);
   FUNC_3(VAR_2, VAR_3 >> 16);
  } else {

   FUNC_3(VAR_2, VAR_3 >> 16);
   FUNC_3(VAR_2, VAR_3 & 0xFFFF);
  }
  FUNC_0(VAR_2);
 } else {



  FUNC_2(VAR_2);
 }
}
