
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pcan_pccard {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct pcan_pccard*,int ) ;
 int FUNC_3 (struct pcan_pccard*) ;
 int FUNC_4 (struct pcan_pccard*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct pcan_pccard *VAR_11, u16 VAR_12, u8 VAR_13)
{
 u8 VAR_14;
 int VAR_15, VAR_16;


 FUNC_4(VAR_11, VAR_9, VAR_5);
 VAR_15 = FUNC_3(VAR_11);
 if (VAR_15)
  goto we_spi_err;


 for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++) {

  FUNC_4(VAR_11, VAR_9, VAR_1);
  VAR_15 = FUNC_3(VAR_11);
  if (VAR_15)
   goto we_spi_err;


  VAR_14 = FUNC_2(VAR_11, VAR_7);
  if (VAR_14 & VAR_2)
   break;
 }

 if (VAR_16 >= VAR_10) {
  FUNC_1(&VAR_11->pdev->dev,
   "stop waiting to be allowed to write in eeprom\n");
  return -VAR_0;
 }


 FUNC_4(VAR_11, VAR_6, VAR_12 & 0xff);
 FUNC_4(VAR_11, VAR_8, VAR_13);





 FUNC_4(VAR_11, VAR_9, FUNC_0(VAR_12));
 VAR_15 = FUNC_3(VAR_11);
 if (VAR_15)
  goto we_spi_err;


 for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++) {

  FUNC_4(VAR_11, VAR_9, VAR_1);
  VAR_15 = FUNC_3(VAR_11);
  if (VAR_15)
   goto we_spi_err;


  VAR_14 = FUNC_2(VAR_11, VAR_7);
  if (!(VAR_14 & VAR_3))
   break;
 }

 if (VAR_16 >= VAR_10) {
  FUNC_1(&VAR_11->pdev->dev,
   "stop waiting for write in eeprom to complete\n");
  return -VAR_0;
 }


 FUNC_4(VAR_11, VAR_9, VAR_4);
 VAR_15 = FUNC_3(VAR_11);
 if (VAR_15)
  goto we_spi_err;

 return 0;

we_spi_err:
 FUNC_1(&VAR_11->pdev->dev,
  "stop waiting (spi engine always busy) err %d\n", VAR_15);

 return VAR_15;
}
