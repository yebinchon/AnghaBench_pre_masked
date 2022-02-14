
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
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct wilc*,int ,int ,int *,int,int ) ;
 struct spi_device* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct wilc *VAR_2, u32 VAR_3, u32 *VAR_4)
{
 struct spi_device *VAR_5 = FUNC_3(VAR_2->dev);
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_0, VAR_3, (u8 *)VAR_4, 4,
      0);
 if (VAR_6 != VAR_1) {
  FUNC_0(&VAR_5->dev, "Failed internal read cmd...\n");
  return 0;
 }

 FUNC_1(VAR_4);

 return 1;
}
