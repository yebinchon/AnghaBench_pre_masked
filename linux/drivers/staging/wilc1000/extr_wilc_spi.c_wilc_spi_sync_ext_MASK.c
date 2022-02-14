
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wilc_spi {int nint; } ;
struct wilc {struct wilc_spi* bus_data; int dev; } ;
struct spi_device {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,int) ;
 struct spi_device* FUNC_2 (int ) ;
 int FUNC_3 (struct wilc*,int,int *) ;
 int FUNC_4 (struct wilc*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct wilc *VAR_4, int VAR_5)
{
 struct spi_device *VAR_6 = FUNC_2(VAR_4->dev);
 struct wilc_spi *VAR_7 = VAR_4->bus_data;
 u32 VAR_8;
 int VAR_9, VAR_10;

 if (VAR_5 > VAR_0) {
  FUNC_1(&VAR_6->dev, "Too many interrupts (%d)...\n", VAR_5);
  return 0;
 }

 VAR_7->nint = VAR_5;




 VAR_9 = FUNC_3(VAR_4, VAR_3, &VAR_8);
 if (!VAR_9) {
  FUNC_1(&VAR_6->dev, "Failed read reg (%08x)...\n",
   VAR_3);
  return 0;
 }
 VAR_8 |= FUNC_0(8);
 VAR_9 = FUNC_4(VAR_4, VAR_3, VAR_8);
 if (!VAR_9) {
  FUNC_1(&VAR_6->dev, "Failed write reg (%08x)...\n",
   VAR_3);
  return 0;
 }




 VAR_9 = FUNC_3(VAR_4, VAR_2, &VAR_8);
 if (!VAR_9) {
  FUNC_1(&VAR_6->dev, "Failed read reg (%08x)...\n",
   VAR_2);
  return 0;
 }

 for (VAR_10 = 0; (VAR_10 < 5) && (VAR_5 > 0); VAR_10++, VAR_5--)
  VAR_8 |= (FUNC_0((27 + VAR_10)));

 VAR_9 = FUNC_4(VAR_4, VAR_2, VAR_8);
 if (!VAR_9) {
  FUNC_1(&VAR_6->dev, "Failed write reg (%08x)...\n",
   VAR_2);
  return 0;
 }
 if (VAR_5) {
  VAR_9 = FUNC_3(VAR_4, VAR_1, &VAR_8);
  if (!VAR_9) {
   FUNC_1(&VAR_6->dev, "Failed read reg (%08x)...\n",
    VAR_1);
   return 0;
  }

  for (VAR_10 = 0; (VAR_10 < 3) && (VAR_5 > 0); VAR_10++, VAR_5--)
   VAR_8 |= FUNC_0(VAR_10);

  VAR_9 = FUNC_3(VAR_4, VAR_1, &VAR_8);
  if (!VAR_9) {
   FUNC_1(&VAR_6->dev, "Failed write reg (%08x)...\n",
    VAR_1);
   return 0;
  }
 }

 return 1;
}
