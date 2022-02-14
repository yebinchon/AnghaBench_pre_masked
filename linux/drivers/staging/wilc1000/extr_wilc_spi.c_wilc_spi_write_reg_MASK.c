
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
 int VAR_2 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct wilc*,int,int,int*,int,int) ;
 struct spi_device* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct wilc *VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct spi_device *VAR_6 = FUNC_3(VAR_3->dev);
 int VAR_7 = VAR_2;
 u8 VAR_8 = VAR_1;
 u8 VAR_9 = 0;

 FUNC_0(&VAR_5);
 if (VAR_4 < 0x30) {

  VAR_8 = VAR_0;
  VAR_9 = 1;
 }

 VAR_7 = FUNC_2(VAR_3, VAR_8, VAR_4, (u8 *)&VAR_5, 4, VAR_9);
 if (VAR_7 != VAR_2)
  FUNC_1(&VAR_6->dev, "Failed cmd, write reg (%08x)...\n", VAR_4);

 return VAR_7;
}
