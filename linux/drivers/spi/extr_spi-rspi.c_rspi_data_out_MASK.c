
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rspi_data {TYPE_1__* ctlr; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct rspi_data*) ;
 int FUNC_2 (struct rspi_data*,int ) ;

__attribute__((used)) static int FUNC_3(struct rspi_data *VAR_0, u8 VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0);
 if (VAR_2 < 0) {
  FUNC_0(&VAR_0->ctlr->dev, "transmit timeout\n");
  return VAR_2;
 }
 FUNC_2(VAR_0, VAR_1);
 return 0;
}
