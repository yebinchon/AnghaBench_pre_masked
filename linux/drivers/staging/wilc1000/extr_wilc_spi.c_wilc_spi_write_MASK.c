
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wilc {int dev; } ;
struct spi_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct wilc*,int ,int,int *,int,int ) ;
 int FUNC_2 (struct wilc*,int *,int) ;
 struct spi_device* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct wilc *VAR_2, u32 VAR_3, u8 *VAR_4, u32 VAR_5)
{
 struct spi_device *VAR_6 = FUNC_3(VAR_2->dev);
 int VAR_7;




 if (VAR_5 <= 4)
  return 0;

 VAR_7 = FUNC_1(VAR_2, VAR_0, VAR_3, ((void*)0), VAR_5, 0);
 if (VAR_7 != VAR_1) {
  FUNC_0(&VAR_6->dev,
   "Failed cmd, write block (%08x)...\n", VAR_3);
  return 0;
 }




 VAR_7 = FUNC_2(VAR_2, VAR_4, VAR_5);
 if (VAR_7 != VAR_1)
  FUNC_0(&VAR_6->dev, "Failed block data write...\n");

 return 1;
}
