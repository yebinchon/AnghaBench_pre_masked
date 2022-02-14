
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_nor {int dev; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 unsigned long VAR_1 ;
 int FUNC_2 (struct spi_nor*) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct spi_nor *VAR_2,
      unsigned long VAR_3)
{
 unsigned long VAR_4;
 int VAR_5 = 0, VAR_6;

 VAR_4 = VAR_1 + VAR_3;

 while (!VAR_5) {
  if (FUNC_3(VAR_1, VAR_4))
   VAR_5 = 1;

  VAR_6 = FUNC_2(VAR_2);
  if (VAR_6 < 0)
   return VAR_6;
  if (VAR_6)
   return 0;

  FUNC_0();
 }

 FUNC_1(VAR_2->dev, "flash operation timed out\n");

 return -VAR_0;
}
