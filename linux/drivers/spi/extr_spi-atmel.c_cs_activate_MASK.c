
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct spi_device {int chip_select; int mode; int dev; TYPE_2__* master; struct atmel_spi_device* controller_state; } ;
struct atmel_spi_device {int csr; int npcs_pin; } ;
struct TYPE_3__ {scalar_t__ has_wdrbt; } ;
struct atmel_spi {scalar_t__ use_cs_gpios; TYPE_1__ caps; } ;
struct TYPE_4__ {int num_chipselect; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct atmel_spi*) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct atmel_spi*,scalar_t__) ;
 int FUNC_7 (struct atmel_spi*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_8(struct atmel_spi *VAR_8, struct spi_device *VAR_9)
{
 struct atmel_spi_device *VAR_10 = VAR_9->controller_state;
 u32 VAR_11;

 if (FUNC_3(VAR_8)) {
  FUNC_7(VAR_8, VAR_1 + 4 * VAR_9->chip_select, VAR_10->csr);



  FUNC_7(VAR_8, VAR_1, VAR_10->csr);
  if (VAR_8->caps.has_wdrbt) {
   FUNC_7(VAR_8, VAR_3,
     FUNC_0(VAR_5, ~(0x01 << VAR_9->chip_select))
     | FUNC_2(VAR_7)
     | FUNC_2(VAR_2)
     | FUNC_2(VAR_4));
  } else {
   FUNC_7(VAR_8, VAR_3,
     FUNC_0(VAR_5, ~(0x01 << VAR_9->chip_select))
     | FUNC_2(VAR_2)
     | FUNC_2(VAR_4));
  }

  VAR_11 = FUNC_6(VAR_8, VAR_3);
  if (VAR_8->use_cs_gpios)
   FUNC_5(VAR_10->npcs_pin, 1);
 } else {
  u32 VAR_12 = (VAR_9->mode & VAR_6) ? FUNC_2(VAR_0) : 0;
  int VAR_13;
  u32 VAR_14;


  for (VAR_13 = 0; VAR_13 < VAR_9->master->num_chipselect; VAR_13++) {
   VAR_14 = FUNC_6(VAR_8, VAR_1 + 4 * VAR_13);
   if ((VAR_14 ^ VAR_12) & FUNC_2(VAR_0))
    FUNC_7(VAR_8, VAR_1 + 4 * VAR_13,
      VAR_14 ^ FUNC_2(VAR_0));
  }

  VAR_11 = FUNC_6(VAR_8, VAR_3);
  VAR_11 = FUNC_1(VAR_5, ~(1 << VAR_9->chip_select), VAR_11);
  if (VAR_8->use_cs_gpios && VAR_9->chip_select != 0)
   FUNC_5(VAR_10->npcs_pin, 1);
  FUNC_7(VAR_8, VAR_3, VAR_11);
 }

 FUNC_4(&VAR_9->dev, "activate NPCS, mr %08x\n", VAR_11);
}
