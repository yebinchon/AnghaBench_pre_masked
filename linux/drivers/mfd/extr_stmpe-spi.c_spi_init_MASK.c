
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmpe {TYPE_1__* variant; struct spi_device* client; } ;
struct spi_device {int bits_per_word; int dev; int mode; } ;
struct TYPE_2__ {int id_val; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct stmpe*,int ,int ) ;
 scalar_t__ FUNC_2 (struct spi_device*) ;

__attribute__((used)) static void FUNC_3(struct stmpe *VAR_1)
{
 struct spi_device *VAR_2 = VAR_1->client;

 VAR_2->bits_per_word = 8;


 if (VAR_1->variant->id_val == 0x0811)
  FUNC_1(VAR_1, VAR_0, VAR_2->mode);

 if (FUNC_2(VAR_2) < 0)
  FUNC_0(&VAR_2->dev, "spi_setup failed\n");
}
