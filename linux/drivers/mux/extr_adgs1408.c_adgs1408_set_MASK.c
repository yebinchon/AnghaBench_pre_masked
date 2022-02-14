
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct spi_device {int dummy; } ;
struct mux_control {TYPE_2__* chip; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct spi_device*,int ,int ) ;
 struct spi_device* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct mux_control *VAR_3, int VAR_4)
{
 struct spi_device *VAR_5 = FUNC_2(VAR_3->chip->dev.parent);
 u8 VAR_6;

 if (VAR_4 == VAR_2)
  VAR_6 = VAR_0;
 else
  VAR_6 = FUNC_0(VAR_4);

 return FUNC_1(VAR_5, VAR_1, VAR_6);
}
