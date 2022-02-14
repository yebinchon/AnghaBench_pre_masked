
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int membase; } ;
struct TYPE_4__ {TYPE_1__ port; } ;
struct serial_8250_men_mcb_data {int line; TYPE_2__ uart; } ;
struct mcb_device {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct mcb_device*,int ) ;
 struct serial_8250_men_mcb_data* FUNC_2 (struct mcb_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct mcb_device *VAR_0)
{
 int VAR_1, VAR_2;
 struct serial_8250_men_mcb_data *VAR_3 = FUNC_2(VAR_0);

 if (!VAR_3)
  return;

 VAR_1 = FUNC_1(VAR_0, VAR_3[0].uart.port.membase);
 if (VAR_1 < 0 || VAR_1 > 4) {
  FUNC_0(&VAR_0->dev, "error retrieving number of ports!\n");
  return;
 }

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  FUNC_3(VAR_3[VAR_2].line);
}
