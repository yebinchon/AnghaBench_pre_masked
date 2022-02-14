
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tosa_bl_data {TYPE_1__* i2c; int comadj; } ;
struct spi_device {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct spi_device* FUNC_0 (int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (struct spi_device*,int) ;

__attribute__((used)) static void FUNC_4(struct tosa_bl_data *VAR_3, int VAR_4)
{
 struct spi_device *VAR_5 = FUNC_0(&VAR_3->i2c->dev);

 FUNC_2(VAR_3->i2c, VAR_0, VAR_3->comadj);


 FUNC_2(VAR_3->i2c, VAR_1, (u8)(VAR_4 & 0xff));


 FUNC_1(VAR_2, VAR_4 & 0x100);

 FUNC_3(VAR_5, VAR_4);
}
